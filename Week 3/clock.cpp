#include "clock.hpp"

//clock::clock(){}
clock::clock( hwlib::glcd_oled & oled, hwlib::xy location, int & radius, int & sizeMarkers, int & hour, int & minut, int & second, lookup<360, int> sinus, lookup<360, int> cosinus ):
   oled( oled ),
   location( location ),
   radius( radius ),
   sizeMarkers( sizeMarkers ),
   hour( hour ),
   minut( minut ),
   second( second ),
   sinus( sinus ),
   cosinus( cosinus )
{
   oled.clear();
}

void clock::hourMarkers( hwlib::xy location, int radius, int sizeMarkers ){
	hwlib::circle( location, radius ).draw( oled );

	for( int i = 0; i < 360; i+=30 ){
       int x = sinus.get( i );
       int y = cosinus.get( i );

       hwlib::circle( hwlib::xy( x, y ), sizeMarkers ).draw( oled );
   }
}
void clock::drawHourHand( hwlib::xy location ){
	int x = sinus.get( hour * 30 );									//times 30, because it needs to be in degrees, and /2 to make the clock hand shorter
    int y = cosinus.get( hour * 30 );								//times 30, because it needs to be in degrees

	hwlib::line( location, hwlib::xy( x, y ) ).draw( oled );
}

void clock::drawMinutHand( hwlib::xy location ){
	int x = sinus.get( minut * 6 );									
    int y = cosinus.get( minut * 6 );									

	hwlib::line( location, hwlib::xy( x, y ) ).draw( oled );
}

void clock::drawSecondHand( hwlib::xy location ){
    int x = sinus.get( second * 6 );									
    int y = cosinus.get( second * 6 );									

	hwlib::line( location, hwlib::xy( x, y ) ).draw( oled );
}

void clock::updateTime(){

	if( second == 59 ){
		second = 0;
		if( minut == 59 ){
			minut = 0;
			if(hour == 11){
				hour = 0;
			}else{
				hour++;
			}
		}else{
			minut++;
		}
	}else{
		second++;
	}

	oled.clear();
	hourMarkers( location, radius, sizeMarkers );
	drawHourHand( location );
	drawMinutHand( location );
	drawSecondHand( location );
	oled.flush();
}

void clock::changeTime(){
	
}