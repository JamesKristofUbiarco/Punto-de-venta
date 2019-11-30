#include <iostream>
#include <wchar.h>
#include <locale.h>
using namespace std;
int main(int argc, char** argv) {
    setlocale(LC_ALL, "");          //Carácteres hispanos
	string codigo[13]{              //son los codigos de barras
            "7501055317875",
            "7501030462859",
            "016000506435",
            "019836103021",
            "4488623928",
            "7501055302086",
            "7501198350432",
            "7501011147942",
            "75067656",
            "7501086801046",
            "75051938",
            "84375998",
            "2486900352",
		};
	string descripcion[13]          //Es el nombre del articulo
        {
            "Fuze Tea Durazno",
            "galletas principe",
            "lucky charms treats barra energetica",
            "Boing de Guayaba",
            "Agua natural skarch",
            "coca",
            "canada dry",
            "Inspireka",
            "Trident Azules",
            "Agua Epura",
            "condones prudence",
            "Bubbaloo de fresa",
            "gomitas de llave",
        };
	string cantidad[13]             //Es la cantidad que contiene el producto
        {
            "600 ml",
            "105 gr",
            "24 gr",
            "500ml",
            "1 litro",
            "500 ml",
            "600 ml",
            "45 gr",
            "6.5 gr",
            "1 litro",
            "20 gr",
            "25 gr",
            "100 gr",
        };
	float precio[13]                //El precio del producto
        {
            15,
            15,
            9,
            10,
            10,
            15,
            20,
            18,
            3,
            8,
            65,
            65,
            20,
        };
    int inventario[13]
        {
            100,
            100,
            100,
            100,
            100,
            100,
            100,
            100,
            100,
            100,
            100,
            100,
            100,
        };
    int i2 = 0;
    string articulosLlevadosDescripcion[i2]
		{
		};
	string articulosLlevadosCodigo[i2]{
		};
	string articulosLlevadosCantidad[i2]
		{
		};
	string articulosLlevadosPrecio[i2]
		{
		};
	int totalArticulos[13]
		{
		};
	int indice;
	string codigoBarras;
	int bandera = 14;
	int totalPrecio = 0;
	int precioParcial;
    do
        {
            cout << "Pon el codigo de barras" << endl;
            cin >> codigoBarras;
            for (indice = 0; indice <= 13; indice++)
            {
                if (codigoBarras==codigo[indice])
                    {
                    	i2 = i2 + 1;
                        bandera = indice;
                        inventario[indice] = inventario[indice] - 1;
                        totalArticulos[indice] = totalArticulos[indice] + 1;
                        totalPrecio =precio[bandera] + totalPrecio;
                        precioParcial = precio[bandera];
                        cout << descripcion[bandera] << " " << cantidad[bandera] << " " << "$" << precio[bandera] << endl;
                        cout << inventario[bandera] << endl;
                        cout << "$" << precioParcial <<endl;
                        articulosLlevadosDescripcion[i2] = descripcion[bandera];
                    }
                else
                    {
                    }
            };
            if(bandera == 14)
                {
                    cout << descripcion[bandera];
                }
            else
                {
                }
            if(codigoBarras != "0")
                {
		            for(indice = 0; indice <= 12; indice++)
		            {
		                cout << endl << codigo[indice] << "    " << descripcion[indice] << "    " << totalArticulos[indice];
		            };
                }
            else
                {
                }
        } while(codigoBarras != "-1");
        cout << endl << "Precio total: " << "$" <<totalPrecio;

    return 0;
}

