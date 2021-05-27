//#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

#include "test/catch.hpp"
#include "BMS_Sender/Sender_CollectData.h"
#include "BMS_Sender/Sender_SentType.h"
#include "stddef.h"
#include "string.h"


TEST_CASE("Test case to test the value within Positive Range") 
{
  REQUIRE(isInRange(2,0,50)== 1);
}

TEST_CASE("Test case to test the value within Negative Range") 
{
  REQUIRE(isInRange(-2,-50,50)== 1);
}

TEST_CASE("Test case to test the value invaild Positive Range") 
{
  REQUIRE(isInRange(3,5,10)== 0);
}

TEST_CASE("Test case to test the value invaild Negative Range") 
{
  REQUIRE(isInRange(-3,-1,10)== 0);
}
