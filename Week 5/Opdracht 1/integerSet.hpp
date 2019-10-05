#ifndef _INTEGERSET_HPP
#define _INTEGERSET_HPP

#include <iostream>
#include <array>

class integerSet{
private:

	std::array<int, 10> intArray = {};

public:

	void add( int addInt );
	void remove( int removeInt );
	bool contains( int checkInt );

	friend std::ostream & operator<<(std::ostream &stream, const integerSet &set){
		for(const auto & element : set.intArray){
			stream << char(element) << ", ";
		}
		return stream;
	}

};



#endif //_INTEGERSET_HPP