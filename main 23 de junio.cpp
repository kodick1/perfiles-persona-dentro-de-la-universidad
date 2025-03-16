#include <iostream>
#include "Personal.h"
#include <stdio.h>
#include "Profesor.h"
#include "Administrativo.h"
#include "Estudiante.h"
#include "Planta.h"
#include "Contrato.h"
#include "Laboratorista.h"
using namespace std;
 
int calcular_edad(Personal p)

{
    int yeara=2020;
    int mesa=6;
	if(mesa<p.mes)
	
		p.edad= (yeara -p.yea)-1;
		
	else	
	p.edad= yeara -p.yea;
		
        return(p.edad);
 	
}

main()
 {
 	FILE *estu, *prof, *admi;
 	estu=fopen("Estudiante.txt","w");
 	prof=fopen("Profesores.txt.","w");
 	admi=fopen("Administrativos.txt.","w");
 	fclose(estu);
 	fclose(prof);
	fclose(admi);
		
 	Personal p1;
 	Personal p;
 	Administrativo p2;
 	Profesor p3;
 	Estudiante p4;
 	Planta p5;
 	long sal;
 	int horat;
 	char acti[50];
 	int opc, opcad;
 	char cargo[30];
 	long identidad;
 	char nom[30], ape[30], genero[12];
 	float estatura, peso;
	int dia, mes, yea, edad;
	long codigo;
	char facultad[50];
	char asignatura[50];
	char tipocontrato[30];
	long codigoe;
	char programa[50];
	int s;
	char facultade[50]; 
	
	
	do{
	cout<<"1 Digite estudiante "<<endl;
 	cout<<"2 Digite profesor "<<endl;
 	cout<<"3 Mostrar estudiante "<<endl;
 	cout<<"4 Mostrar profesor "<<endl;
 	cout<<"5 Digite Administrativo "<<endl;
	cout<<"6 Mostrar amdiministrativo "<<endl;
 	cout<<"7 salir..."<<endl;
	cout<<"Digite opcion..."<<endl;
 	cin>>opc;
	
	 switch(opc){
	 	case 1:
	 	{
	 	estu=fopen("Estudiante.txt","a");
		
		cout<<"Digite nombre del estudiante: "<<endl;
		cin>>nom;
	    p1.setNombre(nom);
	    fprintf(estu,"\n Nombre: %s \n",nom);
		cout<<"Digite apellido del estudiante: "<<endl;
		cin>>ape;
		p1.setApellido(ape); 
		fprintf(estu," Apellido: %s \n",ape);
		cout<<"Digite identificacion: "<<endl;
		cin>>identidad;
		p1.setIdentidad(identidad);	
		fprintf(estu," Identificación: %d \n",identidad);
		cout<<"Digite el genero:"<<endl;
		cin>>genero;
		p1.setGenero(genero); 
		fprintf(estu," Genero: %s \n",genero);
	    cout<<"Digite su peso en kg:"<<endl;
	    cin>>peso;
	    p1.setPeso(peso);
	    fprintf(estu,"Peso en kg: %f \n",peso);
	    cout<<"Digite su estatura en centimetros"<<endl;
	    cin>>estatura;
	    p1.setEstatura(estatura);
	    fprintf(estu," Estatura en centimetros: %f \n",estatura);
	    cout<<"Digite su edad dia de nacimiento"<<endl;
	    cin>>dia;
		cout<<"Digite su edad mes de nacimiento"<<endl;
	    cin>>mes;
		cout<<"Digite su edad año de nacimiento"<<endl;
		cin>>yea; 
	    p1.setNacimiento(dia, mes, yea);
	    fprintf(estu," dia,mes,año %d %d %d \n",dia,mes,yea);
	    cout<<"Digite su codigo: "<<endl;
	    cin>>codigoe;
	    p4.setCodigo(codigoe);
	    fprintf(estu," Codigo:  %d \n",codigoe);
	    cout<<"Digite su programa:"<<endl;
	    cin>>programa;
	    p4.setPrograma(programa);
	    fprintf(estu," Programa: %s \n",programa);
	    cout<<"Digite su semestre: "<<endl;
	    cin>>s;
	    p4.setSemestre(s);
	    fprintf(estu," Semestre: %d \n",s);
	    cout<<"Digite su facultad: "<<endl;
	    cin>>facultade;
	    p4.setFacultad(facultade);
	    fprintf(estu," Facultad: %s \n",facultade);
	    printf("\n"); 
	  fclose(estu);
	 printf("\n");
	 system("cls");
	 break;
	 }
	 
	 case 2:
	 	{ 
	 	prof=fopen("Profesores.txt","a");
	 	cout<<"Digite nombre del profesor: "<<endl;
		cin>>nom;
	    p1.setNombre(nom); 
	    fprintf(prof," Nombre: %s \n",nom);
		cout<<"Digite apellido del profesor: "<<endl;
		cin>>ape;
		p1.setApellido(ape);
		fprintf(prof," Apellido: %s \n",ape);
		cout<<"Digite identificacion: "<<endl;
		cin>>identidad;
		p1.setIdentidad(identidad);	
		fprintf(prof," Identidad: %f \n",identidad);
		cout<<"Digite el genero:"<<endl;
		cin>>genero;
		p1.setGenero(genero); 
		fprintf(prof," Genero: %s \n",genero);
	    cout<<"Digite su peso en kg:"<<endl;
	    cin>>peso;
	    p1.setPeso(peso);
	    fprintf(prof," Peso en kg: %f \n",peso);
	    cout<<"Digite su estatura en centimetros"<<endl;
	    cin>>estatura;
	    p1.setEstatura(estatura);
	    fprintf(prof," Estatura en centimetros: %f \n",estatura);
	    cout<<"Digite su edad dia de nacimiento"<<endl;
	    cin>>dia;
		cout<<"Digite su edad mes de nacimiento"<<endl;
	    cin>>mes;
		cout<<"Digite su edad año de nacimiento"<<endl;
		cin>>yea; 
	    p1.setNacimiento(dia, mes, yea);
	    fprintf(prof," dia,mes,año: %d %d %d \n",dia,mes,yea);
		cout<<endl;
	    cout<<"Digite el codigo: "<<endl;
	    cin>>codigo;
	    p3.setCodigo(codigo);
	    fprintf(prof," Codigo: %d \n",codigo);
	    cout<<"Digite Facultad: "<<endl;
	    cin>>facultad;
	    p3.setFacultad(facultad);
	    fprintf(prof," Facultad: %s \n",facultad);
	    cout<<"Digite asignatura a dictar: "<<endl;
	    cin>>asignatura;
	    p3.setAsignatura(asignatura);
        fprintf(prof," Asignatura: %s \n",asignatura);
		cout<<"Digite tipo de contrato: "<<endl;
        cin>>tipocontrato;
        p3.setTipoContrato(tipocontrato);
	    fprintf(prof," Contrato manejado: %s \n",tipocontrato);
	 
	 printf("\n");   
	 fclose(prof);   
	 printf("\n");
	 system("cls");
	 break;
	 		
		 }
	 
	 case 3:
	 {
	 printf("Nombre del estudiante: %s \n",p1.getNombre());
     printf("Apellido del estudiante: %s \n",p1.getApellido());
	 printf("Identidad: %d \n",p1.getIdentidad()); 
	 printf("Genero: %s \n",p1.getGenero());
	 printf("Peso en Kg: %f \n",p1.getPeso());
	 printf("Estatura en centimetros: %f \n",p1.getEstatura());
 	 printf("calcular edad: %d \n",calcular_edad(p1));
 	 printf("Codigo del estudiante: %d \n",p4.getCodigo());
 	 printf("Programa a inscribir: %s \n",p4.getPrograma());
 	 printf("Usted va en %d  ",p4.getSemestre());
	 printf("semestre \n");
 	 printf("En la facultad %s \n",p4.getFacultad());
	  
	  printf("\n");
	  break;
	 }
	 case 4:
	 	{
	 printf("Nombre del profesor: %s \n",p1.getNombre());
     printf("Apellido del profesor: %s \n",p1.getApellido());
	 printf("Identidad: %d \n",p1.getIdentidad()); 
	 printf("Genero: %s \n",p1.getGenero());
	 printf("Peso en Kg: %f \n",p1.getPeso());
	 printf("Estatura en centimetros: %f \n",p1.getEstatura());
 	 printf(" edad: %d \n",calcular_edad(p1));
 	 printf("codigo del profesor %d \n",p3.getCodigo());
 	 printf("Asignatura que dicta: %s \n",p3.getAsignatura());
 	 printf("Facultad asignada: %s \n",p3.getFacultad());
	 printf("Tipo de contrato que maneja: %s \n",p3.getTipoContrato());
	 
		 printf("\n");
		 break;
		 }
	 	case 5:
	 		{
	 	
		admi=fopen("Administrativos.txt","a");
	 	cout<<"digite nombre del administrativo: "<<endl;
		cin>>nom;
	    p1.setNombre(nom); 
	    fprintf(admi," Nombre: %s \n",nom);
	    cout<<"Digite apellido del administrativo: "<<endl;
		cin>>ape;
		p1.setApellido(ape);
		fprintf(admi," Apellido: %s \n",ape);
		cout<<"digite identificacion: "<<endl;
		cin>>identidad;
		p1.setIdentidad(identidad);	
		fprintf(admi," Identificacion: %f \n",identidad);
		cout<<"digite el genero:"<<endl;
		cin>>genero;
		p1.setGenero(genero); 
		fprintf(admi," Genero: %s \n",genero);
	    cout<<"digite su peso en kg:"<<endl;
	    cin>>peso;
	    p1.setPeso(peso);
	    fprintf(admi," Peso en kg: %f \n",peso);
	    cout<<"digite su estatura en Centimetros"<<endl;
	    cin>>estatura;
	    p1.setEstatura(estatura);
	    fprintf(admi," Estatura en centimetros: %f \n",estatura);
	    cout<<"digite su edad dia de nacimiento"<<endl;
	    cin>>dia;
		cout<<"digite su edad mes de nacimiento"<<endl;
	    cin>>mes;
		cout<<"digite su edad año de nacimiento"<<endl;
		cin>>yea; 
	    p1.setNacimiento(dia, mes, yea);
	    fprintf(admi," dia,mes,año  %d %d %d \n" ,dia,mes,yea);
	    cout<<"digite el nombre del cargo"<<endl;
	    cin>>cargo;
	    p2.setCargo(cargo);
	    fprintf(admi," Cargo: %s \n",cargo);
	    cout<<"Digite salario a devengar: "<<endl;
		cin>>sal;
	    p2.setSalario(sal);
	    fprintf(admi," Salario a devengar: %d \n",sal);
	    cout<<endl;
	    
	    do{
		cout<<"Digite información del administrativo..."<<endl;
		cout<<"1 asignado a planta "<<endl;
 	    cout<<"2 asignado por contrato "<<endl;
 	    cout<<"3 asignado a Laboratorista"<<endl;
 	    cout<<"4 Volver al inicio "<<endl;
 	    cin>>opcad;
 	    
 	    switch(opcad){
 	    	case 1:
 	    		{
 	    		cout<<"Digite las horas que trabajara por semana "<<endl;
				cin>>horat;
				p5.setHorario(horat);
				cout<<"Digite las actividades ha realizar "<<endl;
				cin>>acti;
				p5.setActividades(acti); 			
	    		
				 system("cls");	 
				 printf("\n");
		          break;
				 }
			case 2:
 	    		{
 	    		cout<<"Digite las horas que trabajara por semana "<<endl;
				cin>>horat;
				p5.setHorario(horat);
				cout<<"Digite las actividades ha realizar "<<endl;
				cin>>acti;
				p5.setActividades(acti); 			
	    		
				 system("cls");	 
				 printf("\n");
		          break;
				 }	 
               case 3:
 	    		{
 	    		cout<<"Digite las horas que trabajara por semana "<<endl;
				cin>>horat;
				p5.setHorario(horat);
				cout<<"Digite las actividades ha realizar "<<endl;
				cin>>acti;
				p5.setActividades(acti); 			
	    		
				 system("cls");	 
				 printf("\n");
		          break;
				 }
				case 4:
 	    		{
 	    			    		
				 system("cls");	 
				 printf("\n");
		          break;
				 }	 
 	    
		 }
 	    
		}
		while(opcad!=4);
		
	    
	    fclose(admi);
	    printf("\n");
	       system("cls");
	           break;
	 			
			 }
	      
	      case 6:
	      	{
	 printf("Nombre del administrativo: %s \n",p1.getNombre());
     printf("Apellido del administrativo: %s \n",p1.getApellido());
	 printf("Identidad: %d \n",p1.getIdentidad()); 
	 printf("Genero: %s \n",p1.getGenero());
	 printf("Peso en Kg: %f \n",p1.getPeso());
	 printf("Estatura en centimetros: %f \n",p1.getEstatura());
 	 printf("calcular edad: %d \n",calcular_edad(p1));
	 printf("Cargo del administrativo: %s \n",p2.getCargo());    
	 printf("Salario del administrativo: %d \n",p2.getSalario());    
		 
		 printf("\n");
		 break;	 
			  }
			  
		 case 7:
			  {
			  	printf("Adios!");
				printf("\n");
			  	exit;
				 
				  }	
	 break;
	 }
 }
 	while(opc!=7);
 	
	
}
