//Programa: Robô Coletor de Lixo
//Autor: Camila Nunes, Iuri Tavares, Ulisses Chaves e Yasmin Nascimento
//Versão: 1.0

//Biblioteca do motor shield
#include <AFMotor.h>

//Criação dos objetos
AF_DCMotor motor1(1);
AF_DCMotor motor2(2);
AF_DCMotor motor3(3);
AF_DCMotor motor4(4);

//Configuração da velocidade dos motores
void setup() {
  motor1.setSpeed(150);
  motor2.setSpeed(150);
  motor3.setSpeed(150);
  motor4.setSpeed(150);
}

//Como estamos sem sensores, ele irá apenas realizar 
//movimentos circulares para coletar o lixo espalhado
void loop() {
  procuraLixo();
  delay(2000);
}

void frente() {
  motor1.run(FORWARD); //Motor traseiro esquerdo
  motor2.run(FORWARD); //Motor dianteiro esquerdo
  motor3.run(FORWARD); //Motor dianteiro direito
  motor4.run(FORWARD); //Motor traseiro direito
  delay(1000);
  motor1.run(FORWARD); //Motor traseiro esquerdo
  motor2.run(FORWARD); //Motor dianteiro esquerdo
  motor3.run(FORWARD); //Motor dianteiro direito
  motor4.run(FORWARD); //Motor traseiro direito
}

void esquerda() {
  motor1.run(FORWARD); //Motor traseiro esquerdo
  motor2.run(FORWARD); //Motor dianteiro esquerdo
  motor3.run(BACKWARD); //Motor dianteiro direito
  motor4.run(BACKWARD); //Motor traseiro direito
}

void procuraLixo() {
  frente();
  delay(1500);
  esquerda();
}