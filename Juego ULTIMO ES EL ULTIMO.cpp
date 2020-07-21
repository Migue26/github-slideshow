#include<iostream>
#include<stdlib.h>
#include<string.h>
#include<locale.h>
#include<ctime>
#include<stdio.h>
using namespace std;

 main(){
 	
 	setlocale(LC_ALL,"spanish");
 	
	char nombre[16];
	int  opcion, damash, vida=100, ataque,covid;
	//logo del juego introducción
	cout<<"\n";
	cout<<"\t   ********* "<<endl;
	cout<<"\t       *"<<endl;
	cout<<"\t ***** *  *   *"<<endl;
	cout<<"\t *     *  * * *"<<endl;
	cout<<"\t ****  *  * * *"<<endl;
	cout<<"\t    *  *  * * *"<<endl;
	cout<<"\t*****      * *"<<endl<<endl<<endl<<endl;
	system("pause");
	system("cls");	
	//introducción
	cout<<"\n\t\tEstas Listoooo ... ???\n"<<endl<<endl; 
	system("pause");
	system("cls");
	cout<<"\n\t\tCrees que eres capaz ... ???\n"<<endl<<endl;
	system("pause");
	system("cls");
	cout<<"\n\t\tJA JA JA JA ... Ya lo veremos ... \n"<<endl<<endl;
	system("pause");
	system("cls");
	cout<<"\n\t\tBienvenido a Salving The World"<<endl;
	//input pedir el nombre del usuario
	cout<<"\n\nIntroduce tu nombre de jugador (solo se admiten 15 dígitos)"<<endl;
	cin.getline(nombre,16,'\n');
	system("cls");		
    	//El incicio (se interactua con el usuario)
		cout<<"\nHola "<<nombre<<" soy Marcus escuche que eres bueno eliminando virus\n"<<endl;
		cout<<"\nExisten varios virus que quieren  acabar con el mundo\n"<<endl;	
		cout<<"\nY necesitamos de tu ayuda para poder eliminarlos\n"<<endl;	
		cout<<"\nA continuación te voy a mostrar los  virus que tendrás que combatir\nCada uno de ellos tiene su grado de dificultad"<<endl;
		cout<<"Pero estoy seguro de que podras con todos"<<endl<<endl;
		system("pause");
		system("cls");	
		//La forma del juego una explicacion acerca del juego
		cout<<"\nTe explico un poco como funciona este juego."<<endl;
		cout<<"~El juego consta con dos niveles uno más complicado del otro\npero no te asustes que todo va depender de la suerte que tengas GAAAA"<<endl;
		cout<<"\n\n IMPORTANTE!!!\n\tMientras más ataques mandes mayor sera la posibilidad de que pierdas"<<endl;
		
      while(opcion!=1 && opcion!=2){//Eleccion de 2 opciones. Los 2 niveles 
	  	
        cout<<"\n(1)Covid-19             \t\t     Daño(0-50)"<<endl;
        cout<<"(2)Pandemia de influenza\t\t     Daño(0-15)"<<endl;
  		cout<<"\n\n Elije el primer virus que quieres eliminar\n\n";cin>>opcion;
  		
        switch(opcion){
        	
        	case 1://covid 19 y sus datos
        		cout<<"\nUy veo que te gusta los grandes retos, bueno a exterminar el virus!!!\n"<<endl<<endl<<endl;
           		cout<<"A continuación te voy  a dar unos datos acerca de este virus espero que pueda \nservir de algo"<<endl<<endl;
           		cout<<"(*)lugar de Origen:    \t Wuhan(China), diciembre del 2019 "<<endl<<endl;
           		cout<<"\n(*)Transmición:      \t Se transmite al establecer contacto físico \n\t\t\t   con una persona infectada"<<endl<<endl;
           		cout<<"\n(*)Síntomas:         \t Síntomas Frecuentes:\n\t\t\t   Fiebre, Tos seca y cansancio"<<endl;
           		cout<<"                       \t Síntomas Inusuales:\n\t\t\t   La congestión nasal, el dolor de cabeza, \n\t\t\t   la conjuntivitis, el dolor de garganta,\n\t\t\t   la diarrea, la pérdida del gusto o el olfato"<<endl<<endl;
           		cout<<"\n(*)Prevención:       \t Lavarse las manos\n\t\t\t Distanciamiento social\n\t\t\t Utilizar mascarillas"<<endl<<endl<<endl;
           		
           		cout<<"Vida inicial es: 100"<<endl;
           		cout<<"Vida del covid es: 100"<<endl;
           		
      		
           		
				   	for(covid=100; covid>0 && vida>0; covid=covid){//mostrar el menú de ataques
	
                     	cout<<"\n1. lavarse las manos             10 Damage"<<endl;
                      	cout<<"2. Distanciamiento social        20 Damage"<<endl;
                     	cout<<"3. Utilizar las mascarillas      30 Damage"<<endl;
                      	cout<<"con que quieres atacar?: "; cin>>ataque;
	
                    	switch(ataque){

		
                    		case 1://si utilizamos la opcion 1
	                    		covid= covid -10;
	                    		
	                  	srand(time(NULL));
                     	damash= 10*(rand()%6);
                    	vida = vida - damash; 

	                      		if(covid<=0){
			                     	cout<<"\nFelicidades lograste vencer a este virus\nSalvaste al mundo !!!!"<<endl;
					
		                    	}
	                     		else{
			                    	if(vida>0){
				                     	cout<<"\nvida del virus: "<<covid<<endl;
				                     	cout<<"ataque del virus"<<endl;
				                    	cout<<"tu vida: "<<vida<<endl;
			                     	}
	                  		    	else{
	             			        	cout<<"Perdiste";
                			     	}
		                     	}
		                    	break;
		
                    		case 2://si utilizamos el ataque 2
	                     		covid= covid -20;
	                     		
                    	srand(time(NULL));
                     	damash= 10*(rand()%6);
                    	vida = vida - damash; 	                     		

	                     		if(covid<=0){
			                    	cout<<"\nFelicidades lograste vencer a este virus\nSalvaste al mundo !!!!";
	                    		}
		                    	else{
		                     		if(vida>0){
				                    	cout<<"\nvida del virus: "<<covid<<endl;
				                     	cout<<"ataque del virus"<<endl;
				                     	cout<<"tu vida: "<<vida<<endl;
			                     	}
		                     		else{
			                     		cout<<"Perdiste";
		                    		}
		                    	}
		                    	break;
			
	                     	case 3://si utizamos el ataque 3
	                     		
	                   	covid= covid -30;
                    	srand(time(NULL));
                     	damash= 10*(rand()%6);
                    	vida = vida - damash; 
                    	
	                      		if(covid<=0){
			                    	cout<<"\nFelicidades lograste vencer a este virus\nSalvaste al mundo !!!!";
		                     	}
		                    	else{
		                    		if(vida>0){
				                    	cout<<"\nvida del virus: "<<covid<<endl;
				                    	cout<<"ataque del virus"<<endl;
				                     	cout<<"tu vida: "<<vida<<endl;
			                    	}
			                    	else{
			                     		cout<<"Perdiste";
			                    	}	
		                     	}
		                    	break;
			
                           	default:
	                        	cout<<"\nla opción ingresada no es válida"<<endl;
	                    	break;
	
                        }
						
                   }
				   break;//fin de todas las instrucciones  "covid" 
        	case 2://neumonia
        		cout<<"\nVamos a exterminar  por completo a este virus !!!\n"<<endl<<endl<<endl;
        		
        		cout<<"\n(*)Lugar de origen:   \t\t Los primeros casos se detectaron en el estado\n\t\t\t         de Veracruz(México,31 de enero del 2019)"<<endl<<endl;
        		cout<<"(*)Transmición:       \t\t Se transmite al tener contacto \n\t\t\t\t físico con una persona infectada"<<endl<<endl;
        		cout<<"(*)Síntomas:          \t\t Fiebre alta(38-40)C°"<<endl;
        		cout<<"                      \t\t Tos seca"<<endl;
        		cout<<"                      \t\t Dolor de garganta"<<endl;
        		cout<<"                      \t\t Problemas para respirar"<<endl<<endl;
        		cout<<"(*)Prevención:        \t\t Lavarse las manos con agua y jabón \n\t\t\t\t entre 10 a 20 segundos, usar mascarillas"<<endl;
        		cout<<"                      \t\t Ventilar lugares habitados"<<endl<<endl;
        		
           		cout<<"\nVida inicial es: 100"<<endl;
           		cout<<"Vida de la neumonía es: 100"<<endl;
        		

           			for(covid=80; covid>0 && vida>0; covid=covid){//menú de ataques 
	

                    	srand(time(NULL));
                     	damash= 5*(rand()%4);
                    	vida = vida - damash;
	
                     	cout<<"\n1. Lavarse las manos             15 Damage"<<endl;
                      	cout<<"2. Ventilación de lugares        25 Damage"<<endl;
                     	cout<<"3. Utilizar las mascarillas      35 Damage"<<endl;
                      	cout<<"con que quieres atacar?: "; cin>>ataque;
	
                    	switch(ataque){
		
                    		case 1://si se elije  la opción 1
	                    		covid= covid -15;
	                    		
                    	srand(time(NULL));
                     	damash= 5*(rand()%4);
                    	vida = vida - damash; 	                    		

	                      		if(covid<=0){
			                     	cout<<"\nFelicidades lograste vencer a este virus\nSalvaste al mundo !!!!"<<endl;
					
		                    	}
	                     		else{
			                    	if(vida>0){
				                     	cout<<"\nvida del virus: "<<covid<<endl;
				                     	cout<<"ataque del virus"<<endl;
				                    	cout<<"tu vida: "<<vida<<endl;
			                     	}
	                  		    	else{
	             			        	cout<<"Perdiste";
                			     	}
		                     	}
		                    	break;
		
                    		case 2://si se elije  la opción 2
	                     		covid= covid -25;
	                     		
                    	srand(time(NULL));
                     	damash= 5*(rand()%4);
                    	vida = vida - damash; 
	                     		if(covid<=0){
			                    	cout<<"\nFelicidades lograste vencer a este virus\nSalvaste al mundo !!!!";
	                    		}
		                    	else{
		                     		if(vida>0){
				                    	cout<<"\nvida del virus: "<<covid<<endl;
				                     	cout<<"ataque del virus"<<endl;
				                     	cout<<"tu vida: "<<vida<<endl;
			                     	}
		                     		else{
			                     		cout<<"Perdiste";
		                    		}
		                    	}
		                    	break;
			
	                     	case 3://si se elije la opción 3
	                      		covid= covid -35;
	                      		
                    	srand(time(NULL));
                     	damash= 5*(rand()%4);
                    	vida = vida - damash; 
	                      		if(covid<=0){
			                    	cout<<"\nFelicidades lograste vencer a este virus\nSalvaste al mundo !!!!";
		                     	}
		                    	else{
		                    		if(vida>0){
				                    	cout<<"\nvida del virus: "<<covid<<endl;
				                    	cout<<"ataque del virus"<<endl;
				                     	cout<<"tu vida: "<<vida<<endl;
			                    	}
			                    	else{
			                     		cout<<"Perdiste";
			                    	}	
		                     	}
		                    	break;
			
                           	default:
	                        	cout<<"la opción ingresada no es válida"<<endl;
	                    	break;
	
                        }//fin de las instrucciones con respecto a la neumonia
                   }        		
        		
        
				
				//contenido
        		break;
			default:
					
				cout<<"\nsu opción no es válida\n";
				break;
			
        }
      }
		getchar();
}

