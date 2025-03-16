#include "Personal.h"
#include <string.h>

Personal::Personal()
{
	strcpy(nombre," ");
	identidad=0;
	edad=0;
	estatura=0;
	peso=0;
	
}

Personal::~Personal()
{
}

void Personal::setNombre(char nom[30])
{
	 strcpy(nombre,nom);
}

void Personal::setApellido(char ape[30])
{
	strcpy(apellido,ape);
}

void Personal::setNacimiento(int d, int m, int y)
{
 dia=d;
 mes=m;
 yea=y;	
}

void Personal::setIdentidad(long iden)
{
	identidad=iden;
}
void Personal::setEstatura(float est)
{
	estatura=est;
}

void Personal::setPeso(float pes)
{
	peso=pes;
}
void Personal::setGenero(char gen[15])
{
	strcpy(genero,gen);
}

char *Personal::getNombre()
 {
 	return(nombre);
 }

char *Personal::getApellido()
{
	return(apellido);
}

int Personal::getEdad()
{
	return(edad);
}
long Personal::getIdentidad()
{
 return(identidad);	
}

float Personal::getEstatura()
{
	return(estatura);
}

float Personal::getPeso()
{
  return(peso);	
}
char *Personal::getGenero()
{
	return(genero);
}






















