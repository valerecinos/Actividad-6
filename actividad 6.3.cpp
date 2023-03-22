#include <iostream>
using namespace std;

main(){
	int total=0;
	int notas[total];
	char res;
	
	do{
		cout << "Ingrese nota: "<< total<< endl;
		cin >>notas[total];
		total++;
		cout << "Desea ingresar otro valor? (s/n)"<< endl;
		cin >> res;
		
	}while(res=='s'||res=='S');
		
	cout <<"-----mostrar notas-----"<< endl;
	for(int i=0;i<total;i++){
		cout << "NOTA ("<<i<<"):"<< notas[i]<< endl;
	}
	
	system("pause");
}
