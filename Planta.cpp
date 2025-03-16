#include "Planta.h"
#include <string.h>

Planta::Planta()
{
}

Planta::~Planta()
{
}

void Planta::setHorario(int hor)
{
	horario=hor;
}
void Planta::setActividades(char act[50])
{
	strcpy(actividades,act);
}
int Planta::getHorario()
{
	return(horario);
}
char *Planta::getActividades()
{
	return(actividades);
}
