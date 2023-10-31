#include <iostream>
using namespace std;
void mai(string* palavra);
int main(){
    string palavra;
    cin >> palavra;
    mai(&palavra);
    cout << palavra;
}
void mai(string* palavra){
    string str=*palavra;
    for(int i=0; i<str.length();i++){
        str[i]-= 32;
    }
    *palavra = str;
}