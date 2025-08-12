/*-- Задание 1.
Подпрограмма, выводящая
приветствие --*/

#include <iostream>
using namespace std;

int main()
{
    string name = "";
    string surname = "";
    string nameSurname = "";
    
    cout<<"Введите имя: ";
    cin>>name;
    cout<<"Введите фамилию: ";
    cin>>surname;
    
    nameSurname = name + " " + surname;
    
    cout<<"Здравствуйте, "<<nameSurname<<"!";

    return 0;
}