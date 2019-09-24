#ifndef _MELODY1_HPP
#define _MELODY1_HPP

#include "melody.hpp"

class melody1 : public melody {
public:
	void play( note_player & p ){
		p.play( note{ 698, 166666} );
		p.play( note{ 698, 166666} );
		p.play( note{ 698, 166666} );
		p.play( note{ 932, 666666} );
		p.play( note{ 1396, 666666} );
		p.play( note{ 1244, 166666} );
		p.play( note{ 1174, 166666} );
		p.play( note{ 1046, 166666} );
		p.play( note{ 1864, 666666} );
		p.play( note{ 1396, 333333} );
		p.play( note{ 1244, 166666} );
		p.play( note{ 1174, 166666} );
		p.play( note{ 1046, 166666} );
		p.play( note{ 1864, 666666} );
		p.play( note{ 1396, 333333} );
		p.play( note{ 1244, 166666} );
		p.play( note{ 1174, 166666} );
		p.play( note{ 1244, 166666} );
		p.play( note{ 1046, 666666} );
		p.play( note{ 0, 333333} );
		p.play( note{ 698, 166666} );
		p.play( note{ 698, 166666} );
		p.play( note{ 698, 166666} );
		p.play( note{ 932, 666666} );
		p.play( note{ 1396, 666666} );
		p.play( note{ 1244, 166666} );
		p.play( note{ 1174, 166666} );
		p.play( note{ 1046, 166666} );
		p.play( note{ 1864, 666666} );
		p.play( note{ 1396, 333333} );
		p.play( note{ 1244, 166666} );
		p.play( note{ 1174, 166666} );
		p.play( note{ 1046, 166666} );
		p.play( note{ 1864, 666666} );
		p.play( note{ 1396, 333333} );
		p.play( note{ 1244, 166666} );
		p.play( note{ 1174, 166666} );
		p.play( note{ 1244, 166666} );
		p.play( note{ 1046, 666666} );
	}
};

#endif //_MELODY1_HPP
