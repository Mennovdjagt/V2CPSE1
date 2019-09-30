#ifndef _LINE_HPP
#define _LINE_HPP

#include "hwlib.hpp"

class line{
private:

   hwlib::xy end;

public:

   line( hwlib::window & w, const hwlib::xy & location, const hwlib::xy & end ):
      drawable( w, location, end - location ),
      end( end )
   {}
   
   void draw() {
      hwlib::line x( location, end );
      x.draw( w );;
   }
};


#endif _LINE_HPP