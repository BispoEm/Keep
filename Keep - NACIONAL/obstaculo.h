
void obstaculo(){


	// ebs - renomeei as variaveis que estava dando erro

	if( Dist_Frente()>1 && Dist_Frente()<5){

		// TOCAR LOW BUZZ
		playSound(soundLowBuzz);wait(1,milliseconds);

		// IDA PARA TRAS
		while(Dist_Frente()<4){
			setMultipleMotors(-30,motorA,motorB);
		}
		//STOP OBRIGATORIO
		stopAllMotors();wait(20,milliseconds);

		// PRIMEIRA VIRADA
		while(Dist_LateralEsq() >=20){
			setMotor(motorA,30);
			setMotor(motorB,-30);
		}

		//STOP OBRIGATORIO1
		stopAllMotors();wait(100,milliseconds);

		// PRIMEIRA VIRADA
		while(Dist_LateralEsq() <=20){
			setMotor(motorA,30);
			setMotor(motorB,-30);
		}

		// PRIMEIRA VIRADA CORRECAO A MAIS
		setMotor(motorA,-30);
		setMotor(motorB,30);
		wait(300,milliseconds);

		//STOP OBRIGATORIO
		stopAllMotors();wait(20,milliseconds);

		// PRIMEIRA IDA PRA FRENTE
		setMotor(motorA,40);
		moveMotor(motorB,600,degrees,40);

		//STOP OBRIGATORIO
		stopAllMotors();wait(20,milliseconds);

		// SEGUNDA VIRADA(SENSOR)
		while ( Dist_LateralEsq() >30 ){
			setMotor(motorA,-20);
			setMotor(motorB, 20);
		}

		//STOP OBRIGATORIO
		stopAllMotors();wait(100,milliseconds);

		// SEGUNDA VIRADA(SENSOR)
		while ( Dist_LateralEsq() <30 ){
			setMotor(motorA,-30);
			setMotor(motorB,30);
		}

		//STOP OBRIGATORIO
		stopAllMotors();wait(100,milliseconds);

		// SEGUNDA VIRADA CORRECAO A MAIS(PRE-DEFINIDO)
		setMotor(motorA, -30);
		setMotor(motorB, 30);
		wait(280,milliseconds);
		stopAllMotors();
		wait(150,milliseconds);

		//STOP OBRIGATORIO
		stopAllMotors();wait(100,milliseconds);

		while ( Dist_LateralEsq() > 30 ){
			setMultipleMotors( 30,motorA,motorB);
		}
		stopAllMotors(); wait(100,milliseconds);

		while ( Dist_LateralEsq() < 30 ){
			setMultipleMotors( 30,motorA,motorB);
		}

		//ir pra frente
		setMultipleMotors( 40,motorA,motorB);
		wait ( 1400, milliseconds );
		stopAllMotors(); wait(20,milliseconds);

		//virar pra esquerda
		while ( Dist_LateralEsq() > 30 ){
			setMotor(motorA, -30);
			setMotor(motorB, 30);
		}
		stopAllMotors(); wait(100,milliseconds);

		while ( Dist_LateralEsq() < 30 ){
			setMotor(motorA, -30);
			setMotor(motorB, 30);

		}
		stopAllMotors(); wait(100,milliseconds);


		while ( Dist_LateralEsq() > 30 ){
			setMultipleMotors( 30,motorA,motorB);
		}

		stopAllMotors(); wait(100,milliseconds);

		while ( Dist_LateralEsq() < 30 ){
			setMultipleMotors( 30,motorA,motorB);
		}

		stopAllMotors(); wait(100,milliseconds);

		setMultipleMotors( 30,motorA,motorB);
		wait(320,milliseconds);

		stopAllMotors(); wait(100,milliseconds);

		setMotor(motorA, 30);
		setMotor(motorB,-30);
		wait(1600,milliseconds);

		stopAllMotors(); wait(100,milliseconds);

		setMultipleMotors( -30,motorA,motorB);
		wait(450,milliseconds);

		stopAllMotors();	wait(200,milliseconds);

		contador=0;

		while(cor1==1 && contador<=15){
			contador++;
			setMotor(motorA,-30);
			setMotor(motorB, 30);
			wait(50,milliseconds);
		}

		stopAllMotors();	wait(200,milliseconds);
		contador=0;

		while( cor1!=2){
			setMotor(motorA, 35);
			setMotor(motorB,-35);
			contador++;
		}

		stopAllMotors();	wait(200,milliseconds);

		setMotor(motorA,-30);
		setMotor(motorB, 30);
		wait(300,milliseconds);

		stopAllMotors();	wait(200,milliseconds);

	} // IF OBSTACULO
} // VOID OBSTACULO
