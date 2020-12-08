#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <cstdlib>

std::string g_user1 = "1234567890", g_user2 = "0987654321", g_user3 = "1111111111", g_nip1 = "1234", g_nip2 = "4321", g_nip3 = "1111";
const double ticket = 20;
void menu()															//Menu principal
{
	std::cout << "Cambio de NIP ------------ 1 \n";
	std::cout << "Consulta de saldo -------- 2 \n";
	std::cout << "Retiro de efectivo ------- 3 \n";
	std::cout << "Deposito ----------------- 4 \n";
	std::cout << "Transferencia -------------5 \n";
}

void menu_bancos()													//Menu de bancos
{
	std::cout << "BANORTE ------------ 6 \n";
	std::cout << "BANAMEX ------------ 7 \n";
	std::cout << "SANTANDER ---------- 8 \n";
}

int main()															//CUERPO PRINCIPAL DEL PROGRAMA
{
	std::string nip_actual, user, nip;
	int banco = 0, seleccion = 0, respuesta = 1, attempt = 0, take = 0, ready = 0, saldo, aux;
	unsigned int numero_cuenta = 0;
	double retiro = 0, saldo_disp = 0, deposito = 0, transf = 0;
	
    std:: cout << "        BIENVENIDO A BANCOMER" << '\n';                 //Mensaje de bienvenida al usuario
    std:: cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    //poner while para cerrar sesion e iniciar en otra!!
    while (ready == 0)
    {
    	std:: cout << "*- INGRESE SUS DATOS PARA CONTINUAR -*" << '\n';              
    	std:: cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
    	
    	std:: cout << "Numero de usuario: ";
    	std:: cin >> user;
    		
    	if (user == g_user1)
    		take = 1;
    	else if (user == g_user2)
    		take = 2;
    	else if (user == g_user3)
    		take = 3;
    	
    	switch (take)
    	{
    	case 1:
    		while (nip_actual != "1234")
    		{
    			std::cout << "NIP: ";
    			std::cin >> g_nip1;
    			nip_actual = g_nip1;
			}
			ready = 1;
			break;
		case 2:
    		while (nip_actual != "4321")
    		{
    			std::cout << "NIP: ";
    			std::cin >> g_nip2;
    			nip_actual = g_nip2;
			}
			ready = 1;
			break;
		case 3:
    		while (nip_actual != "1111")
    		{
    			std::cout << "NIP: ";
    			std::cin >> g_nip3;
    			nip_actual = g_nip3;
			}
			ready = 1;
			break;
		default:
			std::cout << "Usuario no encontrado!! \n";
			system("PAUSE()");
			system("CLS()");
			break;
		}
		
		if (ready == 1)
		{
			std:: cout << "Bienvenido: " << user << '\n';
			system("PAUSE()");
		}
		
    }
    
    while (respuesta == 1)										//Ciclo while para repetir acciones
    {
    	system("CLS()");
    	
    	std::cout << "Usuario: " << user << '\n';
    	std::cout << "NIP: " << "****" << '\n';
    	std::cout << '\n';
    	std::cout << "*- Seleccione la operacion que desea realizar -* \n";
    	std::cout << '\n';
    	
		menu();
		std::cin >> seleccion;
		
		system("CLS()");
	
	switch (seleccion)
	{
		case 1:													//CAMBIOS DE NIP
        	
			std::cout << "*- BIENVENIDO AL SISTEMA DE CAMBIO DE NIP -* \n";
			while (nip_actual != nip)
			{
				std::cout << "Por favor ingrese su NIP actual: ";
    			std::cin >> nip;
				
				if (nip_actual != nip)
				{
					std::cout << "NIP incorrecto!! Intente de nuevo";
					system("CLS()");
				}
				else
					break;	
    		}
    			std::cout << "Ingrese el NIP nuevo: ";
    			std::cin >> nip_actual;
    			
    			std::cout << "Su nip se ha actualizado: " << nip_actual << '\n';
    			system("PAUSE()");
				break;
    		
			
		case 2:													//CONSULTA DE SALDO
			
			std::cout << "*- BIENVENIDO AL SISTEMA DE CONSULTA DE SALDO -* \n";
			std::cout << "Saldo deseado: ";
			std::cin >> saldo_disp;
			std::cout << '\n';
			
			saldo = saldo_disp / ticket;
			saldo = saldo * ticket;
			aux = saldo_disp - saldo;
			saldo_disp = saldo_disp - aux;
			
			
			std::cout << "Tu saldo disponible es de: " << saldo_disp << '\n';
			system("PAUSE()");
			break;
			
		case 3:													//RETIROS DE EFECTIVO
			
			if (saldo_disp == 0)
			{
				std::cout << "Tu saldo es de: " << saldo_disp << " no cumples con los requisitos para retirar \n";
				system("PAUSE()");
				break;
			}
			else
			{
				std::cout << "*- BIENVENIDO AL SISTEMA DE RETIRO DE EFECTIVO -* \n";
				std::cout << "Tu saldo es de: " << saldo_disp << '\n';
				std:: cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
				std::cout << "Cantidad a retirar \n";
				std::cin >> retiro;
				if (saldo_disp < retiro)
				{
					std::cout << "Tu saldo es de: " << saldo_disp << " no cumples con los requisitos para retirar \n";
					system("PAUSE()");
					break;
				}
				else
				{
					saldo_disp = saldo_disp - retiro;
					std::cout << "Tu nuevo saldo disponible es: ";
					std::cout << saldo_disp << '\n';
					system("PAUSE");
					break;
				}
				
			}
			
		case 4:													//DEPOSITOS DE EFECTIVO
		
			if (saldo_disp == 0)
			{
				std::cout << "Tu saldo es de: " << saldo_disp << " no cumples con los requisitos para retirar \n";
				system("PAUSE()");
				break;
			}
			else
			{
				std::cout << "*- BIENVENIDO AL SISTEMA DE DEPOSITO DE EFECTIVO -* \n";
				std::cout << "Tu saldo es de: " << saldo_disp << '\n';
				std::cout << "Cantidad a depositar \n";
				std::cin >> deposito;
				saldo_disp = saldo_disp + deposito;
				std::cout << "Tu nuevo saldo disponible es: ";
				std::cout << saldo_disp << '\n';
				system("PAUSE");
				break;
			}
			
			
		case 5:													//TRANSFERENCIAS DE EFECTIVO
			
			if (saldo_disp == 0)
			{
				std::cout << "Tu saldo es de: " << saldo_disp << " no cumples con los requisitos para retirar \n";
				system("PAUSE()");
			}
			else
			{
				std::cout << "*- BIENVENIDO AL SISTEMA DE TRANSFERENCIA DE EFECTIVO -* \n";
				std::cout << "Tu saldo es de: " << saldo_disp << '\n';
				std::cout << "Coloque cantidad a transferir: ";
				std::cin >> transf;
				std::cout << '\n';
				
				if (saldo_disp < transf)
				{
					std::cout << "Tu saldo es de: " << saldo_disp << " no cumples con los requisitos para transferir \n";
					system("PAUSE()");
				}
				else
				{
					std::cout << "Ingrese banco destino \n";
					menu_bancos();
					std::cin >> banco;
					std::cout << "Ingrese numero de cuenta destino \n";
					std::cin >> numero_cuenta;
					saldo_disp = saldo_disp - transf;
					
					if (banco == 6)																	//BANCO BANORTE
				{
					std::cout << "Transferencia realizada a: " << numero_cuenta << '\n';
						std::cout << "Banco que recibe: BANORTE \n";
						std::cout << "Cantidad transferida: " << transf << '\n';
						std:: cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
						std::cout << "Saldo restante en tu cuenta: " << saldo_disp << '\n';
						system("PAUSE()");
				}
				else if (banco == 7)
				{
					std::cout << "Transferencia realizada a: " << numero_cuenta << '\n';		//BANCO BANAMEX
						std::cout << "Banco que recibe: BANAMEX \n";
						std::cout << "Cantidad transferida: " << transf << '\n';
						std:: cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
						std::cout << "Saldo restante en tu cuenta: " << saldo_disp << '\n';
						system("PAUSE()");
				}
				else
				{
					std::cout << "Transferencia realizada a: " << numero_cuenta << '\n';		//BANCO SANTANDER
						std::cout << "Banco que recibe: SANTANDER \n";
						std::cout << "Cantidad transferida: " << transf << '\n';
						std:: cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
						std::cout << "Saldo restante en tu cuenta: " << saldo_disp << '\n';
						system("PAUSE()");
				}
				}
				break;		
			}
		}
    	
    	system("CLS");
    	
    	std::cout << "�Desea realizar otra operacion? (1 -> SI , 2 -> NO) \n";
    	std::cin >> respuesta;
    	system("cls");
	}
	std::cout << ("*- Gracias por su visita, vuelva pronto -* \n");					
    system("PAUSE()");
}
