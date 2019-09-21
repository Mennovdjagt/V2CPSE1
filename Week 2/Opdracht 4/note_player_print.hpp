#ifndef _NOTE_PLAYER_PRINT_HPP
#define _NOTE_PLAYER_PRINT_HPP

#include "note_player.hpp"

// ===========================================================================
//
// simple note player to display the notes
//
// ===========================================================================

class note_player_print : public note_player {
public: 
   //note_player_print( hwlib::pin_out & lsp ):
   //   lsp( lsp )
   //{}
   
   void play( const note & n ) override;
};

#endif
