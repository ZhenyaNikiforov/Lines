/*-- Задание 2.
Подпрограмма, угадывающая
слова --*/

#include <iostream>
using namespace std;

int main()
{
    string codeWord = "малина";
    string word = "";
    
    do{
        cout<<"Угадайте слово: ";
        cin>>word;
        if(word == codeWord){
            cout<<"Правильно! Вы победили! Загаданное слово — "<<codeWord;
            break;
        }
        cout<<"Неправильно\n";
    }while(true);

    return 0;
}