#ifndef _CIRCLE_HPP
#define _CIRCLE_HPP

#include "hwlib.hpp"

class circle{
protected:

   int radius;
 
public:

   circle( hwlib::window & w, const hwlib::xy & midpoint, int radius ):
      drawable( w, 
         midpoint - hwlib::xy( radius, radius ), 
         hwlib::xy( radius, radius ) * 2 ),
      radius( radius )
   {}
   
   void draw() {
      hwlib::circle c( location + hwlib::xy( radius, radius ), radius );
      c.draw( w );
   }
};

#endif _CIRCLE_HPP