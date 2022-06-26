//
// Created by Layttos on 6/26/2022.
//

#ifndef APPRENDRECPP_ENUM_H
#define APPRENDRECPP_ENUM_H


#include <map>
#include <iostream>

enum Level {
    LOW,
    OK,
    INFO,
    SEVERE
};

class Enum {
private:
    std::map<std::string, Level> list;
public:
    void SetLevel(std::string text, Level lvl);
    void Delete(std::string text);
    Level GetLevel(std::string text);
    std::string GetLevelAsString(std::string text);
};




#endif //APPRENDRECPP_ENUM_H
