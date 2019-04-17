// Prompt the user for the name of the text file that contains surface type information
// Create an instance of the LunarSurface class
// Use the input file to populate the surface types
// If the file cannot be opened, display an error message and quit the program
// If the file contains invalid number of characters and/or surface types,
// display an error message and quit the program
#include <fstream>
#include <sstream>
#include "LunarSurface.h"

LunarSurface::LunarSurface()  = default;
LunarSurface::~LunarSurface() = default;

bool LunarSurface::readBoardFile(string filename) {
    std::string line;

    std::ifstream fb(filename);
    if ( ! fb.is_open()) {
        return false;
    }

    int colId,
        rowId = 0;
    while (std::getline(fb, line)) {
        colId = 0;
        {
            std::istringstream iss(line);
            for (char &unit  : iss.str()) {
                setBoardUnit(rowId, colId++, unit);
            }
        }
        rowId++;
    }
    fb.close();

    return true;
}

char LunarSurface::getBoardUnit(int row, int col) {
    return board[row][col];
}

void LunarSurface::setBoardUnit(int row, int col, char inChg) {
    board[row][col] = inChg;
}