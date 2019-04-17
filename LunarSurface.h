#pragma once
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>

using namespace std;

// Define some codes and other necessary game-play parameters
const int ROWS = 15, COLS = 40;
const int COLSP = 3;
const int ROWSP = 4;
const int BORDERCOLLISION = -1;
const int IMPASSABLECOLLISION = -2;
const int TARGETCOLLISION = -3;
const int MAXDAMAGE = -4;
const int NOFUEL = -5;
const char UNITSAFE = ' ';
const char UNITROUGH = '-';
const char UNITFUEL = 'F';
const char UNITTARGET = '$';
const char UNITIMPASSABLE = 'X';

class LunarSurface {
public:
    // Constructor
    LunarSurface();
    // Destructor
    ~LunarSurface();

    // Initialize the board via reading a file
    bool readBoardFile(string filename);

    // Determine the unit type for a specified position
    char getBoardUnit(int row, int col);
    // Set the unit type for a specified position
    // Will want this to update consumed fuel on the board!
    void setBoardUnit(int row, int col, char inChg);
private:
    // The actual board read in from file
    char board[ROWS][COLS];
};