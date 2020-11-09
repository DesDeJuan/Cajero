#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <cstdlib>
float saldo;
//Subprogramas
char datos(char usuario[10], char nip_actual[4])                   //Esta parte captura los datos del usuario
{                                                               //Los cuales son usuario y contrasenia
    std:: cout << "Ingrese su nombre de usuario" << '\n';
    std:: cin >> usuario;

    std:: cout << "Ingrese su NIP" << '\n';
    std:: cin >> nip_actual;

    std:: cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
}																//Fin subprograma datos de usuario

void menu()
{
	std::cout << "Cambio de NIP ------------ 1 \n";
	std::cout << "Consulta de saldo -------- 2 \n";
	std::cout << "Retiro de efectivo ------- 3 \n";
	std::cout << "Deposito ----------------- 4 \n";
	std::cout << "Transferencia -------------5 \n";
}

int NIP(int nip_actual)											//Operacion para cambio de NIP
{
	int nip_nuevo = 0;
	std::cout << "*- BIENVENIDO AL SISTEMA DE CAMBIO DE NIP -* \n";
    std::cout << "Por favor ingrese su NIP actual: ";
    std::cin >> nip_actual;
    std::cout << "Ingrese el NIP nuevo: ";
    std::cin >> nip_nuevo;
    nip_actual = nip_nuevo;
    
    std::cout << "Su nip se a actualizado a " << nip_actual << '\n';
    system("PAUSE");
    
    return nip_nuevo;
}

float ConsultaSaldo(float saldo_disp)							//Operacion para consulta de saldo
{
	std::cout << "¿Cuanto dinero desea tener? (MOMENTO XD) \n";
	std::cin >> saldo_disp;
	std::cout << "Tu saldo disponible es de: " << saldo_disp << '\n';
	system("PAUSE");
	
	return saldo_disp;
}

float Retiro(float saldo_disp)									//Operacion de retiro de efectivo
{
	float retiro = 0;
	
		std::cout << "Tu saldo es de: " << saldo_disp << '\n';
		std:: cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
		std::cout << "Cantidad a retirar \n";
		std::cin >> retiro;
		saldo_disp = saldo_disp - retiro;
		std::cout << "Tu nuevo saldo disponible es: ";
		std::cout << saldo_disp << '\n';
		system("PAUSE");
		
		return saldo_disp - retiro;
}

float Deposito(float saldo_disp)									//Operacion de deposito de efectivo
{
	float deposito = 0;
	if (saldo_disp = 0)
	{
		return 4;
	}
	else
	{
		std::cout << "Cantidad a depositar \n";
		std::cin >> deposito;
		saldo_disp = saldo_disp + deposito;
		std::cout << "Tu nuevo saldo disponible es: ";
		std::cout << saldo_disp << '\n';
		system("PAUSE");
	}
}

float Transferencia(float saldo_disp)
{
	float transf;
	std::cout << "Coloque cantidad a transferir: ";
	std::cin >> transf;
	std::cout << '\n';
}

char operation(char selection[1])								//Captura la seleccion del usuario para realizar una accion
{
	int option = 0, nip;
	menu();
	std::cin >> option;
	
	std::cout << "Saldo: " << saldo << '\n';
	
	switch (option)
	{
		case 1:
        	NIP(nip);
			break;
		case 2:
            ConsultaSaldo(saldo);
            saldo = saldo;
			break;
		case 3:
			Retiro(saldo);
			break;
		case 4:
			Deposito(saldo);
			break;
			
	}
}

int main()
{
    std:: cout << "BIENVENIDO A BANACOMER" << '\n';                 //Mensaje de bienvenida al usuario
    std:: cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    
    std:: cout << "*- INGRESE SUS DATOS PARA CONTINUAR -*" << '\n';
    char user[15] = "", nip[4] = "";                            
    
    int attempt;
    while (attempt < 4)
    {
    	datos(user, nip);                                      //Llamada para el subprograma de datos del usuario
    	
    	
        if (strcmp(user, "JUAN") == 0 && strcmp(nip, "1275") == 0)
        {
            std:: cout << "Bienvenido " << user << '\n';
            break;
        }                                         
        else if (strcmp(user, "HEKTOR") == 0 && strcmp(nip, "4572") == 0)
        {
        	std:: cout << "Bienvenido " << user << '\n';
            break;
        }
        else if (strcmp(user, "NORMA") == 0 && strcmp(nip, "2323") == 0)
        {
        	std:: cout << "Bienvenido " << user << '\n';
            break;
		}
		else
		{
			std:: cout << "Usuario incorrecto \n";
            attempt++;
		}
    }
    
    int respuesta = 1;
    while (respuesta < 2)
    {
    	std::cout << "*- Seleccione la operacion que desea realizar -* \n";
    	char seleccion[1] = "";
    	operation(seleccion);									//Llamada al subprograma para seleccion de operaciones
    	
    	std::cout << "¿Desea realizar otra operacion? (1 -> SI , 2 -> NO) \n";
    	std::cin >> respuesta;
    	system("cls");
	}
    											
    system("PAUSE()");
}
