
#include <canto1.h>;
#include <canto2.h>;
#include <canto3.h>;



void sala3(){
	//ir para frente
	setMultipleMotors(50, motorA, motorB);
	wait(300, milliseconds);
	stopAllMotors();
	wait(500,milliseconds);


	//ir para frente meio torto
	setMotor(motorA, 25);
	setMotor(motorB, 60);
	wait(1000,milliseconds);
	stopAllMotors();
	wait(500,milliseconds);

	//gira 90 graus pra esquerda
	setMotor(motorA, -50);
	setMotor(motorB, 50);
	delay(900);
	stopAllMotors();

	//alinha na parede
	setMultipleMotors(-50, motorA, motorB);
	wait(1500, milliseconds);
	stopAllMotors();

	//ir para frente
	setMultipleMotors(50, motorA, motorB);
	wait(300, milliseconds);
	stopAllMotors();
	wait(1000,milliseconds);


	baixarGarra();

	//levantar garra
	setMotor(motorC,25);
	moveMotor(motorC,120,degrees,25);
	stopAllMotors();
	wait(900, milliseconds);

	//ir para frente
	setMultipleMotors(50, motorA, motorB);
	wait(2500, milliseconds);
	stopAllMotors();
	wait(1500,milliseconds);



	//////////////////////////////////////////////////////////verificar a distancia no canto 3/////////////////////////////////////////////////////////////////////////
	displayCenteredBigTextLine(5,"dist3 %d",Dist_Frente());
	wait(55, milliseconds);
	if (Dist_Frente() >= 25 ){ //triangulo esta no canto 3
		setLEDColor(ledOrangePulse);
		playSound(soundBeepBeep);
		canto3();
	}//fim triangulo esta no canto 3

	////////////////////////////////////////////////////////////triangulo nao esta no canto 3////////////////////////////////////////////////////////////////////////////

	else{//triangulo nao esta no canto 3


		//alinhamento na parede
		setMultipleMotors(-50, motorA, motorB);
		wait(3500, milliseconds);
		stopAllMotors();
		wait(850, milliseconds);

		//vai pra frente um pouquinho
		setMultipleMotors(50, motorA, motorB);
		wait(200, milliseconds);
		stopAllMotors();

		//gira 90 graus//
		setMotor(motorA, 50);
		setMotor(motorB, -50);
		delay(1100);
		stopAllMotors();
		baixarGarra();


			//levantar garra
	setMotor(motorC,25);
	moveMotor(motorC,120,degrees,25);
	stopAllMotors();
	wait(900, milliseconds);


		//ir para frente
	setMultipleMotors(50, motorA, motorB);
	wait(2500, milliseconds);
	stopAllMotors();
	wait(150,milliseconds);


		///////////////////////////////////////////////////////////verificar a distancia no canto 1//////////////////////////////////////////////////////////////////////////
		displayCenteredBigTextLine(5,"dist3 %d",Dist_Frente());
		if (Dist_Frente() >= 29999){//triangulo esta no canto 1//
			setLEDColor(ledOrangePulse);
			playSound(soundBeepBeep);

			//codigo canto1
			canto1();

		}//fim triangulo esta no canto 1//
		else{//triangulo esta no canto 2//
			playSound(soundDownwardTones);
			playSound(soundBeepBeep);
			//codigo canto2
			canto2();

		}//fim triangulo esta no canto 2
	}//fim triangulo nao esta no canto 3


}//fim
