#ifndef _INTEGERSET_HPP
#define _INTEGERSET_HPP

#include <iostream>
#include <array>

template< typename T, int N >
class integerSet{
private:

	std::array<T, N> flexArray = {};

public:

	void add( T addElement ){
		if(contains(addElement) == 0){					//only add a value if it isn't already in the array 
			for (int i = 0; i < N; ++i){				//loop through every elemnt till there is one 0
				if( flexArray[i] == 0 ){					
					flexArray[i] = addElement;			//add the element on the place where a 0 has been found
					break;								//go out of the loop
				}
			}
   		}
	}

	void remove( T removeElement ){
		for (int i = 0; i < N; ++i){					//go through all the elements in the array
			if( flexArray[i] == removeElement ){		//check if the element is equal to a element in the array
				for (int j = i; j < N-1; ++j){			//if element is in array replace the element with the next element in the array till the end of the array
					flexArray[j] = flexArray[j + 1];	//shift the array 
				}
				flexArray[N-1] = 0;						//deletes the last element after shifting
			}
		}
	}

	bool contains( T checkElement ){
		for (int i = 0; i < N; ++i){					//loop through the array
			if( flexArray[i] == checkElement ){			//check every element in the array for checkInt
				return 1;								//if found return 1
			}
		}
		return 0;	
	}

	friend std::ostream & operator<<(std::ostream &stream, const integerSet &set){
		for(const auto & i : set.flexArray){
			stream << i << ", ";
		}
		return stream;
	}


};



#endif //_INTEGERSET_HPP