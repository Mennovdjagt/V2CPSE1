#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "integerSet.hpp"

TEST_CASE( "add values 1 to 10" ){
   auto a = integerSet();

   for (int i = 1; i < 11; ++i){
      a.add(i);
   }

   std::stringstream s;
   s << a;
   REQUIRE( s.str() == "1, 2, 3, 4, 5, 6, 7, 8, 9, 10, " );    
}

TEST_CASE( "try adding excisting value in array" ){
   auto a = integerSet();

   for (int i = 1; i < 6; ++i){
      a.add(i);
   }

   a.add(5);

   std::stringstream s;
   s << a;

   REQUIRE( s.str() == "1, 2, 3, 4, 5, 0, 0, 0, 0, 0, " );
}

TEST_CASE( "make array fuller than it is" ){
   auto a = integerSet();

   for (int i = 1; i < 11; ++i){
      a.add(i);
   }

   a.add(11);

   std::stringstream s;
   s << a;

   REQUIRE( s.str() == "1, 2, 3, 4, 5, 6, 7, 8, 9, 10, " );
}

TEST_CASE( "delete a value" ){
   auto a = integerSet();

   for (int i = 1; i < 11; ++i){
      a.add(i);
   }

   a.remove(5);

   std::stringstream s;
   s << a;
   REQUIRE( s.str() == "1, 2, 3, 4, 6, 7, 8, 9, 10, 0, " );  
}

TEST_CASE( "delete a value that is not in the array" ){
   auto a = integerSet();

   for (int i = 1; i < 7; ++i){
      a.add(i);
   }

   a.remove(8);

   std::stringstream s;
   s << a;
   REQUIRE( s.str() == "1, 2, 3, 4, 5, 6, 0, 0, 0, 0, " );  
}

TEST_CASE( "check if a value is in the array" ){
   auto a = integerSet();

   for (int i = 1; i < 11; ++i){
      a.add(i);
   }

   bool b = a.contains(4);


   REQUIRE(b == 1);
}