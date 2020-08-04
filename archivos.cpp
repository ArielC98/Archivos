#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){

    ofstream archivo;
    string nombre, apellido, cedula;
    archivo.open("datos.txt",ios::out);
    cout << "Ingrese su nombre: " << endl;
    cin >> nombre;
    cout << "Ingrese su apellido: " << endl;
    cin >> apellido; 
    cout << "Ingrese su numero de cedula: " << endl;
    cin >> cedula; 

    archivo << nombre << "\n";
    archivo << apellido << "\n";
    archivo << cedula << "\n";
    archivo.close();

    ifstream lectura;
    string dato;
    lectura.open("datos.txt", ios::in);
    if(lectura.fail()){

        cout << "El archivo no se pudo abrir" << endl;

    }
    else{
        system("cls");
        cout << "Los datos ingresados fueron: " << endl;
        while(!lectura.eof()){

            getline(lectura, dato);
            cout << dato << endl;

        }
    }
    return 0;
}