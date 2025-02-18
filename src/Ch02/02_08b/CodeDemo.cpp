// Complete Guide to C++ Programming Foundations
// Exercise 02_08
// Enumerations, by Eduardo Corpeño 

#include <iostream>
#include <cstdint>

enum class asset_type {texture, sound, animation, script}; 
// texture is 0, sound is 1, etc.
// the above act pretty much like global variables

enum class menu_section{background, music, sound, controls, texture};

// Issue: both enums include texture and sound and they correspond to different place values. E.g. sound could be 2 or 3

int main(){
    int sound = 8;
    asset_type asset_value;

    asset_value = asset_type::sound;

    std::cout << "asset_value = " << (int) asset_value << std::endl;

    std::cout << std::endl << std::endl;
    return 0;
}
