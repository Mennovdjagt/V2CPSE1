#include "note_player_print.hpp"

note_player_print::note_player_print(){
	#ifdef BMPTK_TARGET
	hwlib::cout << "#ifndef _MELODY1_HPP" << hwlib::endl << "#define _MELODY1_HPP" << hwlib::endl << hwlib::endl << "#include " << char(34) << "melody.hpp" << char(34) << hwlib::endl << hwlib::endl << "class melody1 : public melody {" << hwlib::endl << "public:" << hwlib::endl << "	void play( note_player & p ){" << hwlib::endl;
	#else
	std::cout << "#ifndef _MELODY1_HPP" << std::endl << "#define _MELODY1_HPP" << std::endl << std::endl << "#include " << char(34) << "melody.hpp" << char(34) << std::endl << std::endl << "class melody1 : public melody {" << std::endl << "public:" << std::endl << "	void play( note_player & p ){" << std::endl;
	#endif
};

note_player_print::~note_player_print(){
	#ifdef BMPTK_TARGET
	hwlib::cout << char(9) << '}' << hwlib::endl << "};" << hwlib::endl << hwlib::endl << "#endif //_MELODY1_HPP" << hwlib::endl;
	#else
	std::cout << char(9) << '}' << std::endl << "};" << std::endl << std::endl << "#endif //_MELODY1_HPP" << std::endl;
	#endif
}
  
void note_player_print::play( const note & n ){
	#ifdef BMPTK_TARGET
	hwlib::cout << char(9) << char(9) << "p.play( note{ " << n.frequency << ", " << n.duration << "} );" << hwlib::endl;
	#else
	std::cout << char(9) << char(9) << "p.play( note{ " << n.frequency << ", " << n.duration << "} );" << std::endl;
	#endif
}
