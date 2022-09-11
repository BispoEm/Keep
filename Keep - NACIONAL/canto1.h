
void canto1()
{


	//dar uma re
	setMultipleMotors(-50, motorB, motorA);
	wait(3500, milliseconds);
	stopAllMotors();

	//ir para frente
	setMultipleMotors(50, motorB, motorA);
	wait(300, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//baixar garra
	baixarGarra();
	stopAllMotors();
	wait(100, milliseconds);

	//virar um tiquinho para esquerda
	setMotor(motorB, -35);
	setMotor(motorA, 50);
	wait(400, milliseconds);
	stopAllMotors();

	//ir para frente
	setMultipleMotors(50, motorB, motorA);
	wait(850, milliseconds);
	stopAllMotors();


	//virar um tiquinho para direita
	setMotor(motorA, -45);
	setMotor(motorB, 50);
	wait(150, milliseconds);
	stopAllMotors();


	//ir para frente
	setMultipleMotors(50, motorB, motorA);
	wait(210, milliseconds);
	stopAllMotors();

	//ir meio torto para esquerda enquanto vai para frente
	setMotor(motorB, 45);
	setMotor(motorA, 50);
	wait(7000, milliseconds);
	stopAllMotors();


	//dar uma re
	setMultipleMotors(-50, motorB, motorA);
	wait(420, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//levanta a garra
	setMotor(motorC,60);
	moveMotor(motorC,100,degrees,60);
	stopAllMotors();
	wait(100,milliseconds);

	//baixar garra
	baixarGarra();

	//ir para frente
	setMultipleMotors(50, motorB, motorA);
	wait(650, milliseconds);
	stopAllMotors();


	//dar uma r?
	setMultipleMotors(-50, motorB, motorA);
	wait(650, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);
	//levanta a garra
	setMotor(motorC,60);
	moveMotor(motorC,100,degrees,60);
	stopAllMotors();
	wait(150,milliseconds);

	//baixar garra
	baixarGarra();
	stopAllMotors();
	wait(100, milliseconds);


	//virar um pouco para direita, bem pouco mesmo
	setMotor(motorB, 50);
	setMotor(motorA, -50);
	wait(950, milliseconds);
	stopAllMotors();
	wait(1000, milliseconds);

	///////////////

	//ir para frente torto para direita
	setMotor(motorB, 50);
	setMotor(motorA, 35);
	wait(2800, milliseconds);
	stopAllMotors();
	wait(1000,milliseconds);


	// ir para frente
	setMotor(motorB, 40);
	setMotor(motorA, 40);
	wait(3000, milliseconds);
	stopAllMotors();
	wait(100,milliseconds);


	//dar uma mini r?
	setMultipleMotors(-50, motorB, motorA);
	wait(280, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);


	// ir para frente
	setMotor(motorB, 45);
	setMotor(motorA, 25);
	wait(900, milliseconds);
	stopAllMotors();
	wait(100,milliseconds);

	//dar uma r?
	setMultipleMotors(-50, motorB, motorA);
	wait(500, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);
	//levanta a garra
	setMotor(motorC,60);
	moveMotor(motorC,100,degrees,60);
	stopAllMotors();
	wait(100,milliseconds);

	//dar uma r?
	setMultipleMotors(-50, motorB, motorA);
	wait(1200, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//////

	//virar para direita
	setMotor(motorB,50);
	setMotor(motorA, -50);
	wait(680, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);


	//ir para frente
	setMotor(motorB,50);
	setMotor(motorA,35);
	wait(500, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);


	//virar para direita
	setMotor(motorB,50);
	setMotor(motorA, -50);
	wait(600, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);


	//alinar para tr√??
	setMultipleMotors(-50, motorB, motorA);
	wait(2000, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//baixar garra
	baixarGarra();
	stopAllMotors();
	wait(100, milliseconds);

	//ir  para frente
	setMultipleMotors(50, motorB, motorA);
	wait(3700, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);


	//ir um pouco para tras
	setMultipleMotors(-50, motorB, motorA);
	wait(800, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//levanta a garra
	setMotor(motorC,60);
	moveMotor(motorC,100,degrees,60);
	stopAllMotors();
	wait(100,milliseconds);

	//virar para esquerda
	setMotor(motorA,50);
	setMotor(motorB,-50);
	wait(1300, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//dar uma r?
	setMultipleMotors(-50, motorB, motorA);
	wait(2400, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//levanta a garra
	setMotor(motorC,30);
	moveMotor(motorC,80,degrees,30);
	stopAllMotors();
	wait(1000,milliseconds);

	//baixar garra
	baixarGarra();

	//levanta a garra
	setMotor(motorC,40);
	moveMotor(motorC,170,degrees,40);
	stopAllMotors();
	wait(2000,milliseconds);

	//baixar garra
	baixarGarra();

	///////////////////////////////////segunda limpeza da pista///////////////////////////////////

	//ir um pouco para frente
	setMultipleMotors(50, motorB, motorA);
	wait(600, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);


	//gira 45 graus
	setMotor(motorB, 50);
	setMotor(motorA, -50);
	wait(500, milliseconds);
	stopAllMotors();
	wait(600, milliseconds);

	//ir um pouco para frente
	setMultipleMotors(50, motorB, motorA);
	wait(2700, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//dar uma r?
	setMultipleMotors(-50, motorB, motorA);
	wait(800, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//gira 45 graus
	setMotor(motorB, -50);
	setMotor(motorA, 50);
	wait(480, milliseconds);
	stopAllMotors();
	wait(1000, milliseconds);


	//ir um pouco para frente
	setMultipleMotors(50, motorB, motorA);
	wait(500, milliseconds);
	stopAllMotors();
	wait(1000, milliseconds);


	//ir para frente torto
	setMotor(motorA,50);
	setMotor(motorB,40);
	wait(1000, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);


	//ir para frente (torto tambem)
	setMotor(motorB,40);
	setMotor(motorA,50);
	wait(2300, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	/////

	//dar uma r?
	setMultipleMotors(-50, motorB, motorA);
	wait(600, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//ir para frente
	setMultipleMotors(50, motorB, motorA);
	wait(950, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);



	//dar uma r?
	setMultipleMotors(-50, motorB, motorA);
	wait(1000, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//levanta a garra
	setMotor(motorC,40);
	moveMotor(motorC,120,degrees,40);
	stopAllMotors();
	wait(50,milliseconds);

	//virar para esquerda
	setMotor(motorA,50);
	setMotor(motorB,-50);
	wait(800, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);


	//frente
	setMultipleMotors(50, motorB, motorA);
	wait(500, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//virar para esquerda
	setMotor(motorA,50);
	setMotor(motorB,-50);
	wait(400, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);


	//baixar garra
	baixarGarra();
	stopAllMotors();
	wait(10, milliseconds);



	///////////


	//dar uma r?
	setMultipleMotors(-50, motorB, motorA);
	wait(850, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//baixar garra
	baixarGarra();
	stopAllMotors();

	//ir para frente
	setMultipleMotors(50, motorB, motorA);
	wait(4500, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);


	//dar uma r?
	setMultipleMotors(-50, motorB, motorA);
	wait(1300, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//levanta a garra
	setMotor(motorC,60);
	moveMotor(motorC,100,degrees,60);
	stopAllMotors();
	wait(100,milliseconds);

	//virar para direita
	setMotor(motorA,-50);
	setMotor(motorB,50);
	wait(1300, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//dar uma r?
	setMultipleMotors(-50, motorB, motorA);
	wait(3000, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);


	//levanta a garra
	setMotor(motorC,40);
	moveMotor(motorC,120,degrees,40);
	stopMotor(motorC);
	stopAllMotors();
	wait(200, milliseconds);



	//ir para frente
	setMultipleMotors(50, motorB, motorA);
	wait(800, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);










}
