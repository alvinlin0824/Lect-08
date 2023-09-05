#include "1077.h"
#include <iostream>

// Function to input information for a Pokemon
void InputData(Pokemon* pokemon) {
    // cout << "Enter Pokemon Name: ";
    cin.getline(pokemon->Name, 100);
    
    // cout << "Enter Pokemon Level: ";
    cin >> pokemon->Lv;
    
    // cout << "Enter Pokemon HP: ";
    cin >> pokemon->Hp;
    
    // Clear the input buffer
    cin.ignore();
}

// Function to display information for a Pokemon
void ShowInfo(Pokemon pokemon) {
    cout << "Name: " << pokemon.Name << endl;
    cout << "Lv: " << pokemon.Lv << endl;
    cout << "HP: " << pokemon.Hp << endl;
    cout << endl;
}