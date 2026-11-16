#include <iostream>
using namespace std;

class vehiculo{
	protected:
		string identificador, placa, marca, estado;
		int conEstado;
	public:
		vehiculo(){
			identificador = "00000000000000000";
			placa = "000000";
			marca = "vacio";
			estado = "suspendido";
			conEstado = 13;
		}
		void ConsultarDatos();
		string getIdentificador();
		string getPlaca();
		string getMarca();
		string setIdentificador(string IDN);
		string setPlaca(string P);
		string setMarca(string M);
		string Disponibilidad(int D);
		string Reservar();
		string CancelarReserva();
};

void vehiculo :: ConsultarDatos(){
	cout << "Codigo de Indentificacion: " cout << identificador << endl;
	cout << "Numero de placa: " << placa << endl;
	cout << "Marca del vehiculo: " << marca << endl;
	cout << "Estado de reserva: " << estado << endl;
} 

string vehiculo :: getIdentificador(){
	return identificador;
}

string vehiculo :: getPlaca(){
	return placa;
}

string vehiculo :: getMarca(){
	return marca;
}

string vehiculo :: setIdentificador(string IDN){
	identificador = IDN;
}

int main(){
	
	return 0;
}
