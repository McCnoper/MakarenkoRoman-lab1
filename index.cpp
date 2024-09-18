#include <iostream>
using namespace std;
int main(){
    int quantity = 0;
    int price = 0;
    int cost = 0;
    int money = 1000;
    cout<< "Введіть кількість ";
    cin>> quantity;
    cout<< "Введіть ціну ";
    cin>> price;
    cost = price * quantity;
    money = money-cost;
    if(money>=0){
        cout<< "Ви не вийшли за бюджет :)";
    }else{
        cout<< "Ви вийшли за бюджет :(";
    };
}
