#include <iostream>
using namespace std;
int sub(int a);
int main(){
    int a;
    cout << "Escolha um numero: ";
    cin >> a;
    cout << a <<" - 5 = " << sub(a) << endl;
}
int sub(int a){
    return a - 5;
}