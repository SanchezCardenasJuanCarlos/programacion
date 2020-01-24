#include <iostream>

#include<stdlib.h> //lecturas
#include<string.h>
#include<fstream>
#include <string>

#include <cstdlib>//para numeros aleatorios
#include <ctime>

#include <locale.h> // lo de la ñ


using namespace std;
void lectura();

int main(){
	lectura();

	system("pause");


	int masterchief_hp = 130; 
	int masterchief_c = 8;

	int jackal_hp = 90;
	int jackal_c = 15;

	int elite_hp = 110;
	int elite_c = 20;

	int grunt_hp = 50;
	int grunt_c = 13;
	cout << endl;

	//este es el generador de numeros aleaotrios utilizando las bibliotecas #include <cstdlib> y #include <ctime>
	setlocale(LC_CTYPE, "Spanish");
	cout << "- Cortana: ¡Toma MasterCHief!, te he otorgado un potenciador de nivel:  " << endl;
	srand(time(0));
	for (int k = 0; k <= 0; k++) {
		cout << 1 + (rand() % 20) << endl; 
	}
	cout << "Master Chief: la lucha es por la UNSC!!! " << " " << "(Insete el nivel de potenciador asignado por cortana)" <<endl;
	cin >> masterchief_c;
	cout << endl;

	cout << "- Jackal: Los profetas te han enviado un cargamento de mejoras de municion de plasma de nivel:  " << endl;
	for (int k = 0; k <= 0; k++) {
		cout << 1 + (rand() % 20) << endl;
	}
	cout << "Jackal: ghaaaa ghaaaa ghaaa (grasnido de ave humanoide)  " << " " << "(Insete el nivel de la mejora enviado por los profetas)" << endl;
	cin >> jackal_c;
	cout << endl;

	cout << "- Elite: Los profetas te han enviado una espada de energia de nivel: " << endl;
	srand(time(0));
	for (int k = 0; k <= 0; k++) {
		cout << 1 + (rand() % 20) << endl;
	}
	cout << "Elite: quemen sus pellejos mestizos. " << " " << "(Inserte el nivel de la espada otorgada por los profetas)" << endl;
	cin >> elite_c;
	cout << endl;

	cout << "- Grunt: Los profetas te han enviado mejoras para tu aguijoneadora de plasma de nivel:  " << endl;
	srand(time(0));
	for (int k = 0; k <= 0; k++) {
		cout << 1 + (rand() % 20) << endl;
	}
	cout << "Grunt: A la orden!! " << " " << "(insete el nivel de las mejoras enviadas por los profetas)" << endl;
	cin >> grunt_c;
    cout << endl;



	cout << "La guerra entre los covenants y la UNSC a comenzado" << endl;
	
	cout << "Ayuda a MasterChief a luchar contra los profetas y sus aliados" << endl;
	cout << endl;

	for (int k = 0; k < 10; k++) {
		int tiro;
		cout <<"Jackal HP: " << jackal_hp << endl;
		cout <<"Elite HP:" << elite_hp << endl;
		cout <<"Grunt HP: " << grunt_hp << endl;
		cout << " " << " " << "vs" << " " << " " << endl;
		cout <<"MasterChief HP: " << masterchief_hp << endl;
		cout << endl;
		cout << "Tirada: " << (k + 1) << endl;
		cout << endl;

		//turno de master chief
		cout << "El poder de MasterChief se ha incrementado a: " << endl;
		for (int k = 0; k <= 0; k++) {
			cout << 1 + (rand() % 20) << endl; 
		}
		//
		cout << "MasterChief atacara al los aliados de los profetas (inserte el incremento de poder que se te ha asignado)" << endl;
		cin >> tiro;
		cout << endl;
		
		if (tiro >= jackal_c) {
			setlocale(LC_CTYPE, "Spanish");//caracteres especiales
			cout << "El daño de cada rafaga del rifle de asalto son: " << endl;
			for (int k = 0; k <= 0; k++) {
				cout << 1 + (rand() % 6) << endl;
			}
			for (int k = 0; k <= 0; k++) {
				cout << 1 + (rand() % 8) << endl;
			}

			setlocale(LC_CTYPE, "Spanish");//este esta integrado para generar, caracteres especiales como España osea la ñ
			cout << "\tSuma el daño causado por las rafagas del rifle de asalto: " << endl;
			cin >> tiro;
			jackal_hp = jackal_hp - tiro;
			elite_hp = elite_hp - tiro;
			grunt_hp = grunt_hp - tiro;
		}
		else {
			cout << "\thas fallado el ataque\n" << endl;
		}
		cout << endl;

		//turno de jackal
		cout << "jackal recibe nueva municion de plasma con un nivel de: " << endl;
		for (int k = 0; k <= 0; k++) {
			cout << 1 + (rand() % 8) << endl;
		}
		cout << "Jackal atacara a MasterChief con carabina covenant (inserte el nivel de la municion que se le otorgo a Jackal) " << endl;
		cin >> tiro;
		cout << endl;

		if (tiro >= masterchief_c) {
			setlocale(LC_CTYPE, "Spanish");
			cout << "\tEl daño causado por las granadas de plasma son: " << endl;
			for (int k = 0; k <= 0; k++) {
				cout << 1 + (rand() % 8) << endl;
			}

			for (int k = 0; k <= 0; k++) {
				cout << 1 + (rand() % 8) << endl;
			}
			setlocale(LC_CTYPE, "Spanish");
			cout << "\tSuma el daño causado por las dos granadas de plasma" << endl;
			cin >> tiro;
			masterchief_hp = masterchief_hp - tiro;
		}
		else {
			cout << "\tHaz fallado el tiro" << endl;
		}
		cout << endl;

		//turno de elite
		cout << "- Elite: Tu espada de energia ha icrementado su fuerza y resistencia al nivel:" << endl;
		for (int k = 0; k <= 0; k++) {
			cout << 1 + (rand() % 8) << endl;
		}
		setlocale(LC_CTYPE, "Spanish");//AQUÍ
		cout << "Elite realiza un ataque directo con su espada de energia a MasterChief (inserta el nivel de daño incrementado en tu espada)" << endl;
		cin >> tiro;
		cout << endl;

		if (tiro >= masterchief_c) {
			setlocale(LC_CTYPE, "Spanish");
			cout << "\tEl elite a atacado a MasterChief con dos ultimos espadasos con un daño de: " << endl;
			for (int k = 0; k <= 0; k++) {
				cout << 1 + (rand() % 8) << endl;
			}
			for (int k = 0; k <= 0; k++) {
				cout << 1 + (rand() % 8) << endl;
			}
			setlocale(LC_CTYPE, "Spanish");//AQUÍ
			cout << "\tSuma el daño causado por los ultimos dos ataques del elite: " << endl;
			cin >> tiro;
			masterchief_hp = masterchief_hp - tiro;
		}
		else {
			cout << "\tHaz fallado el ataque" << endl;
		}
		cout << endl;

		//turno de grunt 
		setlocale(LC_CTYPE, "Spanish");// AQUI
		cout << "- Grunt: Tu aguijoneadora a mejorado a un nivel de daño de: " << endl;
		for (int k = 0; k <= 0; k++) {
			cout << 1 + (rand() % 8) << endl;
		}
		cout << "Grunt dispara a MasterChief con su aguijoneadora (inserta el nivel de mejora de tu aguijoneadora)" << endl;
		cin >> tiro;
		cout << endl;

		if (tiro >= masterchief_c) {
			cout << "\tGrunt trata de realizar dos disparos criticos a MasterChief con un poder de: "<< endl;
			for (int k = 0; k <= 0; k++) {
				cout << 1 + (rand() % 8) << endl;
			}

			for (int k = 0; k <= 0; k++) {
				cout << 1 + (rand() % 8) << endl;
			}
			setlocale(LC_CTYPE, "Spanish");//Aqui solo pude una de eso de la ñ
			cout << "\tSuma el daño de los dos disparos que realizo: " << endl;
			cin >> tiro;
			masterchief_hp = masterchief_hp - tiro;
		}
		else {
			cout << "\tHaz fallado el tiro" << endl;
		}
		cout << endl;

		//esto es otra cosa
		if (jackal_hp <= 0) {
			break;
		}

		if (masterchief_hp <= 0) {
			cout << "Restablecimiento del escudo de energia (buuuuuuuuum *sonidos de recuperacion*)" << endl;
			cin >> tiro;
			if (tiro < 10) {
				cout << "Los profetas van enbusca del HALO" << endl;
				break;
			} {
				masterchief_hp = 50;
			}
		}
	}
	if (jackal_hp < 0.0) {
		cout << "El MasterChief ha salvado a la humanidad..." << endl;
		cout << "" << endl;

	}
	else {
		cout << "MasterChief ha muerto, no hay un futuro para la humanidad..." << endl;
	}

	return 0;

}
void lectura() { // Para encontrar la portada de halo
	ifstream archivo;
	string texto;

	archivo.open("halo.txt", ios::in); //Abrimos el archivo en modo lectura

	while (!archivo.eof()) { //mientras no sea final del archivo
		getline(archivo, texto);
		cout << texto << endl;
	}

	archivo.close(); //Cerramos el archivo
}