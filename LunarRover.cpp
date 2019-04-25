// Display a well-formatted visualization of the surface
// Create an instance of the LunarRover class
// Prompt the user to select a region to land using row and column numbers
// Validate the row and column numbers
// Do not allow the user to land the rover on an impassible region

#include "LunarRover.h"

LunarRover::LunarRover(LunarSurface *inBoard) {
    gameBoard = inBoard;
}

LunarRover::~LunarRover() = default;

void LunarRover::drawGrid() {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            std::cout << gameBoard->getBoardUnit(i, j);
        }

        std::cout << std::endl;
    }
}

bool LunarRover::land(int row, int col) {
    // TODO: not implemented yet
}

int LunarRover::move(int newrow, int newcol) {
    // TODO: not implemented yet
}

void LunarRover::getPosition(int &oldrow, int &oldcol) {
    // TODO: not implemented yet
}

void LunarRover::setPosition(int newrow, int newcol) {
    // TODO: not implemented yet
}

void LunarRover::setDamage(int newdmg) {
    damage = newdmg;
}

int LunarRover::getDamage() {
    return damage;
}

void LunarRover::setFuel(int newfuel) {
    fuel = newfuel;
}

int LunarRover::getFuel() {
    return fuel;
}
