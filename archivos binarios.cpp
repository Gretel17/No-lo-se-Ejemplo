#include<stdio.h>
#include<windows.h>
#include<ctype.h>

FILE*archivo;

struct alumno{
	int codigo,edad;
	char nombre[50];
	int nota1,nota2,nota3;
	double promedio;
}alum;

void consultar(){
	system("cls");
	archivo=fopen("alumnos.bin","rb");
	if(archivo==NULL)
		printf("\nEl archivo no existe");
	else
	{
		
	}
	
	
}

void agregar(){
	char resp;
	
	archivo=fopen("alumnos.bin","rb");
	if(archivo==NULL)
		printf("\nEl archivo no existe");
	else
		{
			archivo=fopen("alumnos.bin","ab");
			printf("\n Datos del Alumno");
			printf("\n **************** ");
			
			do{
				printf("\nIngrese el codigo del estudiante: ");
				scanf("%d",&alum.codigo);
				printf("\nIngrese la edad del estudiante: ");
				scanf("%d",&alum.edad);
				printf("\nIngrese el nombre del estudiante: ");
				scanf("%s",&alum.nombre);
				printf("\nIngrese la nota 1:");
				scanf("%d",&alum.nota1);
				printf("\nIngrese la nota 2:");
				scanf("%d",&alum.nota2);
				printf("\nIngrese la nota 3: ");
				scanf("%d",&alum.nota3);
				
				alum.promedio=(alum.nota1+alum.nota2+alum.nota3)/3;
				
				fprintf(archivo,"%4d",alum.codigo);
				fprintf(archivo,"%4d",alum.edad);
				fprintf(archivo,"%10s",alum.nombre);
				fprintf(archivo,"%15d",alum.nota1);
				fprintf(archivo,"%5d",alum.nota2);
				fprintf(archivo,"%5d",alum.nota3);
				fprintf(archivo,"%8.2lf",alum.promedio);
				
				do{
					
					printf("\nDesea ingresar otro estudiante? ");
					scanf("%s",resp);
					resp=toupper(resp);
					if(resp!='S'&&resp!='N')
						printf("\n Error Ingrese S o N");
						
				}while(resp!='S'&&resp!='N');
				
			}while(resp=='S');
		}
	
	
}

void crear(){
	archivo=fopen("alumnos.bin","rb");
	if(archivo!=NULL)
		printf("\nError El archivo ya existe");
	else
		{
			archivo=fopen("alumnos.bin","wb");
			printf("\nEl archivo a sido creado con exito ");
		}
	fclose(archivo);
	system("pause");
}

void menu(){
	int opc;
	printf("Programa Utilizando Archivos Binarios ");
	printf("************************************* ");
	
	do{
		system("cls");
		
		printf("\nMenu Principal");
		printf("\n**************");
		
		printf("\n[1]Crear Archivo");
		printf("\n[2]Agregar Datos al Archivo");
		printf("\n[3]Listar Datos");
		printf("\n[4]Consultar Alumnos Aprobados");
		printf("\n[5]Consultar Alumnos Reprobados");
		printf("\n[6]Salir");
		
		do{
			printf("\nElija una opcion de 1-6: ");
			scanf("%d",&opc);
			
			if(opc<1 || opc>6)
				printf("\n Error Ingrese un numero de 1-6");
			
		}while(opc<1 || opc>6);
		
		switch(opc){
			case 1:
				crear();
			break;
			case 2:
				agregar();
			break;
			case 3:
				consultar();
			break;
			case 4:
				//consultarApro();
			break;
			case 5:
				//consultarRepo();
			break;
			default:
				fclose(archivo);
				exit(0);
		}
		
	}while(opc!=6);
}

main(){
	
	menu();
	
	return 0;
	
}
