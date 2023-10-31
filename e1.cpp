#include <iostream>
using namespace std;
int multiplica(int a, int b);
int main(){
    int a, b;
    cout << "Escolha o primeiro numero: ";
    cin >> a;
    cout << "Escolha o segundo numero: ";
    cin >> b;
    cout << "O produto entre os dois: " << multiplica(a,b) << endl;
}
int multiplica(int a, int b){
    return a * b;
}