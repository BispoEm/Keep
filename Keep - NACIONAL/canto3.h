
void canto3()
{


	//dar uma re
	setMultipleMotors(-50, motorA, motorB);
	wait(3500, milliseconds);
	stopAllMotors();

	//ir para frente
	setMultipleMotors(50, motorA, motorB);
	wait(300, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//baixar garra
	baixarGarra();
	stopAllMotors();
	wait(100, milliseconds);

	//virar um tiquinho para esquerda
	setMotor(motorA, -40);
	setMotor(motorB, 50);
	wait(400, milliseconds);
	stopAllMotors();

	//ir para frente
	setMultipleMotors(50, motorA, motorB);
	wait(850, milliseconds);
	stopAllMotors();


	//virar um tiquinho para direita
	setMotor(motorB, -45);
	setMotor(motorA, 50);
	wait(150, milliseconds);
	stopAllMotors();


	//ir para frente
	setMultipleMotors(50, motorA, motorB);
	wait(210, milliseconds);
	stopAllMotors();

	//ir meio torto para esquerda enquanto vai para frente
	setMotor(motorA, 45);
	setMotor(motorB, 50);
	wait(2500, milliseconds);
	stopAllMotors();

	//virar um tiquinho para direita
	setMotor(motorB, -45);
	setMotor(motorA, 50);
	wait(400, milliseconds);
	stopAllMotors();


	//ir meio torto para esquerda enquanto vai para frente
	setMotor(motorA, 45);
	setMotor(motorB, 50);
	wait(1100, milliseconds);
	stopAllMotors();


	//virar um tiquinho para direita
	setMotor(motorB, -45);
	setMotor(motorA, 50);
	wait(250, milliseconds);
	stopAllMotors();



	//ir meio torto para esquerda enquanto vai para frente
	setMotor(motorA, 45);
	setMotor(motorB, 50);
	wait(3500, milliseconds);
	stopAllMotors();


	//dar uma re
	setMultipleMotors(-50, motorA, motorB);
	wait(450, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);


	//ir para frente
	setMultipleMotors(50, motorA, motorB);
	wait(550, milliseconds);
	stopAllMotors();


	//dar uma r?
	setMultipleMotors(-50, motorA, motorB);
	wait(1900, milliseconds);
	stopAllMotors();

	//virar um tiquinho para direita
	setMotor(motorB, -35);
	setMotor(motorA, 50);
	wait(350, milliseconds);
	stopAllMotors();
	wait(200, milliseconds);


	//dar uma r?
	setMultipleMotors(-50, motorA, motorB);
	wait(900, milliseconds);
	stopAllMotors();

	//rÃÂÃÂ© com o motor b
	setMotor(motorB, -50);
	setMotor(motorA, -25);
	wait(700, milliseconds);
	stopAllMotors();

	//levanta a garra
	setMotor(motorC,60);
	moveMotor(motorC,130,degrees,60);
	stopAllMotors();
	wait(200,milliseconds);


	//baixar garra
	baixarGarra();
	stopAllMotors();
	wait(100, milliseconds);

	//levanta a garra
	setMotor(motorC,60);
	moveMotor(motorC,140,degrees,60);
	stopAllMotors();
	wait(200,milliseconds);


	//////////////////////////

	//ir para frente
	setMultipleMotors(50, motorA, motorB);
	wait(900, milliseconds);
	stopAllMotors();

	//virar um tiquinho para esquerda
	setMotor(motorA, -40);
	setMotor(motorB, 50);
	wait(500, milliseconds);
	stopAllMotors();

	//baixar garra
	baixarGarra();
	stopAllMotors();
	wait(100, milliseconds);

	//ir para frente
	setMultipleMotors(50, motorA, motorB);
	wait(900, milliseconds);
	stopAllMotors();

	//ir para tras
	setMultipleMotors(-50, motorA, motorB);
	wait(600, milliseconds);
	stopAllMotors();


	//virar um tiquinho para direita
	setMotor(motorB, -40);
	setMotor(motorA, 50);
	wait(400, milliseconds);
	stopAllMotors();

	//ir para frente torto para direita
	setMotor(motorA, 50);
	setMotor(motorB, 45);
	wait(2800, milliseconds);
	stopAllMotors();


	// ir para frente
	setMotor(motorA, 40);
	setMotor(motorB, 40);
	wait(4000, milliseconds);
	stopAllMotors();
	wait(100,milliseconds);

	///////////////



	//dar uma mini r?
	setMultipleMotors(-50, motorA, motorB);
	wait(280, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);


	// ir para frente
	setMotor(motorA, 45);
	setMotor(motorB, 25);
	wait(900, milliseconds);
	stopAllMotors();
	wait(100,milliseconds);

	//dar uma r?
	setMultipleMotors(-50, motorA, motorB);
	wait(500, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);
	//levanta a garra
	setMotor(motorC,60);
	moveMotor(motorC,100,degrees,60);
	stopAllMotors();
	wait(100,milliseconds);

	//dar uma r?
	setMultipleMotors(-50, motorA, motorB);
	wait(1400, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//////

	//virar para direita
	setMotor(motorA,50);
	setMotor(motorB, -50);
	wait(680, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);


	//ir para frente
	setMotor(motorA,50);
	setMotor(motorB,35);
	wait(500, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);


	//virar para direita
	setMotor(motorA,50);
	setMotor(motorB, -50);
	wait(600, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);


	//alinhar para tr�
	setMultipleMotors(-50, motorA, motorB);
	wait(2000, milliseconds);
	stopAllMotors();
	wait(1000000000000, milliseconds);

	/*

	//baixar garra
	baixarGarra();
	stopAllMotors();
	wait(100, milliseconds);

	//ir  para frente
	setMultipleMotors(50, motorA, motorB);
	wait(3700, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);


	//ir um pouco para tras
	setMultipleMotors(-50, motorA, motorB);
	wait(800, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//levanta a garra
	setMotor(motorC,60);
	moveMotor(motorC,100,degrees,60);
	stopAllMotors();
	wait(100,milliseconds);

	//virar para esquerda
	setMotor(motorB,50);
	setMotor(motorA,-50);
	wait(1300, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//dar uma r?
	setMultipleMotors(-50, motorA, motorB);
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
	setMultipleMotors(50, motorA, motorB);
	wait(600, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);


	//gira 45 graus
	setMotor(motorA, 50);
	setMotor(motorB, -50);
	wait(500, milliseconds);
	stopAllMotors();
	wait(600, milliseconds);

	//ir um pouco para frente
	setMultipleMotors(50, motorA, motorB);
	wait(2700, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//dar uma r?
	setMultipleMotors(-50, motorA, motorB);
	wait(800, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//gira 45 graus
	setMotor(motorA, -50);
	setMotor(motorB, 50);
	wait(480, milliseconds);
	stopAllMotors();
	wait(1000, milliseconds);


	//ir um pouco para frente
	setMultipleMotors(50, motorA, motorB);
	wait(500, milliseconds);
	stopAllMotors();
	wait(1000, milliseconds);


	//ir para frente torto
	setMotor(motorB,50);
	setMotor(motorA,40);
	wait(1000, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);


	//ir para frente (torto tambem)
	setMotor(motorA,40);
	setMotor(motorB,50);
	wait(2300, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	/////

	//dar uma r?
	setMultipleMotors(-50, motorA, motorB);
	wait(600, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//ir para frente
	setMultipleMotors(50, motorA, motorB);
	wait(950, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);



	//dar uma r?
	setMultipleMotors(-50, motorA, motorB);
	wait(1000, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//levanta a garra
	setMotor(motorC,40);
	moveMotor(motorC,120,degrees,40);
	stopAllMotors();
	wait(50,milliseconds);

	//virar para esquerda
	setMotor(motorB,50);
	setMotor(motorA,-50);
	wait(800, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);


	//frente
	setMultipleMotors(50, motorA, motorB);
	wait(500, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//virar para esquerda
	setMotor(motorB,50);
	setMotor(motorA,-50);
	wait(400, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);


	//baixar garra
	baixarGarra();
	stopAllMotors();
	wait(10, milliseconds);



	///////////


	//dar uma r?
	setMultipleMotors(-50, motorA, motorB);
	wait(1000, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//baixar garra
	baixarGarra();
	stopAllMotors();

	//ir para frente
	setMultipleMotors(50, motorA, motorB);
	wait(4500, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);


	//dar uma r?
	setMultipleMotors(-50, motorA, motorB);
	wait(1300, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//levanta a garra
	setMotor(motorC,60);
	moveMotor(motorC,100,degrees,60);
	stopAllMotors();
	wait(100,milliseconds);

	//virar para direita
	setMotor(motorB,-50);
	setMotor(motorA,50);
	wait(1300, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);

	//dar uma r?
	setMultipleMotors(-50, motorA, motorB);
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
	setMultipleMotors(50, motorA, motorB);
	wait(800, milliseconds);
	stopAllMotors();
	wait(100, milliseconds);
	*/







}
