/*
Nombre: .cpp
Autor: Emiliano Tadeo Carlos Ibarra
Fecha: 
Descripcion: 
*/

#include <iostream>
#include <cstdlib>
#include <locale.h>

using namespace std;

int main()
{
	setlocale(LC_CTYPE, "Spanish");
	
    int min,med,max,a,b,c;
    
    cout << "Ingrese los números: " << endl;
    cin >> a >> b >> c;

    if (a<=b){
        if (a<=c){
        	if (b<c){
        		max=a;
        		med=b;
        		min=c;
			}else{
				max=a;
				med=c;
				min=b;
			}
		}else{
			max=c;
			med=a;
			min=b;
		}
    }else{
    	if(b<=c){
    		if (c<a){
    			max=b;
				med=c;
				min=a;
			}else{
				max=b;
				med=a;
				min=c;
			}
		}else{
			max=c;
			med=b;
			min=a;
		}
	}

	cout << "El orden es " << max << ", " << med << " y " << min <<endl;
    system("pause");
    return 0;
}
