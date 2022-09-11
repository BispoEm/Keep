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

// variaveis para facilitar a calibracao
// | - Sensor 1 - | //
     int abc1_verde_MIN = 520 ;  // - Verde minimo ||
     int abc1_verde_MAX = 620 ; // - Verde maximo ||
 int abc1_meiopreto_MIN = 720 ; // Meio Preto minimo ||
int abc1_meiopreto_MAX = 1600; // Meio Preto maximo ||
         int abc1_preto = 400 ; // Preto minimo ||

// variaveis para facilitar a calibracao
// | - Sensor 2 - | //
     int abc2_verde_MIN = 660 ; // - Verde minimo ||
     int abc2_verde_MAX = 760 ; // - Verde maximo ||
 int abc2_meiopreto_MIN = 860 ; // - Meio Preto minimo ||
int abc2_meiopreto_MAX = 2000 ; // - Meio Preto maximo ||
         int abc2_preto = 560 ; // Preto minimo ||

// variavel utilizada no noventa graus
int contador=0;
