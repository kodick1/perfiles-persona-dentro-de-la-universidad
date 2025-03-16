#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "Personal.h"

class Estudiante : public Personal
{
	private:
		long codigoe;
		char programa[50];
		int s;
		char facultade[50]; 
	public:
		Estudiante();
		~Estudiante();
		void setCodigo(long);
		void setPrograma(char [50]);
		void setSemestre(int);
		void setFacultad(char [50]);
		long getCodigo();
		char *getPrograma();
		int getSemestre();
		char *getFacultad();
	protected:
};

#endif
#ifndef ESTUDIANTE_H
#define ESTUDIANTE_H

#include "Personal.h"

class Estudiante : public Personal
{
	public:
		Estudiante();
		~Estudiante();
	protected:
};

#endif
