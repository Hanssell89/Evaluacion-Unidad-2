#include <iostream>

using namespace std;


float listaNotas(int num);
float promedioNotas(int num);

float listaNotas(int num){
    cout << "Ingrese las notas" << endl;
    cout << "Calculo: " << endl;
    cin >> num1;
    cout << "Taller de lectura: " << endl;
    cin >> num2;
    cout << "Fundamentos tic: " << endl;
    cin >> num3;
    cout << "Metodologia de programcion: " << endl;
    cin >> num4;
    cout << "Reflexion teologica: " << endl;
    cin >> num5;
    cout << "Tecnologias de colaboracion: " << endl;
    cin >> num6;
}

float promedioNotas(int num){
    promedio = (num1, num2, num3, num4, num5, num6) / 6;
    cout << "El promedio de notas es: " << promedio;
}