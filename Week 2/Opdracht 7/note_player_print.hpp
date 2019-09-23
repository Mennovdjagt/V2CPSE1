#ifndef _NOTE_PLAYER_PRINT_HPP
#define _NOTE_PLAYER_PRINT_HPP

#ifdef BMPTK_TARGET
	#include "hwlib.hpp"
#else
	#include <iostream>
#endif
#include "note_player.hpp"

class note_player_print : public note_player {
public: 

   note_player_print();
   ~note_player_print();
   void play( const note & n ) override;

};

#endif
