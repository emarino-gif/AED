#include <iostream>
#include <cassert>
using namespace std;

int main ()
{
							//TIPO		TAMA�O	RANGO			COMENTARIO
	bool val = true;		//bool		1 byte	0-1				Representa valores que pueden ser true o false.
	char letra = 'A';		//char		1 byte	0-255			Se utiliza en los caracteres ASCII de cadenas de estilo C antiguas u objetos std::string que nunca tendr�n que convertirse a UNICODE.
	int x, y, z;			//int		4 bytes	0 a 4294967295	Opci�n predeterminada para los valores enteros.
	float d1 = 3.14, d3;	//float		4 bytes					Para valores tipo n�meros no enteros, o con decimales
	double d2 = 11.3;		//double							Para valores decimales, exactitud de 15	d�gitos despu�s del punto decimal.
	unsigned int a;			//a puede tomar valores entre 0 a 4,294,967,295
	
	string stra = ("aaa");	//string
	string strb; strb = "bbb";

							//assert + operadores
	assert(val == true);	//==	igualdad
	assert(letra != 'B');	//!=	desigualdad
	x = 8;					//=		asignaci�n
	y = 2;
	z = x + y;				//+		suma unaria
	assert(z == 10);
	z = x / y;				///		divisi�n
	assert(z == 4);
	z += x;					//+=	asignaci�n y suma
	assert(z == 12);
	z -= y;					//-=	asignaci�n y resta
	assert(z == 10);
	a = y - x;
	assert(a >= 0);			//>=	mayor o igual
	d3 = d1 + d2;
	assert(d3 > 14);
	assert(d3 < 15);


	return 0;
}
