#include "clock.hpp"

//clock::clock(){}
clock::clock( hwlib::glcd_oled & oled, hwlib::xy & location, int & radius, int & sizeMarkers, int & hour, int & minut, lookup<360, int> sinus, lookup<360, int> cosinus ):
   oled( oled ),
   location( location ),
   radius( radius ),
   sizeMarkers( sizeMarkers ),
   hour( hour ),
   minut( minut ),
   sinus( sinus ),
   cosinus( cosinus )
{

}

void clock::HourMarkers( hwlib::xy location, int radius, int sizeMarkers ){
	hwlib::circle( location, radius ).draw( oled );

	for(int i = 0; i < 360; i+=30){
       int x = sinus.get(i);
       int y = cosinus.get(i);

       hwlib::circle( hwlib::xy( x, y ), sizeMarkers ).draw( oled );
   }
}
void clock::drawHourHand( hwlib::xy location, int hour ){
	int x = sinus.get(hour * 30);									//times 30, because it needs to be in degrees
    int y = cosinus.get(hour * 30);									//times 30, because it needs to be in degrees

	hwlib::line(location)
}

void clock::drawMinutHand( hwlib::xy location, int minut ){

}

void clock::updateTime(){

}