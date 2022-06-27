//
// Created by Layttos on 6/27/2022.
//

#include <iostream>
#include <string>

class Entity {
public:
    virtual std::string GetName() = 0;
    virtual int GetLevel() = 0;
    virtual int GetPower() = 0;
};

class Player : public Entity {
private:
    std::string p_Name;
public:
    Player(const std::string& name) : p_Name(name) {}
    std::string GetName() override { return p_Name; }
    int GetLevel() override { return 12; }
    int GetPower() override { return 14; }
};

void PrintName(Entity* entity) {
    std::cout << entity->GetName() << std::endl;
}
void PrintLevel(Entity* entity) {
    std::cout << entity->GetLevel() << std::endl;
}
void PrintPower(Entity* entity) {
    std::cout << entity->GetPower() << std::endl;
}

int main() {

    auto* entity = (Entity*) new Player("Tiplouf");
    PrintName(entity);
    PrintLevel(entity);
    PrintPower(entity);

    return 0;
}