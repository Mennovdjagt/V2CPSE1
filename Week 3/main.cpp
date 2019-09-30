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
   int hour = 3;
   int minut = 59;
   int second = 50;
   constexpr auto sinus = lookup< 360, int >( scaled_sine_from_degrees );
   constexpr auto cosinus = lookup< 360, int >( scaled_cosine_from_degrees );

   clock klok = clock( display, location, radius, sizeMarker, hour, minut, second, sinus, cosinus );

   unsigned int t = hwlib::now_us();

   for(;;){
   	  //unsigned int t = hwlib::now_us();						//to check the time it takes, take away the commands at the hwlib::now_us()

      if( hwlib::now_us() >= (t + 810700) ){					//it takes around 189300 microseconds to update the clock
      	 klok.updateTime();
         t = hwlib::now_us();
      }
      //hwlib::cout << hwlib::now_us() - t << "\n";
   }

}
