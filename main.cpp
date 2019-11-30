#include <iostream>
#include <stdlib.h>
using namespace std;

int main(int argc, char** argv) {
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
    string articulosLlevadosDescripcion[1300]
		{
		};
	string articulosLlevadosCodigo[1300]
        {
		};
	int articulosLlevadosCantidad[1300]
		{
		};
	int articulosLlevadosPrecio[1300]
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
	int indice2 = 0;
	int totalIngresoCaja = 0;
	string cualquierTecla;

    do
        {
            cout << "Pon el codigo de barras" << endl;
            cin >> codigoBarras;
            for (indice = 0; indice <= 12; indice++)
            {
                if (codigoBarras == codigo[indice])
                    {
                        bandera = indice;
                        inventario[indice] = inventario[indice] - 1;
                        totalArticulos[indice] = totalArticulos[indice] + 1;
                        totalPrecio = precio[bandera] + totalPrecio;
                        articulosLlevadosDescripcion[indice2] = descripcion[indice];
                        articulosLlevadosCodigo[indice2] = codigo[indice];
                        articulosLlevadosCantidad[indice2] = articulosLlevadosCantidad[indice2] + 1;
                        articulosLlevadosPrecio[indice2] = precio[indice];
                    	indice2 = indice2 + 1;
                    }
                else
                    {
                    }
            }
            if(bandera == 14)
                {
                    cout << "Producto no encontrado" << endl;
                }
            else
                {
                }
            if(codigoBarras == "0")
                {
		            for( indice = 0 ; indice <= indice2 - 1; indice++)
		            {
		                cout << endl << articulosLlevadosCodigo[indice] << "    " << articulosLlevadosDescripcion[indice]
                        << "    $" << articulosLlevadosPrecio[indice];
		            }
		            cout << endl << "Total: $" << totalPrecio << endl;
		            totalIngresoCaja = totalPrecio + totalIngresoCaja;
		            totalPrecio = 0;
		            indice2 = 0;
		            cout << endl << "Pulsa cualquier caracter y pulsa enter para continuar";     //Esta parte limpia la pantalla con system(cls)
		            cin >> cualquierTecla;
		            system("cls");
                }
            else
                {
                }
        } while(codigoBarras != "-1");
        cout << endl << "Ventas de cada producto: ";
        for(indice = 0; indice <= 12; indice++)
            {
                cout << endl << codigo[indice] << "    " << descripcion[indice] << "  "
                << cantidad[indice] << "        vendidos:  " << totalArticulos[indice];       //Aquí se escribe el flujo de caja diario
            }
        cout << endl << endl << "Estos son los ingresos totales de los productos: $" << totalIngresoCaja;
    return 0;
}

