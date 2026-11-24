#include <iostream>
using namespace std;

class vehiculo{
	protected:
		string identificador, placa, marca, estado;
		int contEstado, D[3];
	public:
		vehiculo(){
			identificador = "00000000000000000";
			placa = "000000";
			marca = "Vacio";
			estado = "No disponible";
			contEstado = 13;
			D[0] = 10;
			D[1] = 1;
			D[2] = 2;
		}
		void ConsultarDatos();
		string getIdentificador();
		string getPlaca();
		string getMarca();
		void setIdentificador(string IDN);
		void setPlaca(string P);
		void setMarca(string M);
		string Disponibilidad(int D[]);
		void ListaVehiculosDisponibles(int D[]);
		void Reservar();
		void CancelarReserva(string R);
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

string vehiculo :: Disponibilidad(int D[]){
	if(D[0] <= 0 || D[1] <= 0 || D[2] <= 0){
		estado = "No Disponible";
		return estado;
	}
	estado = "Disponible";
	return estado;
}

void vehiculo :: ListaVehiculosDisponibles(int D[]){
	if(contEstado >= 0){
		cout << "Vehiculos de la flota: " << contEstado << endl;
		cout << "Carros: " << D[0] << endl;
		cout << "Helicopteros: " << D[1] << endl;
		cout << "Lanchas: " << D[2] << endl;
	}else{
		cout << "No hay vehiculos disponibles. Reserve uno o salga del sistema." << endl;
	}
}
 
void vehiculo :: Reservar(){
	if(D[0] > 0){
		contEstado--;
		D[0]--;
		cout << "Reservado. Vehiculo terrestre." << endl;
	}else if(D[1] > 0){
		contEstado--;
		D[1]--;
		cout << "Reservado. Vehiculo aereo." << endl; 
	}else if(D[2] > 0){
		contEstado--;
		D[2]--;
		cout << "Reservado. Vehiculo maritimo." << endl; 
	}else{
		cout << "No hay reservas disponibles." << endl;
	}
}
void vehiculo :: CancelarReserva(string R){
	if(R == "Terrestre"){
		contEstado++;
		D[0]++;
		cout << "Reserva cancelada" << endl;
	}else if (R == "Aereo"){
		contEstado++;
		D[1]++;
		cout << "Reserva cancelada" << endl;
	}else if(R == "Maritimo"){
		contEstado++;
		D[3]++;
		cout << "Reserva cancelada" << endl;
	}else{
		cout << "No se encontraron resultados. Vuelva a escribir su respuesta." << endl;
	}
}

class Terrestre : public vehiculo{
	private:
		string ident, plac, marc, disponib;
	public:
		Terrestre(){
			ident = "00000000000000000";
			plac = "000000";
			marc = "Vacio";
			disponib = "No disponible";
		}
		string getIdentif1();
		string getPlaca1();
		string getMarca1();
		void setIdentif1(string In);
		void setPlaca1(string Pl);
		void setMarca1(string Ma);
		void ListaVehiculosDisponibles(int D[]);
		void Reservar();
		void CancelarReserva(string R);
};

int main(){
	
	return 0;
}
