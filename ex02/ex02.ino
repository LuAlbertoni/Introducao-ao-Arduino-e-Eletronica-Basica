// Faça um programa que acenda os LEDs vermelho, amarelo e verde, nesta ordem, por 1 segundo cada um e depois apague-os na mesma ordem, também por 1 segundo cada um

// Definindo variáveis para facilitar a leitura do código
int LED_VERDE = 8, LED_AMARELO = 7, LED_VERMELHO = 6;

void setup()
{
  // Preparação dos modos dos pinos
  pinMode(LED_VERMELHO, OUTPUT);
  pinMode(LED_AMARELO, OUTPUT);
  pinMode(LED_VERDE, OUTPUT);
  
  // Inicialização dos pinos desligados
  digitalWrite(LED_VERDE, LOW);
  digitalWrite(LED_AMARELO, LOW);
  digitalWrite(LED_VERMELHO, LOW);
}

void loop()
{
  digitalWrite(LED_VERMELHO, HIGH);
  delay(1000);
  digitalWrite(LED_AMARELO, HIGH);
  delay(1000);
  digitalWrite(LED_VERDE, HIGH);
  delay(1000);
  digitalWrite(LED_VERMELHO, LOW);
  delay(1000);
  digitalWrite(LED_AMARELO, LOW);
  delay(1000);
  digitalWrite(LED_VERDE, LOW);
  delay(1000);
}