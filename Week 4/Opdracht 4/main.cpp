#include "hwlib.hpp"

extern "C" void print( const char c ){
   hwlib::cout << c;
}

extern "C" char decompress( );

int main( void ){

   hwlib::wait_ms( 500 );

   decompress();

}