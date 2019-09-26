#ifndef _MELODY1_HPP
#define _MELODY1_HPP

#include "melody.hpp"

class melody1 : public melody {
public:
	void play( note_player & p ){
		p.play( note{ 659, 240000} );
		p.play( note{ 0, 120000} );
		p.play( note{ 698, 120000} );
		p.play( note{ 784, 120000} );
		p.play( note{ 0, 120000} );
		p.play( note{ 1046, 960000} );
		p.play( note{ 0, 120000} );
		p.play( note{ 587, 240000} );
		p.play( note{ 0, 120000} );
		p.play( note{ 659, 120000} );
		p.play( note{ 698, 960000} );
		p.play( note{ 0, 240000} );
		p.play( note{ 784, 240000} );
		p.play( note{ 0, 120000} );
		p.play( note{ 880, 120000} );
		p.play( note{ 987, 120000} );
		p.play( note{ 0, 120000} );
		p.play( note{ 1396, 960000} );
		p.play( note{ 0, 240000} );
		p.play( note{ 880, 240000} );
		p.play( note{ 0, 120000} );
		p.play( note{ 987, 120000} );
		p.play( note{ 1046, 480000} );
		p.play( note{ 1174, 480000} );
		p.play( note{ 1318, 480000} );
		p.play( note{ 659, 240000} );
		p.play( note{ 0, 120000} );
		p.play( note{ 698, 120000} );
		p.play( note{ 784, 120000} );
		p.play( note{ 0, 120000} );
		p.play( note{ 1046, 960000} );
		p.play( note{ 0, 240000} );
		p.play( note{ 1174, 240000} );
		p.play( note{ 0, 120000} );
		p.play( note{ 1318, 120000} );
		p.play( note{ 1396, 960000} );
		p.play( note{ 784, 240000} );
		p.play( note{ 0, 120000} );
		p.play( note{ 784, 120000} );
		p.play( note{ 1318, 240000} );
		p.play( note{ 0, 120000} );
		p.play( note{ 1174, 240000} );
		p.play( note{ 0, 120000} );
		p.play( note{ 784, 120000} );
		p.play( note{ 1318, 240000} );
		p.play( note{ 0, 120000} );
		p.play( note{ 1174, 240000} );
		p.play( note{ 0, 120000} );
		p.play( note{ 784, 120000} );
		p.play( note{ 1396, 240000} );
		p.play( note{ 0, 120000} );
		p.play( note{ 1318, 240000} );
		p.play( note{ 0, 120000} );
		p.play( note{ 1174, 120000} );
		p.play( note{ 1046, 480000} );
	}
};

#endif //_MELODY1_HPP
