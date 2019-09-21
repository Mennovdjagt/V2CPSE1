#include <iostream>
#include "note_player_print.hpp"
#include <fstream>

using namespace std;
  
void note_player_print::play( const note & n ){
   ofstream myfile;
   myfile.open("melody.cpp", fstream::app);

   if(n.frequency != 0){
      if (myfile.is_open()){
          myfile << "   p.play( note{ note( " << n.frequency << " ), note( " << n.duration << ") } );\n";   
	      myfile.close();
	  }
   }
}
