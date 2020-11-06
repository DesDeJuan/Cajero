#include <iostream>
#include <conio.h>
#include <string.h>
#include <stdio.h>


char datos(char usuario[15], char contra[15])                   //Esta parte captura los datos del usuario
{                                                               //Los cuales son usuario y contraseña
    std:: cout << "Ingrese su nombre de usuario" << '\n';
    std:: cin >> usuario;

    std:: cout << "Ingrese su contraseña" << '\n';
    std:: cin >> contra;

    std:: cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
}

int main()
{
    std:: cout << "BIENVENIDO USUARIO" << '\n';                 //Mensaje de bienvenida al usuario
    std:: cout << "~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    
    std:: cout << "Ingrese sus datos para continuar" << '\n';
    char user[15] = "", contra[15] = "";                            
    datos(user, contra);                                        //Llamada para el subprograma de datos del usuario
    int attempt;
    while (attempt < 4)
    {
        if (strcmp(user, "JUAN") && strcmp(contra, "JUANPA"))
        {
            std:: cout << "Bienvenido JUAN PABLO \n";
        }                                         
        else
        {
            std:: cout << "Usuario incorrecto \n";
            attempt++;
        }
    }
    system("PAUSE()");
}