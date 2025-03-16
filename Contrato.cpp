#include "Contrato.h"
#include <string.h>

Contrato::Contrato()
{
}

Contrato::~Contrato()
{
}

void Contrato::setObjetivocontra(char obj[150])
{
	strcpy(Objetivocontra,obj);
}
char *Contrato::getObjetivocontra()  
{
	return(Objetivocontra);
}
