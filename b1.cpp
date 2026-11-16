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

void automovil :: subirPasajeros(double pasajeros){
	cantidadPasajeros += pasajeros;
}

void automovil :: bajarPasajeros(double pasajeros){
	cantidadPasajeros -= pasajeros;
}

class camion : public vehiculo{
	private:
		float carga;
	public:
		camion(){
			carga = 0;
		}
		void mostrarCamion();
		void cambiarCarga(float carga1);	
};

void camion :: mostrarCamion(){
	cout << "Color del vehiculo: " << color << endl;
	cout << "Marca del vehiculo: " << marca << endl;
	cout << "Numero de placa del vehiculo: " << numeroplaca << endl;
	cout << "Velocidad del vehiculo: " << velocimetro << endl;
	cout << "Capacidad de Carga: " << carga << endl;
}

void camion :: cambiarCarga(float carga1){
	carga += carga1; 
}

int main(){
	vehiculo auto1;
	automovil utau1;
	camion amb1;
	auto1.mostrarDatos();
	cout << "--------------------------------------" << endl;
	auto1.cambiarVelocidad(12.00);
	auto1.mostrarDatos();
	cout << "--------------------------------------" << endl;
	utau1.cambiarVelocidad(13.00);
	utau1.mostrarAutomovil();
	cout << "--------------------------------------" << endl;
	amb1.cambiarCarga(345.00);
	amb1.mostrarCamion();
	return 0;		
}
