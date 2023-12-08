#include <stdlib.h>
#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
int restart;

int runtime();

int main()
{
	restart = 1;
	
	while(1)
	{
		switch(restart)
		{
			case 0:
				cout<<"\n\n	Qusieras hacer un calculo nuevo?";
				cout<<"\n		[1.] -> Si";
				cout<<"\n		[2.] -> No";
				cout<<"\n\n	Teclea el numero de opcion deseada: ";
				cin>>restart;
				break;
				
			case 1:
				system("cls");
				runtime();
				restart=0;
				break;
			case 2:
				system("cls");
				exit(0);
				break;
			default:
				break;

				
		}
	}


}


int runtime()
{
	//Proyecto final de Ingenieria Economica
	//Por: Isaac Salas Carmona
	

	cout<<"\n					Calculadora de...\n\n";
	
	cout<<"	      ::::    :::  ::::::::    :::   :::   ::::::::::: ::::    :::     :::  \n";
	cout<<"	     :+:+:   :+: :+:    :+:  :+:+: :+:+:      :+:     :+:+:   :+:   :+: :+: \n";
	cout<<"	    :+:+:+  +:+ +:+    +:+ +:+ +:+:+ +:+     +:+     :+:+:+  +:+  +:+   +:+ \n";
	cout<<"	   +#+ +:+ +#+ +#+    +:+ +#+  +:+  +#+     +#+     +#+ +:+ +#+ +#++:++#++: \n";
	cout<<"	  +#+  +#+#+# +#+    +#+ +#+       +#+     +#+     +#+  +#+#+# +#+     +#+  \n";
	cout<<"	 #+#   #+#+# #+#    #+# #+#       #+#     #+#     #+#   #+#+# #+#     #+#  \n";
	cout<<"	###    ####  ########  ###       ### ########### ###    #### ###     ###    \n";
	
	
	float SD, SaBruto, SDI, pago, FacI;
	int  Finicio, Dvac, FacConv;
	float Excedente, LimInf,LimSup, ISRCuo, ISRpor, ISRMar, ISRFULL, ISRsub, SumISR, Percep;
	const int PrimaVac=25;
	
	cout<<"\n\n	-------------------------------------------------------------------";
	cout<<"\n\n	Ingresa tu salario bruto mensual: $";
	cin>>SaBruto;
	
	cout<<"	Ingresa tu antiguedad en dias (Mas de 15): ";
	cin>>Finicio;
	
	SD= SaBruto/30.4;
	
	FacConv= Finicio*10;
	

	switch (FacConv)
	{
		//1 año o menos
		case 10 ... (3648*2)-1:
			Dvac=12;
			FacI = 1.0493;
			SDI = SD*FacI;
			break;
			
		//2 años
		case (3648*2) ... (3648*3)-1:
			Dvac=14;
			FacI =1.0507;
			SDI = SD*FacI;
			break;
		//3 años
		case (3648*3) ... (3648*4)-1:
			Dvac=16;
			FacI =1.0521;
			SDI = SD*FacI;
			break;
		//4 años
		case (3648*4) ... (3648*5)-1:
			Dvac=18;
			FacI =1.0534;
			SDI = SD*FacI;
			break;
		//5 años
		case (3648*5) ... (3648*6)-1:
			Dvac=20;
			FacI =1.0548;
			SDI = SD*FacI;
			break;
		//6 a 10 años
		case (3648*6) ... (3648*11)-1:
			Dvac=22;
			FacI =1.0562;
			SDI = SD*FacI;
			break;
		//11 a 15 años
		case (3648*11) ... (3648*16)-1:
			Dvac=24;
			FacI =1.0575;
			SDI = SD*FacI;
			break;
		//16 a 20 años
		case (3648*16) ... (3648*21)-1:
			Dvac=26;
			FacI =1.0589;
			SDI = SD*FacI;
			break;
		//21 a 25 años
		case (3648*21) ... (3648*26)-1:
			Dvac=28;
			FacI =1.0603;
			SDI = SD*FacI;
			break;
		//26 a 30 años
		case (3648*26) ... (3648*31)-1:
			Dvac=30;
			FacI =1.0616;
			SDI = SD*FacI;
			break;
		//31 a 35 años
		case (3648*31) ... (3648*36)-1:
			Dvac=31;
			FacI =1.0630;
			SDI = SD*FacI;
			break;			
	}
	
	
	
	float quincena;
	
//	if (Finicio >=15)
//	{
//		quincena = SaBruto/2;
//	}
//	else
//	{
//		quincena = ((SaBruto/2)/15)*Finicio;
//	}
		
	quincena = SaBruto/2;
	int qred = quincena*100;
	int sub = quincena*100;
	cout<<"\n";

	switch (qred)
	{
		//1
		case 1 ... 36810:
			//cout<<"ISR 1\n";
			LimInf = 0.01;
			LimSup = 368.10;
			ISRCuo = 0.00;
			ISRpor = 0.0192;
			break;
		//2	
		case 36811 ... 312435:
			//cout<<"ISR 2\n";
			LimInf = 368.11;
			LimSup = 3124.35;
			ISRCuo = 7.05;
			ISRpor = 0.0640;
			break;
		//3
		case 312436 ... 549075:
			//cout<<"ISR 3\n";
			LimInf = 3124.36;
			LimSup = 5490.75;
			ISRCuo = 183.45;
			ISRpor = 0.1088;
			break;
		//4	
		case 549076 ... 638280:
			//cout<<"ISR 4\n";
			LimInf = 5490.76;
			LimSup = 6382.80;
			ISRCuo = 441.00;
			ISRpor = 0.1600;
			break;
		//5
		case 638281 ... 764190:
			//cout<<"ISR 5\n";
			LimInf = 6382.81;
			LimSup = 7641.90;
			ISRCuo = 583.65;
			ISRpor = 0.1792;
			break;	
		//6
		case 764191 ... 1541280:
			//cout<<"ISR 6\n";
			LimInf = 7641.91;
			LimSup = 15412.80;
			ISRCuo = 809.25;
			ISRpor = 0.2136;
			break;	
		//7
		case 1541281 ... 2429265:
			//cout<<"ISR 7\n";
			LimInf = 15412.81;
			LimSup = 24292.65;
			ISRCuo = 2469.15;
			ISRpor = 0.2352;
			break;	
		//8
		case 2429266 ... 4637850:
			//cout<<"ISR 8\n";
			LimInf = 24292.66;
			LimSup = 46378.50;
			ISRCuo = 4557.75;
			ISRpor = 0.3000;
			break;	
		//9
		case 4637851 ... 6183810:
			//cout<<"ISR 9\n";
			LimInf = 46378.51;
			LimSup = 61838.10;
			ISRCuo = 11183.4;
			ISRpor = 0.3200;
			break;
		//10
		case 6183811 ... 18551431:
			//cout<<"ISR 10\n";
			LimInf = 61838.11;
			LimSup = 185514.31;
			ISRCuo = 16130.55;
			ISRpor = 0.3400;
			break;
		//11		
		default:
			//cout<<"ISR 11\n";
			LimInf = 185514.32;
			LimSup = qred;
			ISRCuo = 58180.35;
			ISRpor = 0.3500;
			break;			
	}
	
	switch (sub)
	{
		//1
		case 1 ... 87285:
			ISRsub= 200.85;
			break;
		//2
		case 87286 ... 130920:
			ISRsub= 200.70;
			break;
		//3
		case 130921 ... 171360:
			ISRsub= 200.70;
			break;
		//4	
		case 171361 ... 174570:
			ISRsub= 193.8;
			break;
		//5
		case 174571 ... 219375:
			ISRsub= 188.70;
			break;
		//6
		case 219376 ... 232755:
			ISRsub= 174.75;
			break;
		//7
		case 232756 ... 263265:
			ISRsub= 160.35;
			break;
		//8
		case 263266 ... 307140:
			ISRsub= 145.35;
			break;
		//9
		case 307141 ... 351015:
			ISRsub= 125.10;
			break;
		//10
		case 351016 ... 364260:
			ISRsub= 107.4;
			break;	
		//11
		default:
			ISRsub= 0.0;
			break;		
	}
	
	
	Excedente = quincena-LimInf;
	ISRMar = Excedente*ISRpor;
	ISRFULL = ISRCuo+ISRMar;
	SumISR = ISRFULL-ISRsub;
	
	Percep = quincena-SumISR;
	
	
	float vacaciones, prima, aguinaldo;
	
	vacaciones=SD*Dvac;
	prima=(vacaciones*PrimaVac)/100;
	if(Finicio>1)
	//aguinaldo=(SaBruto/365)*Finicio;
	pago= SD*15;
	
	cout<<"\n	-------------------------------------------------------------------\n\n";
	
	cout<<"\n"<<"	x - CALCULANDO CON: $"<<SaBruto<< " mensuales	";
	cout<<"	x - Percepcion Quincenal: $"<< fixed << setprecision(4)<<quincena<< "		";
	cout<<"	x - Factor de integracion: "<< FacI << "\n";
	cout<<"\n			x - Salario Diario: $"<<SD<<"		";
	cout<<"	x - Salario Diario Integrado (SDI): $"<<SDI<<"\n\n";
	
	cout<<"\n	-------------------------------ISR------------------------------------\n";
	
	cout<<"\n	- Limite Inferior:		$"<<LimInf<<endl;
	cout<<"	- Exedente:			$"<<Excedente<<endl;
	cout<<"	- ISR Marginal:			$"<<ISRMar<<endl;
	cout<<"	- Cuota ISR:			$"<<ISRCuo<<endl;
	
	cout<<"	- Subsidio:			$"<<ISRsub<<endl;
	
	if(ISRsub>0)
	{
	cout<<"	- ISR:				$0.0"<<endl;
	}
	else
	{
	cout<<"	- ISR:				$"<<ISRFULL<<endl;
	}
	cout<<"	- (ISR - Subsidio):		$"<<SumISR<<endl;
	cout<<"	- Sueldo Neto (Sin IMSS):	$"<<Percep<<endl;
	
	cout<<"\n	-------------------------------Vacaciones------------------------------------\n";
	



	
	
	cout<<"\n	- Dias trabajados: "<< Finicio <<"\n" ;	
	cout<<"	- Tienes derecho a "<<Dvac<<" dias de vacaciones\n";
	cout<<"	- Vacaciones (Anual): $"<<vacaciones<<"\n";
	cout<<"	- Prima vacacional (Anual) $"<<prima<<"\n";
	
		cout<<"\n	-------------------------------------------------------------------";
		cout<<"\n	-------------------------------------------------------------------";
//	cout<<"Tu aguinaldo es de: "<<aguinaldo<<"\n";
//	cout<<"Tu salario final es de: "<<pago<<"\n";
			
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



