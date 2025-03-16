#include "Profesor.h"
#include <string.h>

Profesor::Profesor()
{
}

Profesor::~Profesor()
{
}

void Profesor::setCodigo(long cod)
{
	codigo=cod;
}
void Profesor::setFacultad(char facu[50])
{
	strcpy(facultad,facu);
}
		
void Profesor::setAsignatura(char asig[50])
{
	strcpy(asignatura,asig);
}
void Profesor::setTipoContrato(char contr[50])
{
	strcpy(tipocontrato,contr);
}
long Profesor::getCodigo()
{
	return(codigo);
}
char *Profesor::getFacultad()
{
	return(facultad);
}
char *Profesor::getAsignatura()
{
	return(asignatura);
}
char *Profesor::getTipoContrato()
{
	return(tipocontrato);
}


		
		

