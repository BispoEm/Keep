//| AQUI SERAO ARMAZENADAS TODAS AS VARIAVEIS |//
/////////////////////////////////////////////////

// funcao para abaixar a garra
void baixarGarra(){
	stopMotor(motorC);
	wait(700,milliseconds);
	setMotor(motorC, -13);
	delay(1500);
	stopMotor(motorC);
	wait(700,milliseconds);
}


// funcao do meio preto esquerda
void meiopreto_esq(){
	setMotor(motorA,-30);
	setMotor(motorB, 30);
	wait(50,milliseconds);
}

// funcao do meio preto direita
void meiopreto_dir(){
	setMotor(motorA, 30);
	setMotor(motorB,-30);
	wait(50,milliseconds);
}


int Dist_Frente() {
	return SensorValue(S3);

}
int	Dist_Lateral() {
	return SensorValue(S4);
}
