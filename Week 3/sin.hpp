#ifndef _SINUS_HPP
#define _SINUS_HPP

#include "hwlib.hpp"
#include <math.h>

class sinus{
private:

   hwlib::xy end;

public:
   
   constexpr double pow( double g, int n ){
      double result = 1;
         while( n > 0 ){
            result *= g;
            --n;
      }
      return result;
   }

	constexpr double fac( int n ){
       double result = 1;
       while( n > 0 ){
          result *= n;
          --n;
      }
      return result;
	}

	constexpr double radians_from_degrees( int degrees ){
       return 2 * 3.14 * ( degrees / 360.0 );
    }

    constexpr int scaled_sine_from_degrees( int degrees, int x ){
       return 64 + ( 30 * sin( radians_from_degrees(degrees) ));
    }

    constexpr int scaled_cosine_from_degrees( int degrees, int y  ){
       return 32 + (30 * sin( radians_from_degrees(degrees - 90 )));
	}

};

#endif //_SINUS_HPP