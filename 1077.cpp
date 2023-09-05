// Design a Pokemon structure to contain the following members:

//      char Name[100]: name
//      int Lv: level
//      int Hp: HP

// And design two exclusive functions to input and display its information 
// void InputData(struct Pokemon *); 
// input information void ShowInfo(struct Pokemon); 
// display information

// Declare two struct entities using the Pokemon struct and print their information

#include <iostream>
#include <string>

using namespace std;

struct Pokemon {
    char Name[100];
    int Lv;
    int Hp;
};

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

int main() {
    // Declare two Pokemon entities
    Pokemon pikachu;
    Pokemon charmander;

    InputData(&pikachu);
    InputData(&charmander);

    ShowInfo(pikachu);
    ShowInfo(charmander);

    return 0;
}
