// Faça um LED piscar a cada 1 segundo

// Funções "void()" e "loop()" são padrões e obrigatórias
void setup() // Primeira função a ser executada, roda apenas uma vez
{
  pinMode(10, OUTPUT); // Indica para o arduíno que o pino 10 é uma saída
}

void loop() // Executa após o "setup()" e se mantém infinitamente
{
  digitalWrite(10, HIGH); // Liga o LED
  delay(1000); // Wait for 1000 millisecond(s)
  digitalWrite(10, LOW); // Desliga o LED
  delay(1000); // Wait for 1000 millisecond(s)
}

// Deve ser informado todos os pinos que serão utilizados na função "setup()"
// A função "loop()" é executada infinitamente, por isso é necessário um "delay()" para que o arduíno não trave
// A função "delay()" é medida em milisegundos, por isso 1000 = 1 segundo
// A função "digitalWrite()" é utilizada para ligar ou desligar um pino, HIGH = ligado e LOW = desligado
// A função "pinMode()" é utilizada para informar ao arduíno se o pino será uma entrada ou saída, INPUT = entrada e OUTPUT = saída
// A linguagem base do arduíno é o C++