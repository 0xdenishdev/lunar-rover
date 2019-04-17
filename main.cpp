#include "LunarRover.h"

int main() {
    LunarSurface surface;
    if ( ! surface.readBoardFile("board01.txt")) {
        printf("Error reading file.");
        exit(EXIT_FAILURE);
    }

    LunarRover rover(&surface);
    rover.drawGrid();

    return EXIT_SUCCESS;
}
