#include <iostream>
using namespace std;

main(){
	
	int fil=0,col=0, **pm_notas;
	cout << "Ingrese la cantidad de los estudiantes  "<< endl;
	cin >> fil;
	cout << "Ingrese la cantidad de notas por estudiante "<< endl;
	cin >> col;
	
	pm_notas= new int*[fil];
	for(int i=0;i<fil;i++){
		pm_notas[i]=new int[col];
		
	}
		for(int i=0;i<fil;i++){
			cout << "_____Estudiante_________"<<i<< endl;
			for(int ii=0;ii<col;ii++){
				cout << "Nota "<< ii<< ":";
				cin >> *(*(pm_notas+i)+ii);
			}
			cout << "__________________"<< endl;
		}
		cout << "-----------MOSTRAR NOTAS----------"<< endl;
		for(int i=0;i<fil;i++){
			for(int ii=0;ii<col;ii++){
				cout<<*(*(pm_notas+i)+ii);
			}
			cout<< "______________________"<< endl;
		}
		for(int i=0;i<fil;i++){
			delete []pm_notas[i];
		}
	delete []pm_notas;
	
	
	system("pause");
}
