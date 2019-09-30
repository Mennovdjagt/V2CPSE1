#include "hwlib.hpp"
#include "sin.hpp"
#include "clock.hpp"

int main( void ){	

   namespace target = hwlib::target; 

   auto scl = target::pin_oc( target::pins::scl );
   auto sda = target::pin_oc( target::pins::sda );
   auto i2c_bus = hwlib::i2c_bus_bit_banged_scl_sda( scl,sda );

   auto display = hwlib::glcd_oled{ i2c_bus, 0x3c };

   hwlib::wait_ms(100);
   
   display.clear();

   hwlib::circle( hwlib::xy( 64, 32 ), 2 ).draw( display );

   auto s = sinus();

   for(int i = 0; i < 360; i+=30){
      int x = s.scaled_sine_from_degrees(i, 64);
      int y = s.scaled_cosine_from_degrees(i, 32);

      hwlib::cout << "x: " << x << " y: " << y << "\n";

      hwlib::circle( hwlib::xy( x, y ), 2 ).draw( display );
   }

   //hwlib::circle( hwlib::xy( x, y ), 2 ).draw( display );
   //hwlib::circle( hwlib::xy( x1, y1 ), 2 ).draw( display );
   //hwlib::circle( hwlib::xy( x2, y2 ), 2 ).draw( display );
   //hwlib::circle( hwlib::xy( x3, y3 ), 2 ).draw( display );

   display.flush();

}
