#ifndef PROFESOR_H
#define PROFESOR_H

#include "Personal.h"

class Profesor : public Personal
{
	private:
		long codigo;
		char facultad[50];
		char asignatura[50];
	    char tipocontrato[30];
	public:
		Profesor();
		~Profesor();
		void setCodigo(long);
		void setFacultad(char [50]);
		void setAsignatura(char [50]);
		void setTipoContrato(char [50]);
		long getCodigo();
		char *getFacultad();
		char *getAsignatura();
		char *getTipoContrato();
		
	protected:
};

#endif
#ifndef PROFESOR_H
#define PROFESOR_H

#include "Personal.h"

class Profesor : public Personal
{
	public:
		Profesor();
		~Profesor();
	protected:
};

#endif
