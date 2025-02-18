// Complete Guide to C++ Programming Foundations
// Exercise 02_09
// Structures, by Eduardo Corpeño 

#include <iostream>
#include <string>

enum class character_role {protagonist, antagonist, sidekick, npc}; // these are basically options for levels of a categorical variable

struct game_character { // This essentially sets up the structure of a data frame
    std::string name;
    int level;
    character_role role;
};

int main(){
    game_character buddy;
    buddy.name = "Tony";
    buddy.level = 10;
    buddy.role = character_role::sidekick;

    std::cout << buddy.name << " is a level " << buddy.level << " character with the role of " << 
    (int) buddy.role << "." << std::endl;
    // Note: the (int) cast is required because the character_role class is an enum

    std::cout << std::endl << std::endl;
    return 0;
}
