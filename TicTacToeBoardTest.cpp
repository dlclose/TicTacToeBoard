/**
 * Unit Tests for TicTacToeBoard
**/

#include <gtest/gtest.h>
#include "TicTacToeBoard.h"
 
class TicTacToeBoardTest : public ::testing::Test
{
	protected:
		TicTacToeBoardTest(){} //constructor runs before each test
		virtual ~TicTacToeBoardTest(){} //destructor cleans up after tests
		virtual void SetUp(){} //sets up before each test (after constructor)
		virtual void TearDown(){} //clean up after each test, (before destructor) 
};

// EXAMPLE TEST FORMAT
TEST(TicTacToeBoardTest, toggleturntest1)
{
	TicTacToeBoard obj;
	ASSERT_EQ(O, obj.toggleTurn());
}
TEST(TicTacToeBoardTest, toggleturntest2)
{
	TicTacToeBoard obj;
	obj.toggleTurn();
	ASSERT_EQ(X, obj.toggleTurn());
}
TEST(TicTacToeBoardTest, toggleturntest3)
{
	TicTacToeBoard obj;
	obj.toggleTurn();
	obj.toggleTurn();
	ASSERT_EQ(O, obj.toggleTurn());
}
TEST(TicTacToeBoardTest, toggleturntest4)
{
	TicTacToeBoard obj;
	obj.toggleTurn();
	obj.toggleTurn();
	obj.toggleTurn();
	ASSERT_EQ(X, obj.toggleTurn());
}
TEST(TicTacToeBoardTest, placePieceTest1)
{
	TicTacToeBoard obj;
	ASSERT_EQ(X, obj.placePiece(0, 0));
}
TEST(TicTacToeBoardTest, placePieceTest2)
{
	TicTacToeBoard obj;
	obj.placePiece(0, 0);
	ASSERT_EQ(O, obj.placePiece(0, 1));
}
TEST(TicTacToeBoardTest, placePieceTest3)
{
	TicTacToeBoard obj;
	obj.placePiece(0, 0);
	ASSERT_EQ(X, obj.placePiece(0, 0));
}
TEST(TicTacToeBoardTest, placePieceTest4)
{
	TicTacToeBoard obj;
	ASSERT_EQ(Invalid, obj.placePiece(4, 0));
}
TEST(TicTacToeBoardTest, placePieceTest5)
{
	TicTacToeBoard obj;
	obj.placePiece(0,0);
	obj.placePiece(1,1);
	obj.placePiece(0,1);
	obj.placePiece(1,2);
	obj.placePiece(0,2);
	ASSERT_EQ(Blank, obj.placePiece(0, 0));
}
TEST(TicTacToeBoardTest, getPieceTest1)
{
	TicTacToeBoard obj;
	ASSERT_EQ(Blank, obj.getPiece(0, 0));
}
TEST(TicTacToeBoardTest, getPieceTest2)
{
	TicTacToeBoard obj;
	obj.placePiece(0,0);
	ASSERT_EQ(X, obj.getPiece(0, 0));
}
TEST(TicTacToeBoardTest, getPieceTest3)
{
	TicTacToeBoard obj;
	obj.placePiece(0,0);
	ASSERT_EQ(Blank, obj.getPiece(1, 0));
}
TEST(TicTacToeBoardTest, getPieceTest4)
{
	TicTacToeBoard obj;
	ASSERT_EQ(Invalid, obj.getPiece(4, 0));
}
TEST(TicTacToeBoardTest, getPieceTest5)
{
	TicTacToeBoard obj;
	obj.placePiece(0,0);
	obj.placePiece(0,1);
	obj.placePiece(1,0);
	obj.placePiece(1,1);	
	ASSERT_EQ(O, obj.getPiece(1, 1));
}
TEST(TicTacToeBoardTest, getPieceTest6)
{
	TicTacToeBoard obj;
	obj.placePiece(0,0);
	obj.placePiece(0,0);	
	ASSERT_EQ(X, obj.getPiece(0, 0));
}
TEST(TicTacToeBoardTest, getWinnerTest1)
{
	TicTacToeBoard obj;
	ASSERT_EQ(Invalid, obj.getWinner());
}
TEST(TicTacToeBoardTest, getWinnerTest2)
{
	TicTacToeBoard obj;
	obj.placePiece(0,0);
	obj.placePiece(1,1);
	obj.placePiece(0,1);
	obj.placePiece(1,2);
	obj.placePiece(0,2);
	ASSERT_EQ(X, obj.getWinner());
}
TEST(TicTacToeBoardTest, getWinnerTest3)
{
	TicTacToeBoard obj;
	obj.placePiece(0,0);
	obj.placePiece(0,1);
	obj.placePiece(1,1);
	obj.placePiece(1,2);
	obj.placePiece(2,2);
	ASSERT_EQ(X, obj.getWinner());
}
TEST(TicTacToeBoardTest, getWinnerTest4)
{
	TicTacToeBoard obj;
	obj.placePiece(2,0);
	obj.placePiece(0,1);
	obj.placePiece(1,1);
	obj.placePiece(1,2);
	obj.placePiece(0,2);
	ASSERT_EQ(X, obj.getWinner());
}
TEST(TicTacToeBoardTest, getWinnerTest5)
{
	TicTacToeBoard obj;
	obj.placePiece(0,0);
	obj.placePiece(0,1);
	obj.placePiece(1,0);
	obj.placePiece(1,2);
	obj.placePiece(2,0);
	ASSERT_EQ(X, obj.getWinner());
}
TEST(TicTacToeBoardTest, getWinnerTest6)
{
	TicTacToeBoard obj;
	obj.placePiece(1,1);
	obj.placePiece(0,0);
	obj.placePiece(0,1);
	obj.placePiece(2,1);
	obj.placePiece(2,2);
	obj.placePiece(1,2);
	obj.placePiece(0,2);
	obj.placePiece(2,0);
	obj.placePiece(1,0);
	ASSERT_EQ(Blank, obj.getWinner());
}


