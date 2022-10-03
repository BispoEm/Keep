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
		setMultipleMotors(20,motorA,motorB);
	}

	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	// MEIO PRETO ESQUERDA
	if(cor1==3){
		meiopreto_esq();
	}

	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	// MEIO PRETO DIREITA
	if(cor2==3){
		meiopreto_dir();
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
		stopAllMotors();  wait(500,milliseconds);
		sleep(200);
		stopAllMotors(); 	wait(200,milliseconds);

		if(cor1==2 && cor2==2){
			stopAllMotors();  wait(50,milliseconds);
			setMultipleMotors(25,motorA,motorB);
			wait(400,milliseconds);
			stopAllMotors(); 	wait(200,milliseconds);
		}
		else{
			noventaesquerda();
		}
	}


	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	// PRETO DIREITA
	if(cor2==2){
		stopAllMotors();  wait(500,milliseconds);
		sleep(200);
		stopAllMotors(); 	wait(200,milliseconds);

		if(cor1==2 && cor2==2){
			stopAllMotors();  wait(50,milliseconds);
			setMultipleMotors(25,motorA,motorB);
			wait(400,milliseconds);
			stopAllMotors(); 	wait(200,milliseconds);
		}
		else{
			noventadireita();
		}
	}

	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	// VERDE ESQUERDA
	if(cor1==4){
		stopAllMotors();  wait(500,milliseconds);
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
			setMultipleMotors(25,motorA,motorB);
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
		stopAllMotors();  wait(500,milliseconds);
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
			setMultipleMotors(25,motorA,motorB);
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

	// ebs coloquei condiÃÂÃÂ
	// abri um .h apenas para ele
	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	// REDUTOR
	if( red==1){
		redutor();
	}
	/*
	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	// RAMPA
	if (Dist_LateralEsq()>0 && Dist_LateralEsq()<8 && Dist_LateralDir()>0 && Dist_LateralDir()<8){
		rampa();
	}

	/////////////////////////////////////////////////////////////////////////////////////////////////////////
	// OBSTACULO
	if (Dist_Frente()>0 && Dist_Frente()<7){
		obstaculo();
	}
	*/
}// void
