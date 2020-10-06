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
    getline(cin,enterocorto);
    if(enterocorto == "short"){
        cout<<sizeof(short)<<endl;
    }
    getline(cin,flotante);
    if(flotante == "float"){
        cout<<sizeof(int)<<endl;
    }
    getline(cin,doble);
    if(doble == "double"){
        cout<<sizeof(double)<<endl;
    }
    getline(cin,largo);
    if(largo == "long"){
        cout<<sizeof(long)<<endl;
    }
    return 0;
}
