//| AQUI SERAO ARMAZENADAS TODAS AS VARIAVEIS |//
/////////////////////////////////////////////////

// variaveis que substitui S1 - S2
int cor1,
		cor2;

// variaveis que substitui R - G - B do S1 -S2
int a1,a2,
		b1,b2,
		c1,c2;

// variaveis utilizada na soma e multiplicacao dos valores da calibracao
int abc1,
		abc2;

// variaveis para detectar beco
int verde,
		v1,
		v2;

// variveis para inserir valores
// | - Sensor 1 - | //
	int	abc1_branco = 2000; // valor branco estavel
	int abc1_verde = 750; // valor verde estavel
// | - Sensor 2 - | //
// | - Sensor 1 - | //
	int	abc2_branco = 1700; // valor branco estavel
	int abc2_verde = 500 ; // valor verde estavel

// variaveis para receber valores da calibracao
// | - Sensor 1 - | //
	int abc1_verde_MIN = (abc1_verde-50) ;  // - Verde minimo ||
	int abc1_verde_MAX = (abc1_verde+50) ; // - Verde maximo ||
	int abc1_preto = (abc1_verde_MIN-100) ; // Preto minimo ||
	int abc1_meiopreto_MIN = (abc1_verde_MAX+150) ; // Meio Preto minimo ||
	int abc1_meiopreto_MAX = (abc1_branco-80) ; // Meio Preto maximo ||

// variaveis para receber valores da calibracao
// | - Sensor 1 - | //
	int abc2_verde_MIN = (abc2_verde-50) ;  // - Verde minimo ||
	int abc2_verde_MAX = (abc2_verde+50) ; // - Verde maximo ||
	int abc2_preto = (abc2_verde_MIN-100) ; // Preto minimo ||
	int abc2_meiopreto_MIN = (abc2_verde_MAX+150) ; // Meio Preto minimo ||
	int abc2_meiopreto_MAX = (abc2_branco-80) ; // Meio Preto maximo ||

// variavel utilizada no noventa graus
	int contador=0;
