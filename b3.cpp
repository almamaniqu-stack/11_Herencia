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
		void setIdentificador(string IDN);
		void setPlaca(string P);
		void setMarca(string M);
		string Disponibilidad(int D[3]);
		string Reservar();
		string CancelarReserva();
};

void vehiculo :: ConsultarDatos(){
	cout << "Codigo de Indentificacion: " << identificador << endl;
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

void vehiculo :: setIdentificador(string IDN){
	identificador = IDN;
}

void vehiculo :: setPlaca(string P){
	placa = P;
}

void vehiculo :: setMarca(string M){
	marca = M;
}

string vehiculo :: Disponibilidad(int D[3]){
	if(D[0] <= 0 || D[1] <= 0 || D[3] <= 0){
		estado = "No Disponible";
	}
	if()
	return estado;
}



int main(){
	
	return 0;
}
