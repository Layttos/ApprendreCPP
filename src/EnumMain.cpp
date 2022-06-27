// This is the main class for the enum

#include <iostream>
#include "Enum.h"

int main() {
    Enum enumTest;
    enumTest.SetLevel("SEVERE text", SEVERE);
    enumTest.SetLevel("OK text", OK);
    std::cout << enumTest.GetLevel("SEVERE text") << std::endl;
    std::cout << enumTest.GetLevelAsString("SEVERE text") << std::endl;

    /**
     * CONSOLE:
     * 3
     * SEVERE
     */

    enumTest.Delete("SEVERE text");
    std::cout << enumTest.GetLevelAsString("SEVERE text") << std::endl;
    std::cout << enumTest.GetLevelAsString("OK text") << std::endl;


}