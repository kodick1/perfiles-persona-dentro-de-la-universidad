#ifndef PLANTA_H
#define PLANTA_H

#include "Administrativo.h"

class Planta : public Administrativo
{
	private:
		int horario;
		char actividades[50];
	public:
		Planta();
		~Planta();
		void setHorario(int);
		void setActividades(char[50]);
		int getHorario();
		char *getActividades();
	protected:
};

#endif
