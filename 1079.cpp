// Design a Pokemon structure to contain the following members:

// char Name[100]: name
// int Lv: level
// int Hp: HP
// Use the Pokemon structure to declare a structure array and print out the highest level Pokemon 
// after inputting 3 Pokemon materials

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
    
    // find the maximum Lv
    int max = a[0].Lv; int max_index = 0;
    for (int i = 0; i < N; i++)
    {
        if (a[i].Lv > a[0].Lv)
        {
            max = a[i].Lv;
            max_index = i;
        }       
    }
    
   
    cout << "Name: " << a[max_index].Name << endl;
    cout << "Lv: " << a[max_index].Lv << endl;
    cout << "HP: " << a[max_index].Hp << endl;

    return 0;
}