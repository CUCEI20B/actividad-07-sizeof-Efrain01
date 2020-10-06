#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    getline(cin,str);
    if(str == "char"){
        cout<<sizeof(char)<<endl;
    }else{
        if(str == "int"){
            cout<<sizeof(int)<<endl;
        }else{
            if(str == "short"){
                cout<<sizeof(short)<<endl;
            }else{
                if(str == "float"){
                    cout<<sizeof(float)<<endl;
                }else{
                    if(str == "double"){
                        cout<<sizeof(double)<<endl;
                    }else{
                        if(str == "long"){
                            cout<<sizeof(long)<<endl;
                        }
                    }
                }
            }
        }
    }
    return 0;
}
