#include "Laboratorista.h"
#include <string.h>

Laboratorista::Laboratorista()
{
}

Laboratorista::~Laboratorista()
{
}

void Laboratorista::setLaboratorio(int numl)
{
	lab=numl;
}
void Laboratorista::setNombrelab(char noml[50])
{
	strcpy(nomblab,noml);
}
void Laboratorista::setActividadesLab(char actl[50])
{
	strcpy(actividadeslab,actl);
}
int Laboratorista::getLaboratorio()
{
	return(lab);
}
char *Laboratorista::getNombrelab()
{
	return(nomblab);
}
char *Laboratorista::getActividadesLab()
{
	return(actividadeslab);
}
