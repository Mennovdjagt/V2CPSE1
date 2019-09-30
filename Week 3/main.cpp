#include "hwlib.hpp"
#include "sinus.hpp"
#include "clock.hpp"

int main( void ){	

   namespace target = hwlib::target; 

   auto scl = target::pin_oc( target::pins::scl );
   auto sda = target::pin_oc( target::pins::sda );
   auto i2c_bus = hwlib::i2c_bus_bit_banged_scl_sda( scl,sda );

   auto display = hwlib::glcd_oled{ i2c_bus, 0x3c };

   hwlib::wait_ms(100);
   
   constexpr hwlib::xy location = hwlib::xy( 64, 32 );
   int radius = 30;
   int sizeMarker = 2;
   int hour = 0;
   int minut = 15;
   int second = 30;
   constexpr auto sinus = lookup< 360, int >( scaled_sine_from_degrees );
   constexpr auto cosinus = lookup< 360, int >( scaled_cosine_from_degrees );

   clock klok = clock( display, location, radius, sizeMarker, hour, minut, second, sinus, cosinus );

   for(;;){
      klok.updateTime(hour, minut, second);
      if(hour == 11){ hour = 0; }else{ hour++; }
      if(minut == 59){ minut = 0; }else{ minut++; }
      if(second == 59){ second = 0; }else{ second++; }
      hwlib::wait_ms(500);
   }

}
