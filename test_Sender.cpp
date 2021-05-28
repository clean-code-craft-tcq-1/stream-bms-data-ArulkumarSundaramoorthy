#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file

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


TEST_CASE("Test for valid temperature values") 
{
  REQUIRE(BmsSender_ReadTemperture()!= 255);
}

TEST_CASE("Test for valid SOC values") 
{
  REQUIRE(BmsSender_ReadSOC()!= 255);
}

TEST_CASE("Test for valid Random values") 
{
  float random_value = 0;
  float min = 0;
  float max = 100;
  random_value = random_float(min,max);
  REQUIRE(min <= random_value);
  REQUIRE(max >= random_value);
}


TEST_CASE("Test for invalid Random values") 
{
  float random_value = 0;
  float min = 20;
  float max = 10;
  REQUIRE(random_float(min,max) == 0);
}

TEST_CASE("Test for Send BMS data") 
{ 
  REQUIRE(BMS_SendData(sendToConsole) == CONSOLE_SEND_PASS);
}

