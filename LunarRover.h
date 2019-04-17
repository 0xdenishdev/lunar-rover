#pragma once
// This probably won't work in Cloud9, you'll have to clear screen another way
//#include "conio.h"
// LunarSurface specification file
#include "LunarSurface.h"

class LunarRover {
public:
    // Constructor - need a valid LunarSurface pointer
    LunarRover(LunarSurface *inBoard);
    // Destructor - might not need to do anything here
    ~LunarRover();

public:
    // Draw the board
    void drawGrid();
    // Initial landing of the rover
    bool land(int row, int col);
    // Move the rover and return outcome
    int	 move(int newrow, int newcol);

    // Get current position of the rover on the board
    void getPosition(int &oldrow, int &oldcol);
    // Update the rover position without outcome
    void setPosition(int newrow, int newcol);

    // Get the rover's damage status
    int getDamage();
    // Set the rover's damage status
    void setDamage(int newdmg);

    // Get the rover's fuel status
    int	 getFuel();
    // Set the rover's fuel status
    void setFuel(int newfuel);

private:
    // A pointer to a valid game board (LunarSurface class)
    LunarSurface *gameBoard;
    // The rover's position on the game board
    int rowPOS, colPOS;
    // Rover's fuel level (start at 100)
    int fuel;
    // Rover's damage level (start at 0)
    int damage;
};