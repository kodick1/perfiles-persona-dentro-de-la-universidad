#ifndef ADMINISTRATIVO_H
#define ADMINISTRATIVO_H

#include "Personal.h"

class Administrativo : public Personal
{
  private:
	long salario;
	char cargo[30];

	public:
		Administrativo();
		~Administrativo();
            void setSalario(long);
            void setCargo(char [30]);
            long getSalario();
            char *getCargo();
	protected:
};

#endif
