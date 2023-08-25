// Design a Pokemon structure to contain the following members:

// char Name[100]: name
// int Lv: level
// int Hp: HP
// Use the Pokemon structure to declare a structure array and input 3 Pokemon data, ask the user to input a number n
// And print out the Pokemon information with "level" above n
// If there is no pokemon that meets the conditions, you need to print not found

#include<iostream>
using namespace std;
#define N 3
struct Pokemon
{
    char Name[100];
    int Lv;
    int Hp;
};

// alias structure name
typedef Pokemon P;

int main(){

    // structure as array and come with alias as "a"
    P a[N];
    
    // Input information
    for (int i = 0; i < N; i++)
    {
        cin >> a[i].Name;
        cin >> a[i].Lv;
        cin >> a[i].Hp;
    }
    
    int qlevel;
    cin >> qlevel;
    
    int flag = 0;
    // Look up
    for (int i = 0; i < N; i++){
            if (a[i].Lv >= qlevel) {
            cout << "Name: " << a[i].Name << endl;
            cout << "Lv: " << a[i].Lv << endl;
            cout << "HP: " << a[i].Hp << endl;
            cout << endl;
            flag = 1;
            }
    }
    
    if (flag == 0){
        cout << "not found";
    }
    
    return 0;
}