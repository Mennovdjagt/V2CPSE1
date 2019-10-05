#include "integerSet.hpp"

void integerSet::add( int addInt ){
	if(contains(addInt) == 0){						//only add a value if it isn't already in the array 
		for (int i = 0; i < 10; ++i){				//loop through every elemnt till there is one 0
			if( intArray[i] == 0 ){					
				intArray[i] = addInt;				//add the element on the place where a 0 has been found
				break;								//go out of the loop
			}
		}
   	}
}

void integerSet::remove( int removeInt ){
	for (int i = 0; i < 10; ++i){					//go through all the elements in the array
		if( intArray[i] == removeInt ){				//check if the element is equal to a element in the array
			for (int j = i; j < 9; ++j){			//if element is in array replace the element with the next element in the array till the end of the array
				intArray[j] = intArray[j + 1];		//shift the array 
			}
			intArray[9] = 0;						//deletes the last element after shifting
		}
	}
}

bool integerSet::contains( int checkInt ){
	for (int i = 0; i < 10; ++i){					//loop through the array
		if( intArray[i] == checkInt ){				//check every element in the array for checkInt
			return 1;								//if found return 1
		}
	}
	return 0;										//else return 0
}