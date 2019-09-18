#include "hwlib.hpp"
#include "note_player_print.hpp"

  
void note_player_print::play( const note & n ){
   if( n.frequency == 0 ){
      hwlib::wait_us( n.duration );
      
   } else {
      hwlib::cout << "freq: " << n.frequency << ", dur: " << n.duration << "\n";
      auto end = hwlib::now_us() + n.duration;
      do { 
      } while ( end > hwlib::now_us() );
   }     
}
