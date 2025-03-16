#ifndef PERSONAL_H
#define PERSONAL_H

class Personal
{
	private:
		char nombre[30], apellido[30], genero[15];
		int dia, mes, yea, edad;
		long identidad;
		float estatura, peso;
	public:
		Personal();
		~Personal();
		void setNombre(char [30]);
		void setApellido(char [30]);
		void setNacimiento(int, int, int);
		void setIdentidad(long);
		void setEstatura(float);
		void setPeso(float);
		void setGenero(char [15]);
		char *getNombre();
		char *getApellido();
		int getEdad();
		int getNacimiento();
		long getIdentidad();
		float getEstatura();
		float getPeso();
		char *getGenero();
		friend int calcular_edad(Personal p);
	protected:
};

#endif
