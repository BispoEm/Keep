//*******************************
//** codigo do seguidor de linha na rampa
//*******************************

void segrampa()
{
	// SE BRANCO FRENTE
	if (cor1==1 && cor2==1 ){
		setMultipleMotors(50,motorA,motorB);
		}

	// SE MEIO PRETO OU PRETO ESQUERDA
	if (cor1!=1){
		setMotor(motorA,20);
		setMotor(motorB,60);
	}

	// SE MEIO PRETO OU PRETO DIREITA
	if (cor2!=1){
		setMotor(motorA,60);
		setMotor(motorB,20);
	}
	if(Dist_Lateral() > 7){
		// evs - 12/09/2022 - removi ( stoptask(obterCor) )
		sleep(200);
		stopAllMotors();
		wait(500,milliseconds);
		sala3();
	} // if S4 > 10 sair condicao //

} // void segurampa


//*******************************
//** codigo que detecta a rampa
//*******************************

void rampa(){
if (Dist_Lateral()<8){
		playSound(soundUpwardTones);
		wait(1,milliseconds);

		//RAMPA//
		stopAllMotors();
		setMultipleMotors(60,motorA,motorB);
		wait(600,milliseconds);

		stopAllMotors();
		wait(800,milliseconds);

		if (Dist_Lateral()<8){
			playSound(soundFastUpwardTones);
			while(true){
				segrampa();
			} // while (true) //
		} // if S4 <= 5 entrar condicao //
		else{
			setMultipleMotors(-80,motorA,motorB);
			wait(400,milliseconds);
		} // else //
	} // if rampa
} // void rampa /
