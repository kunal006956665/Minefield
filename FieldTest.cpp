/**
 * Unit Tests for Field class
**/

#include <gtest/gtest.h>
#include <iostream>
#include "Field.h"
 
class FieldTest : public ::testing::Test
{
	protected:
		FieldTest(){}
		virtual ~FieldTest(){}
		virtual void SetUp(){}
		virtual void TearDown(){}
};

TEST(FieldTest, placeMineInBounds)
{
	Field minefield;
	
	minefield.placeMine(4,5);
	ASSERT_EQ( MINE_HIDDEN, minefield.get(4,5) );
}

TEST(FieldTest, illLegalPlace)
{
	Field minefield;
	bool result;
	
	result = minefield.isSafe(-4.0,12);
	if(result == true)
	{
		ASSERT_TRUE(MINE_HIDDEN);
	}
	
}

TEST(FieldTest, illLegalPlace1)
{
	Field minefield;
	bool result;
	
	result = minefield.isSafe(12,0.0);
	if(result == true)
	{
		ASSERT_TRUE(MINE_HIDDEN);
	}
}

TEST(FieldTest, illLegalPlace2)
{
	Field minefield;
	bool result;
	
	result = minefield.isSafe(-4,600);
	if(result == true)
	{
		ASSERT_TRUE(MINE_HIDDEN);
	}
}










