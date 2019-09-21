

//#include "hwlib.hpp"
#include "fur_elise.hpp"
#include "rtttl_player.hpp"
#include "note_player_print.hpp"
#include "melody.hpp"
#include <iostream>

const char sos[]            = "SOS:d=4,o=5,b=60:a,p,a,p,a,p,2a.,p,2a.,p,2a.,p,a,p,a,p,a";
const char let_it_be[]      = "Beatles Let It Be:d=4,o=5,b=100:16e6,8d6,c6,16e6,8g6,8a6,8g.6,16g6,8g6,8e6,16d6,8c6,16a,8g,e.6,p,8e6,16e6,8f.6,8e6,8e6,8d6,16p,16e6,16d6,8d6,2c.6";
const char muppets[]        = "Muppets:d=4,o=5,b=250:c6,c6,a,b,8a,b,g,p,c6,c6,a,8b,8a,8p,g.,p,e,e,g,f,8e,f,8c6,8c,8d,e,8e,8e,8p,8e,g,2p,c6,c6,a,b,8a,b,g,p,c6,c6,a,8b,a,g.,p,e,e,g,f,8e,f,8c6,8c,8d,e,8e,d,8d,c";
const char rickroll[]       = "Never gonna give you up:d=4,o=5,b=120:16c,16d,16f,16d,16a.,16p,32p,8a,16p,g.,16c,16d,16f,16d,16g.,16p,32p,8g,16p,8f.,16e,8d,16c,16d,16f,16d,f,8g,8e.,16d,8c,8c4,8c,8g,8p,2f,16c,16d,16f,16d,16a.,16p,32p,8a,16p,g.,16c,16d,16f,16d,c6,8e,8f.,16e,8d,16c,16d,16f,16d,f,8g,8e.,16d,8c,8c4,8c,8g,8p,2f";
const char one[]            = "NumberOne:d=16,o=5,b=168:4f.,8c6,16b5,16c6,16b5,16c6,8b5,8c6,4g#5,4f.,8f,8g#5,8c6,4c#6,4g#5,4c#6,4d#6,8c6,8c#6,8c6,8c#6,2c6";
const char indiana_jones[]  = "Indiana Jones:d=4,o=5,b=250:e,8p,8f,8g,8p,1c6,8p.,d,8p,8e,1f,p.,g,8p,8a,8b,8p,1f6,p,a,8p,8b,2c6,2d6,2e6,e,8p,8f,8g,8p,1c6,p,d6,8p,8e6,1f.6,g,8p,8g,e.6,8p,d6,8p,8g,e.6,8p,d6,8p,8g,f.6,8p,e6,8p,8d6,2c6";
const char star_wars[]      = "starwars:d=4,o=5,b=180:8f,8f,8f,2a#.,2f.6,8d#6,8d6,8c6,2a#.6,f.6,8d#6,8d6,8c6,2a#.6,f.6,8d#6,8d6,8d#6,2c6,p,8f,8f,8f,2a#.,2f.6,8d#6,8d6,8c6,2a#.6,f.6,8d#6,8d6,8c6,2a#.6,f.6,8d#6,8d6,8d#6,2c6";
const char hawaii_50[]      = "Hawii50:d=4,o=6,b=80:32p,16a5,16a5,16c,16e.,8d.,a5,16a5,16a5,16g5,16c.,a.5,16a5,16a5,16c,16e.,8d.,a,16g,16g,16e,16c.,2a,16c7,16a#,16a,16g,16f,16e,16d,16e,16c,d,16d,16c7,16a#,16g#,16g,16e,16d,16c,16d,16e.,16d,16c.,8d,a,16g,16g,16e,16c.,2d";
const char mickey[]         = "Mickey:d=4,o=6,b=140:16c,16p,32p,8c,16c,16p,32p,8c,16c,16p,32p,8c,16c,16p,32p,8c,16d,16p,32p,8c,16b5,16p,32p,8a5,g5,p,16c,16p,32p,8c,8c,8p,16c,16p,32p,8c,8c,8p,16e,16p,32p,8c,16d,16p,32p,8b5,c,8p";
const char gravityFalls[]   = "GravityFalls:d=4,o=5,b=162:8f,8d,8a4,8d,8f,8d,8a4,8d,8f,8c,8a4,8c,8f,8c,8a4,8c,8e,8c#,8a4,8c#,8e,8c#,8a4,8c#,8e,8c#,8a4,8c#,8e,8c#,8a4,8c#,2d.,e,1f,a.,g.,a,1c,2d.,e,2f,2e,2g,2a,2g,2f,p,f,f,f,a,a,g,f,p,a,a,a,g,a,g,f,p,f,f,f,a,a,g,f,p,a,a,a,p,c#6,c#6,c#6,p,f,f,f,a,a,g,f,p,a#,a#,a#,2a,2c6,2a,2c#6";

int main( void ){ 

   auto p = note_player_print();
   //hwlib::wait_ms( 500 );
   
   if( 0 ){
      auto fe = fur_elise();
      fe.play( p );
   }      

   if( 0 ){ rtttl_play( p, sos ); }   
   if( 0 ){ rtttl_play( p, let_it_be );  }
   if( 0 ){ rtttl_play( p, muppets );  }
   if( 0 ){ rtttl_play( p, rickroll );  }
   if( 0 ){ rtttl_play( p, one );  }
   if( 1 ){ rtttl_play( p, indiana_jones );  }
   if( 0 ){ rtttl_play( p, star_wars );  }
   if( 0 ){ rtttl_play( p, hawaii_50 );  }
   if( 0 ){ rtttl_play( p, mickey );  }
   if( 0 ){ rtttl_play( p, gravityFalls );  }

   std::cout   
      << "\n}\n";
}