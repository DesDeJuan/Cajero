#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>
#include <cstdlib>
void menu()
{
	std::cout << "Cambio de NIP ------------ 1 \n";
	std::cout << "Consulta de saldo -------- 2 \n";
	std::cout << "Retiro de efectivo ------- 3 \n";
	std::cout << "Deposito ----------------- 4 \n";
	std::cout << "Transferencia -------------5 \n";
}

void menu_bancos()
{
	std::cout << "BAN-ORTE ----------------------- 6 \n";
	std::cout << "VANAMETZ ----------------------- 7 \n";
	std::cout << "SANTA CLOS...DIGO DER ---------- 8 \n";
}

int main()															//CUERPO PRINCIPAL DEL PROGRAMA
{
	char user[15] = "", nip_actual[4] = "", nip[4] = "";
	int banco = 0, seleccion = 0, respuesta = 1, attempt = 0;
	unsigned int numero_cuenta = 0;
	double retiro = 0, saldo_disp = 0, deposito = 0, transf = 0;
	
    std:: cout << "BIENVENIDO A BANACOMER" << '\n';                 //Mensaje de bienvenida al usuario
    std:: cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    
    while (attempt < 100)
    {
    	std:: cout << "*- INGRESE SUS DATOS PARA CONTINUAR -*" << '\n';  	                        
    
    	std:: cout << "Ingrese su nombre de usuario" << '\n';
    	std:: cin >> user;

    	std:: cout << "Ingrese su NIP" << '\n';
    	std:: cin >> nip_actual;

    	std:: cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";                                    
    	
    	
        if (strcmp(user, "JUAN") == 0 && strcmp(nip_actual, "1275") == 0)
        {     	
            std:: cout << "Bienvenido " << user << '\n';
            break;
        }                                         
        else if (strcmp(user, "LAURA") == 0 && strcmp(nip_actual, "1234") == 0)
        {
        	std:: cout << "Bienvenido " << user << '\n';
            break;
        }
        else if (strcmp(user, "PEDRO") == 0 && strcmp(nip_actual, "2323") == 0)
        {
        	std:: cout << "Bienvenido " << user << '\n';
            break;
		}
		else
		{
			std:: cout << "Usuario incorrecto \n";
            attempt++;
            system("PAUSE()");
		}
		system("CLS");
    }
    
    while (respuesta < 2)										//Ciclo while para repetir acciones
    {
    	std::cout << "*- Seleccione la operacion que desea realizar -* \n";
		menu();
		std::cin >> seleccion;
		system("CLS");
	
	switch (seleccion)
	{
		case 1:													//CAMBIOS DE NIP
        	
			std::cout << "*- BIENVENIDO AL SISTEMA DE CAMBIO DE NIP -* \n";
			while (strcmp(nip_actual, nip) != 0)
			{
				std::cout << "Por favor ingrese su NIP actual: ";
    			std::cin >> nip;
    		}
    			std::cout << "Ingrese el NIP nuevo: ";
    			std::cin >> nip_actual;
    
    			std::cout << "Su nip se a actualizado a " << nip_actual << '\n';
    			system("PAUSE");
				break;
    		
			
		case 2:													//CONSULTA DE SALDO
			
			std::cout << "*- BIENVENIDO AL SISTEMA DE CONSULTA DE SALDO -* \n";
			std::cout << "¿Cuanto dinero desea tener? (MOMENTO XD) \n";
			std::cin >> saldo_disp;
			std::cout << "Tu saldo disponible es de: " << saldo_disp << '\n';
			system("PAUSE");
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
					
					if (banco == 6)																	//BANCO BAN-ORTE
				{
					std::cout << "Transferencia realizada a: " << numero_cuenta << '\n';
						std::cout << "Banco que recibe: BAN-ORTE \n";
						std::cout << "Cantidad transferida: " << transf << '\n';
						std:: cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
						std::cout << "Saldo restante en tu cuenta: " << saldo_disp << '\n';
						system("PAUSE()");
				}
				else if (banco == 7)
				{
					std::cout << "Transferencia realizada a: " << numero_cuenta << '\n';		//BANCO VANAMETZ
						std::cout << "Banco que recibe: VANAMETZ \n";
						std::cout << "Cantidad transferida: " << transf << '\n';
						std:: cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~ \n";
						std::cout << "Saldo restante en tu cuenta: " << saldo_disp << '\n';
						system("PAUSE()");
				}
				else
				{
					std::cout << "Transferencia realizada a: " << numero_cuenta << '\n';		//BANCO SANTA CLOS...DIGO DER
						std::cout << "Banco que recibe: SANTA CLOS...DIGO DER \n";
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
    	
    	std::cout << "¿Desea realizar otra operacion? (1 -> SI , 2 -> NO) \n";
    	std::cin >> respuesta;
    	system("cls");
	}
    					
	std::cout << ("*- Gracias por su visita, vuelva pronto -* \n");					
    system("PAUSE()");
}
