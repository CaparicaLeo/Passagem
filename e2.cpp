#include <iostream>
using namespace std;
int mult(int* a, int* b);
int main(){
    int a,b;
    cout << "Digite um numero: ";
    cin >> a;
    cout << "Digite outro numero: ";
    cin >> b;
    cout <<"O produto dos numeros eh: " << mult(&a,&b) << endl;
}
int mult(int* a, int* b){
    int resultado;
    resultado = *a * *b;
    return resultado;
}