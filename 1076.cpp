// Design a Pokemon structure to contain the following members:

// char Name[100]: name
// int Lv: level
// int Hp: HP
// Declare two struct entities using the Pokemon struct and print their information

#include<iostream>
using namespace std;
#define N 2
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
    
    
    // Look up
    for (int i = 0; i < N; i++){
            cout << "Name: " << a[i].Name << endl;
            cout << "Lv: " << a[i].Lv << endl;
            cout << "HP: " << a[i].Hp << endl;
            cout << endl;
    }
    
    return 0;
}