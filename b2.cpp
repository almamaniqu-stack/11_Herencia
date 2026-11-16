#include <iostream>
using namespace std;

class Figura{
	protected:
		string color;
	public:
		Figura(){
			color = "vacio";
		}
};

class Circulo : public Figura{
	private:
		float radio;
	public: 
		Circulo(){
			radio = 0.00;
		}
		double calcularArea();
		double calcularPerimetro();
};

double Circulo :: calcularArea(){
	double Area;
	Area = (3.1415 * (radio * radio));
	return Area;
}

double Circulo :: calcularPerimetro(){
	double Perimetro;
	Perimetro = (2 * 3.1415 * radio);
	return Perimetro;
}

class Rectangulo : public Figura{
	private:
		float base, altura;
	public:
		Rectangulo(){
			base = 0.00; 
			altura = 0.00;
		}
		double calcularArea();
};

double Rectangulo :: calcularArea(){
	double Area;
	Area = (base * altura);
	return Area;
}

class Triangulo : public Figura{
	private:
		float base, altura;
		string tipo;
	public:
		Triangulo(){
			base = 0.00;
			altura = 0.00;
			tipo = "vacio";
		}
		double calcularArea();
};

double Triangulo :: calcularArea(){
	double Area;
	Area = (base * altura) / 2.00;
	return Area;
}

int main(){
	Circulo fig1;
	Rectangulo fig2;
	Triangulo fig3;
	fig1.calcularArea();
	return 0;
}
