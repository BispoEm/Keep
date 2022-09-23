#include<noventa.h>
#include<verde.h>
#include<beco.h>
#include <sala3.h>
#include <rampa.h>
#include <obstaculo.h>
#include <redutor.h>

void seguelinha()
{
	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	// BRANCO FRENTE
	if(cor1==1 && cor2==1){
		setMultipleMotors(25,motorA,motorB);
	}

	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	// MEIO PRETO ESQUERDA
	if(cor1==3){
		setMotor(motorA,-30);
		wait(0.1,milliseconds);
		sleep(50);
		if( cor1==3 ){
			setMultipleMotors(25,motorA,motorB);
			wait(100,milliseconds);
		}
	}

	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	// MEIO PRETO DIREITA
	if(cor2==3){
		setMotor(motorB,-30);
		wait(0.1,milliseconds);
		sleep(500);
		if( cor2==3 ){
			setMultipleMotors(25,motorA,motorB);
			wait(100,milliseconds);
		}
	}

	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	// PRETO FRENTE
	if(cor1==2 && cor2==2){
		stopAllMotors(); wait(50,milliseconds);
		setMultipleMotors(25,motorA,motorB);
		wait(500,milliseconds);
		// MEIO PRETO ESQUERDA
		if(cor1!=1){
			meiopreto_esq();
		}
		// MEIO PRETO DIREITA
		if(cor2!=1){
			meiopreto_dir();
		}
		sleep(200);
		stopAllMotors(); wait(250,milliseconds);
	}


	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	// PRETO ESQUERDA
	if(cor1==2){
		stopAllMotors();  wait(100,milliseconds);
		setMultipleMotors(30,motorA,motorB);
		wait(90,milliseconds);
		stopAllMotors(); 	wait(200,milliseconds);
		sleep(200);
		stopAllMotors(); 	wait(200,milliseconds);

		if(cor1==2 && cor2==2){
			stopAllMotors();  wait(50,milliseconds);
			setMultipleMotors(25,motorA,motorB);
			wait(500,milliseconds);
			stopAllMotors(); 	wait(200,milliseconds);

		}
		else{
			noventaesquerda();
		}
	}


	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	// PRETO DIREITA
	if(cor2==2){
		stopAllMotors();  wait(100,milliseconds);
		setMultipleMotors(30,motorA,motorB);
		wait(90,milliseconds);
		stopAllMotors(); 	wait(200,milliseconds);
		sleep(200);
		stopAllMotors(); 	wait(200,milliseconds);

		if(cor1==2 && cor2==2){
			stopAllMotors();  wait(50,milliseconds);
			setMultipleMotors(25,motorA,motorB);
			wait(500,milliseconds);
			stopAllMotors(); 	wait(200,milliseconds);

		}
		else{
			noventadireita();
		}
	}

	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	// VERDE ESQUERDA
	if(cor1==4){
		stopAllMotors();  wait(100,milliseconds);
		setMultipleMotors(30,motorA,motorB);
		wait(120,milliseconds);
		stopAllMotors(); 	wait(200,milliseconds);
		sleep(100);
		stopAllMotors(); 	wait(200,milliseconds);

		// SE NOVENTA
		if(cor1==2){
			noventaesquerda();
		}//SE BECO
		else if(cor1==4 && cor2==4){
			beco();
		}
		else if(cor1==2 && cor2==2){
			stopAllMotors(); wait(50,milliseconds);
			setMultipleMotors(22,motorA,motorB);
			wait(400,milliseconds);
		}// SE NAO FAZER VERDE ESQUERDA
		else{
			stopAllMotors(); 	wait(300,milliseconds);
			sleep(100);
			stopAllMotors(); 	wait(200,milliseconds);
			if(cor1==2){
				noventaesquerda();
			}//SE BECO
			else{
				detverde();
				if(cor1==4 && cor2==4 || v1==1 && v2==1){
					beco();
				}
				else{
					verdeesquerda();
				}
			}
		}
	}

	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	// VERDE DIREITA
	if(cor2==4){
		stopAllMotors();  wait(100,milliseconds);
		setMultipleMotors(30,motorA,motorB);
		wait(120,milliseconds);
		stopAllMotors(); 	wait(200,milliseconds);
		sleep(100);
		stopAllMotors(); 	wait(200,milliseconds);

		// SE NOVENTA
		if(cor2==2){
			noventadireita();
		}//SE BECO
		else if(cor1==4 && cor2==4){
			beco();
		}
		else if(cor1==2 && cor2==2){
			stopAllMotors(); wait(50,milliseconds);
			setMultipleMotors(22,motorA,motorB);
			wait(400,milliseconds);
		}// SE NAO FAZER VERDE ESQUERDA
		else{
			stopAllMotors(); 	wait(300,milliseconds);
			sleep(100);
			stopAllMotors(); 	wait(200,milliseconds);
			if(cor1==2){
				noventaesquerda();
			}//SE BECO
			else{
				detverde();
				if(cor1==4 && cor2==4 || v1==1 && v2==1){
					beco();
				}
				else{
					verdedireita();
				}
			}
		}
	}

	// ebs coloquei condiÃÂ§ÃÂ£
	// abri um .h apenas para ele
	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	// REDUTOR
	if( cor3() == 0){
		redutor();
	}
/*
	if (Dist_LateralEsq()>5 && Dist_LateralEsq()<5){
		rampa();
	}
*/
/*
	if (Dist_Frente()>5 && Dist_Frente()<5){
		obstaculo();
	}
*/
}// void
