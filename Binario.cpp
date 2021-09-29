#include <iostream>
#include <array>
using namespace std;
int main(){
array<int,5> numero={1,2,3,4,5};
int inf=0;
int sup=(int) numero.size() - 1;
int med;
int valor=4, indice =-1;
while (inf<=sup){
	med=inf+(sup-inf)/2;
	if (valor<numero[med]) sup=med-1;
	else if (valor>numero[med]) inf = med+1;
	else { indice = med;
	break;
	}
}
cout << "El valor " << valor << "Esta en el indice: " << indice<< endl;
return 0;
}
