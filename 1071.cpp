// Please write a program that can continuously store the names, phone numbers 
// and employee numbers of 3 company employees, and can search by employee number. 
// If not found, output not found
#include<iostream>
using namespace std;
#define N 3
struct Employee
{
    char Name[20];
    char Phone[11];
    int id;
};

// alias structure name
typedef Employee emp;

int main(){

    // structure as array and come with alias as "a"
    emp a[N];
    
    // Input information
    for (int i = 0; i < N; i++)
    {
        cin >> a[i].Name;
        cin >> a[i].Phone;
        cin >> a[i].id;
    }
    
    // Query
    int qid;
    cin >> qid;
    
    // Look up
    int flag = 0;
    for (int i = 0; i < N; i++){
         if (qid == a[i].id){
            cout << "found" << endl;
            cout << "Name: " << a[i].Name << endl;
            cout << "Phone: " << a[i].Phone << endl;
            cout << "Id: " << a[i].id << endl;
            flag = 1;
         }
    }
    
    if (flag == 0) 
        cout << "not found" << endl;

    return 0;
}