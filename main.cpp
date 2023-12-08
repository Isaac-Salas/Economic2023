#include <stdlib.h>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(){
	
	cout<<"Proyecto Final Ingenieria Economica\n";
//	cout<<"Carmen Judith GUzman Cortez\n";
//	cout<<"Bienvenido a la calculadora de nominas\n";
	
	float SD, SaBruto, SDI, pago, FacI;
	int  Finicio, Dvac;
	float Excedente, LimInf,LimSup, ISRCuo, ISRpor, ISRMar, ISRFULL;
	const int PrimaVac=25;
	
	
	cout<<"Ingresa tu salario bruto mensual: $";
	cin>>SaBruto;
	
	cout<<"Ingresa tu antiguedad en dias: ";
	cin>>Finicio;
	
	SD= SaBruto/30.4;
	

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
		//16 a 20 años
		case (365*16) ... (365*21)-1:
			Dvac=26;
			FacI =1.0589;
			SDI = SD*FacI;
			break;
		//21 a 25 años
		case (365*21) ... (365*26)-1:
			Dvac=28;
			FacI =1.0603;
			SDI = SD*FacI;
			break;
		//26 a 30 años
		case (365*26) ... (365*31)-1:
			Dvac=30;
			FacI =1.0616;
			SDI = SD*FacI;
			break;
		//31 a 35 años
		case (365*31) ... (365*36)-1:
			Dvac=31;
			FacI =1.0630;
			SDI = SD*FacI;
			break;
				
	}
	
	
	
	float quincena;
	quincena = SaBruto/2;
	
	int qred = trunc(quincena)*100;

	switch (qred)
	{
		//1
		case 1 ... 36810:
			cout<<"ISR 1\n";
			LimInf = 0.01;
			LimSup = 368.10;
			ISRCuo = 0.00;
			ISRpor = 0.0192;
			break;
		//2	
		case 36811 ... 312435:
			cout<<"ISR 2\n";
			LimInf = 368.11;
			LimSup = 3124.35;
			ISRCuo = 7.05;
			ISRpor = 0.0640;
			break;
		//3
		case 312436 ... 549075:
			cout<<"ISR 2\n";
			LimInf = 3124.36;
			LimSup = 5490.75;
			ISRCuo = 183.45;
			ISRpor = 0.1088;
			break;
		//4	
		case 549076 ... 638280:
			cout<<"ISR 2\n";
			LimInf = 5490.76;
			LimSup = 6382.80;
			ISRCuo = 441.00;
			ISRpor = 0.1600;
			break;
		//5
		case 549076 ... 638280:
			cout<<"ISR 2\n";
			LimInf = 6382.81;
			LimSup = 7641.90;
			ISRCuo = 441.00;
			ISRpor = 0.1600;
			break;	
	}
	
	
	Excedente = quincena-LimInf;
	ISRMar = Excedente*ISRpor;
	ISRFULL = ISRCuo+ISRMar;
	
	cout<<ISRFULL<<endl;
	
	
	float vacaciones, prima, aguinaldo;
	
	vacaciones=SD*Dvac;
	prima=(vacaciones*PrimaVac)/100;
	if(Finicio>1)
	aguinaldo=(SaBruto/365)*Finicio;
	pago= SD*15;

	
	cout<<"\n\n"<<"-CALCULANDO CON: $"<<SaBruto<< " mensuales	";
	cout<<"-Percepcion Quincenal: "<< fixed << setprecision(4)<<quincena<< "	";
	cout<<"-Factor de integracion: "<< FacI << "\n\n";
	

	cout<<"\nSalario Diario: "<<SD<<"\n";
	cout<<"Salario Diario Integrado (SDI): "<<SDI<<"\n";
	
	
	cout<<"\nDias trabajados: "<< Finicio <<"\n" ;	
	cout<<"Tienes derecho a "<<Dvac<<" dias de vacaciones\n";
	cout<<"Vacaciones (Anual): "<<vacaciones<<"\n";
	cout<<"Prima vacacional (Anual) "<<prima<<"\n";
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
