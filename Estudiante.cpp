#include "Estudiante.h"
#include <string.h>
Estudiante::Estudiante()
{
}

Estudiante::~Estudiante()
{
}

void Estudiante::setCodigo(long cod)
{
	codigoe=cod;
}
void Estudiante::setPrograma(char prog[50])
{
	strcpy(programa,prog);
}
void Estudiante::setSemestre(int sem)
{
	s=sem;
}
void Estudiante::setFacultad(char fac[50])
{
	strcpy(facultade,fac);
}
long Estudiante::getCodigo()
{
	return(codigoe);
}
char *Estudiante::getPrograma()
{
	return(programa);
}
int Estudiante::getSemestre()
{
	return(s);
}
char *Estudiante::getFacultad()
{
	return(facultade);
}

