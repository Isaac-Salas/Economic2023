#include <stdlib.h>
#include <iostream>

using namespace std;

int main(){
	
	cout<<"Proyecto Final Ingenieria Economica\n";
	cout<<"Carmen Judith GUzman Cortez\n";
	cout<<"Bienvenido a la calculadora de nominas\n";
	
	float SD, SaBruto, SDI, pago, FacI;
	int  Finicio, PrimaVac,Dvac;
	PrimaVac=25;
	
	
	
	cout<<"Ingresa tu salario bruto mensual: ";
	cin>>SaBruto;
	
	cout<<"Ingresa tu antiguedad en dias: ";
	cin>>Finicio;


	switch (Finicio)
	{
		//1 año o menos
		case 1 ... (365*2)-1:
			Dvac=12;
			FacI = 1.0493;
			SDI = SD*FacI;
			break;
			
		//2 años
		case (365*2) ... (365*3)-1:
			Dvac=14;
			FacI =1.0507;
			SDI = SD*FacI;
			break;
		//3 años
		case (365*3) ... (365*4)-1:
			Dvac=16;
			FacI =1.0521;
			SDI = SD*FacI;
			break;
		//4 años
		case (365*4) ... (365*5)-1:
			Dvac=18;
			FacI =1.0534;
			SDI = SD*FacI;
			break;
		//5 años
		case (365*5) ... (365*6)-1:
			Dvac=20;
			FacI =1.0548;
			SDI = SD*FacI;
			break;
		//6 a 10 años
		case (365*6) ... (365*11)-1:
			Dvac=22;
			FacI =1.0562;
			SDI = SD*FacI;
			break;
		//11 a 15 años
		case (365*11) ... (365*16)-1:
			Dvac=24;
			FacI =1.0575;
			SDI = SD*FacI;
			break;
			
	}
	
	
	float vacaciones, prima, aguinaldo;
	SD= SaBruto/30.4;
	vacaciones=SD*Dvac;
	prima=(vacaciones*PrimaVac)/100;
	if(Finicio>1)
	aguinaldo=SD*15;
	pago= SD*15;
	
	

	cout<<"Tienes derecho a "<<Dvac<<" dias de vacaciones\n\n";
	cout<<"Factor de integracion: "<<FacI<<"\n\n";
	
	cout<<"Tu salario diario es de: "<<SD<<"\n";
	cout<<"Tus vacaciones son de: "<<vacaciones<<"\n";
	cout<<"Tu prima vacacional es de: "<<prima<<"\n";
	cout<<"Tu aguinaldo es de: "<<aguinaldo<<"\n";
	cout<<"Tu salario final es de: "<<pago<<"\n";
			
	/*Tabla de SDI							Tablas de ISR
	Menos de un aÃ±o =1.0493					368.11	3,124.35	7.05	6.40
	2 aÃ±os = 1.0507							3,124.36	5,490.75	183.45	10.88
	3 aÃ±os = 1.0521							5,490.76	6,382.80	441.00	16.00
	4 aÃ±os = 1.0534							6,382.81	7,641.90	583.65	17.92
	5 aÃ±os = 1.0548							7,641.91	15,412.80	809.25	21.36
	6-10   = 1.0562							15,412.81	24,292.65	2,469.15	23.52
	11- 15 = 1.0575							24,292.66	46,378.50	4,557.75	30.00
	16-20  = 1.0589							46,378.51	61,838.10	11,183.40	32.00
	21-25  = 1.0603							61,838.11	185,514.31	16,130.55	34.00
	26- 30 = 1.0616							185,514.31	En adelante	58,180.35	35.00
	31-35  = 1.0630									
	*/
	return 0;
}
