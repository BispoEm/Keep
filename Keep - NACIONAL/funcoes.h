//| AQUI SERAO ARMAZENADAS TODAS AS VARIAVEIS |//
/////////////////////////////////////////////////

// funcoes para sensores
int Dist_Frente() {
	return SensorValue(S3);
}
int	Dist_Lateral() {
	return SensorValue(S4);
}
int cor3() {
	return getColorName(S3);
}

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
	setMotor(motorA,-25);
	setMotor(motorB, 25);
	wait(20,milliseconds);
}

// funcao do meio preto direita
void meiopreto_dir(){
	setMotor(motorA, 25);
	setMotor(motorB,-25);
	wait(20,milliseconds);
}
