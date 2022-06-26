// This is the main class for the enum

#include <iostream>
#include "Enum.h"

int main() {
    Enum enumTest;
    enumTest.SetLevel("SEVERE text", SEVERE);
    std::cout << enumTest.GetLevel("SEVERE text") << std::endl;
    std::cout << enumTest.GetLevelAsString("SEVERE text") << std::endl;

    /**
     * CONSOLE:
     * 3
     * SEVERE
     */

}