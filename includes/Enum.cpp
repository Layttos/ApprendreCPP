//
// Created by Layttos on 6/26/2022.
//

#include "Enum.h"
#include <map>
#include <iostream>

void Enum::SetLevel(std::string text, Level lvl) {
   if(list.find(text) == list.end()) {
       list[text] = lvl;
   } else {
       std::cout << "This text was already assigned to Level " + list[text] << std::endl;
   }
}

Level Enum::GetLevel(std::string text) {
    if(list.find(text) != list.end()) {
        return list[text];
    } else {
        std::cout << "This text has no Level. You can assign one using SetLevel(YourText, Level)" << std::endl;
        return LOW;
    }
}

std::string Enum::GetLevelAsString(std::string text) {
    if(list.find(text) != list.end()) {
        switch(list[text]) {
            case LOW:
                return "LOW";
                break;
            case OK:
                return "OK";
                break;
            case INFO:
                return "INFO";
                break;
            case SEVERE:
                return "SEVERE";
                break;
        }
    } else {
        std::cout << "This text has no Level. You can assign one using SetLevel(YourText, Level)" << std::endl;
        return "LOW";
    }
}

void Enum::Delete(std::string text) {
    if(list.find(text) != list.end()) {
        list.erase(text);
    } else {
        std::cout << "This text has no Level. You can assign one using SetLevel(YourText, Level)" << std::endl;
    }
}