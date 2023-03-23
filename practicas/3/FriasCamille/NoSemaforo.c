#include <stdio.h>
int aquiere(int semaforo);
int realese(int semaforo);
int init();
void semaforo ()
{
	int semaforo, opc=0;
	semaforo=init();
	
	while (opc!=3)
	{
		printf("\n \t Que desea hacer:_");
		printf("\n \t 1)... aquiere \n \t 2)... realese \n \t 3)... salir" );
		switch(opc)
		{
			case 1:
				aquiere(semaforo);
			case 2:
				realese(semaforo);
			case 3: 
				printf("\n \t gracias por ver el ejemplo");
		}
		if (semaforo != 0)
		{
			printf("\n \t Estoy libre no te preocupes");
		}
		else
		{
			printf("\n \t Ya me ocupe no molestes");
		}
	}
	
}

int init ()
{
	int inicio;
	printf("\n \t Ingrese el valor inicial del semaforo:_");
	scanf("%i", inicio);
	printf("\n \t El valor inicial del semaforo es: %i", inicio);
	
	return inicio;
}
int aquiere(int semaforo)
{
	semaforo--;
	return 0;
}

int realese(int semaforo)
{
	semaforo++;
	return 0;
}




