#include <iostream>
using namespace std;
int soma(int a);
int main(){
    int a;
    cout << "Escolha um numero: ";
    cin >> a;
    cout << a <<" + 10 = " << soma(a) << endl;
}
int soma(int a){
    return a +10;
}