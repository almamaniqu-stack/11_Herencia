#include <iostream>
using namespace std;

class vehiculo{
	protected:
		string color;
		string numeroplaca;
		string marca;
		double velocimetro;
	public:
		vehiculo(){
			color = "vacio";
			numeroplaca = "00000000";
			marca = "vacio";
			velocimetro = 0.00;
		}
		void mostrarDatos();
		void cambiarVelocidad(double velocidad);
};


void vehiculo :: mostrarDatos(){
	cout << "Color del vehiculo: " << color << endl;
	cout << "Marca del vehiculo: " << marca << endl;
	cout << "Numero de placa del vehiculo: " << numeroplaca << endl;
	cout << "Velocidad del vehiculo: " << velocimetro << endl;
}

void vehiculo :: cambiarVelocidad(double velocidad){
	velocimetro = velocidad;
}

class automovil : public vehiculo{
	private:
		int cantidadPuertas;
		int cantidadPasajeros;
	public:
		automovil(){
			cantidadPuertas = 0;
			cantidadPasajeros = 0;
		}
		void mostrarAutomovil();
		void subirPasajeros(double pasajeros);
		void bajarPasajeros(double pasajeros);	
};

void automovil :: mostrarAutomovil(){
	cout << "Color del vehiculo: " << color << endl;
	cout << "Marca del vehiculo: " << marca << endl;
	cout << "Numero de placa del vehiculo: " << numeroplaca << endl;
	cout << "Velocidad del vehiculo: " << velocimetro << endl;
	cout << "Cantidad de Puertas: " << cantidadPuertas << endl;
	cout << "Cantidad de pasajeros: " << cantidadPasajeros << endl;
}

int main(){
	vehiculo auto1;
	automovil utau1;
	auto1.mostrarDatos();
	auto1.cambiarVelocidad(12.00);
	auto1.mostrarDatos();
	cout << "--------------------------------------" << endl;
	utau1.mostrarAutomovil();
	return 0;		
}


