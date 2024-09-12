#include <iostream>
#include <time.h>
#include <stdlib.h>

using namespace std;

int main(){
    
    int a;  // переменная ставки
    int money = 100000; // счет пользователя
    int drum1;  //первый барабан
    int drum2;  //второй барабан
    int drum3;  //третий барабан
    
    string data[4] {"7","♥","☺","♦"}; //значения на барабанах
    srand (time(NULL)); // чтобы каждый запуск генерировал разные последовательности случайных чисел
    
    while (money< 1000000) // условие при котором будет работать цикл. После выполнения условия программа будет выполнять следующие команды
    {
        if (money> 0){ // следующие 3 функции обрабатывают счет, и выдают результат соответственно условию
            cout << endl << "Введите Вашу ставку: ";
            cin >> a;
        }
        
        if (money< a) // если ставка больше средств пользователя
        {
            while (money< a)
            {
            cout << "Недостаточно средств" << endl;
            cout << "Уменьшите ставку: ";
            cin >> a;
            }
        }
    
        drum1=rand()% 4;    //генерирует случайное число от 0 до 3
        drum2=rand()% 4;     
        drum3=rand()% 4;    
    
    
        cout<<data[drum1]<<endl;
        cout<<data[drum2]<<endl;
        cout<<data[drum3]<<endl;

        if (data[drum1]==data[drum2] and data[drum2]==data[drum3]){
            money = money + a*50;
            cout<<"победа, ваш выйгрыш "<<a*50<<endl;
            cout << "На вашем счету " << money << " монет" << endl;
        }
        else{
            money = money - a;
            cout << "Наши соболезнования. Вы проиграли. На вашем счету " << money<< " монет" << endl;
        }
    }
    return 0;
}