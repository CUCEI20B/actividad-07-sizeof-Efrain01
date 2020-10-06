#include <iostream>
#include <string>
using namespace std;

int main() {
    string caracter, entero, enterocorto, flotante, doble, largo;
    getline(cin,caracter);
    if(caracter == "char"){
        cout<<sizeof(char)<<endl;
    }
    getline(cin,entero);
    if(entero == "int"){
        cout<<sizeof(int)<<endl;
    }
    getline(cin,doble);
    if(doble == "double"){
        cout<<sizeof(double)<<endl;
    }
    return 0;
}
