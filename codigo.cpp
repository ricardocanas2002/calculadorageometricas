#include <iostream>

using namespace std;

float areacuadrado (float variable1){
    float resultado = 0.0;

    resultado = variable1 * variable1;

    return resultado;
}

float volumencilindro (float variable1, float variable2){
    float resultado = 0.0;
    const double pi = 3.1415926535;

    resultado = pi * variable1 * variable1 * variable2;

    return resultado;
}

float volumenesfera (float variable1){

    float resultado = 0.0;
    const double pi = 3.1415926535;

    resultado = ((4/3) * pi * variable1 * variable1 * variable1);

    return resultado;
}

int main (){
    int opcion = 0;
    float valor = 0.0;
    int h = 0;
    float rcuadrado = 0.0;
    float vcilindro = 0.0;
    float vesfera = 0.0;

    do {
        cout<<"----MENU PARA CALCULAR FIGURAS GEOMETRICAS----" <<endl;
        cout<<"------1. Calcular el area de un cuadrado------" <<endl;
        cout<<"----2. Calcular el volumen de un cilindro-----" <<endl;
        cout<<"----3. Calcular el volumen de una esfera------" <<endl;
        cout<<"------------4. Salir del programa-------------" <<endl;
        cin>>opcion;

        switch(opcion){
            //area de cuadrado
            case 1:
                cout << "Ingrese el valor del lado (l): " << endl;
                cin >> valor;

                rcuadrado = areacuadrado(valor);

                cout << "El resultado es: " << rcuadrado << " mts^2." << endl;
                break;
            //volumen del cilindro
            case 2:
                cout << "Ingrsese el valor del radio (r): " <<endl;
                cin >> valor;
                cout << "Ingrese el valor de la altura (h): " <<endl;
                cin >> h;

                vcilindro = volumencilindro(valor,h);

                cout << "El resultado es: " << vcilindro << " mts^3." << endl;
                break;
            //Volumen de la esfera
            case 3:
                cout  << "Ingrese el valor del radio (r): " <<endl;
                cin >> valor;

                vesfera = volumenesfera(valor);

                cout << "El resultado es: " << vesfera << endl;
                break;
            //Salir del programa
            case 4:
                cout << "Saliendo del programa..." <<endl;
                break;
        }
    } while (opcion !=4);

}