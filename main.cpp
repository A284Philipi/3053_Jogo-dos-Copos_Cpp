#include <iostream>
#include <cstring>

using namespace std;

int main()
{
    int cont = 0, casos, copo, numero;
    string copos;
    cin >> casos;
    cin >> copos;
    if (copos[0] == 'A'){
        copo = 1;
    }else{
        if(copos[0] == 'B'){
            copo = 2;
        }else{
            copo = 3;
        }
    }
    while (cont < casos){
        cin >> numero;
        if (numero == 1){
            if (copo != 3){
                if (copo == 1){
                    copo = 2;
                }else{
                    copo = 1;
                }
            }
        }else{
            if (numero == 2){
                if (copo != 1){
                    if (copo == 2){
                        copo = 3;
                    }else{
                        copo = 2;
                    }
                }
            }else{
                if (copo != 2){
                    if (copo == 1){
                        copo = 3;
                    }else{
                        copo = 1;
                    }
                }
            }
        }
        cont++;
    }
    if (copo == 1){
        cout << "A" <<endl;
    }else{
        if (copo == 2){
            cout << "B" <<endl;
        }else{
            cout << "C" <<endl;
        }
    }
    return 0;
}
