#ifndef LABORATORISTA_H
#define LABORATORISTA_H

#include "Administrativo.h"

class Laboratorista : public Administrativo
{
	
	private:
		int lab;
		char nomblab[50], actividadeslab[50];
	public:
		Laboratorista();
		~Laboratorista();
		void setLaboratorio(int);
		void setNombrelab(char [50]);
		void setActividadesLab(char [50]);
		int getLaboratorio();
		char *getNombrelab();
		char *getActividadesLab();
	protected:
};

#endif
