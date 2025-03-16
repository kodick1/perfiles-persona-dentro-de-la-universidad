#ifndef CONTRATO_H
#define CONTRATO_H

#include "Administrativo.h"

class Contrato : public Administrativo
{
	private:
		char Objetivocontra[150];
	public:
		Contrato();
		~Contrato();
		void setObjetivocontra(char [150]);
		char *getObjetivocontra();
		
	protected:
};

#endif
