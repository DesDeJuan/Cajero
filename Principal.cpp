#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>

//Subprogramas
char datos(char usuario[15], char contra[15])                   //Esta parte captura los datos del usuario
{                                                               //Los cuales son usuario y contrasenia
    std:: cout << "Ingrese su nombre de usuario" << '\n';
    std:: cin >> usuario;

    std:: cout << "Ingrese su contrasenia" << '\n';
    std:: cin >> contra;

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

char operation(char selection[1])								//Captura la seleccion del usuario para realizar una accion
{
	int option = 0;
	menu();
	std::cin >> option;
	switch (option)
	{
		case 1:
			break;
			
	}
}

int main()
{
    std:: cout << "BIENVENIDO A BANACOMER" << '\n';                 //Mensaje de bienvenida al usuario
    std:: cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    
    std:: cout << "Ingrese sus datos para continuar" << '\n';
    char user[15] = "", contra[15] = "";                            
    
    int attempt;
    while (attempt < 4)
    {
    	datos(user, contra);                                      //Llamada para el subprograma de datos del usuario
    	
        if (strcmp(user, "JUAN") == 0 && strcmp(contra, "JUANPA") == 0)
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
    
    std::cout << "*- Seleccione la operacion que desea realizar -* \n";
    char seleccion[1] = "";
    operation(seleccion);											//Llamada al subprograma para seleccion de operaciones
    system("PAUSE()");
}
