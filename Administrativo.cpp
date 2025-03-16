#include "Administrativo.h"
#include <string.h>

Administrativo::Administrativo()
{
}

Administrativo::~Administrativo()
{
}


void Administrativo::setSalario(long sal)
{
	salario=sal;
}
void Administrativo::setCargo(char car[30])
{
	strcpy(cargo,car);
}
long Administrativo::getSalario()
{
	return(salario);
}
char *Administrativo::getCargo()
{
	return(cargo);
}
