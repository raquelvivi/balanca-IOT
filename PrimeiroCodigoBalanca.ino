#include "HX711.h"

const int HX_DT = 18;
const int HX_SCK = 19;

HX711 balanca;

float calibration_factor = 20865.00;
float peso;

void setup() {

  Serial.begin(115200);

  balanca.begin(HX_DT, HX_SCK);

  Serial.println("Remova todos os pesos da balanca");
  delay(3000);

  balanca.set_scale();
  balanca.tare();

  Serial.println("Balanca zerada!");
  Serial.println("Coloque um peso conhecido.");
  Serial.println("Use + para aumentar o fator.");
  Serial.println("Use - para diminuir o fator.");
}

void loop() {

  balanca.set_scale(calibration_factor);

  peso = balanca.get_units(10);

  Serial.println(peso, 3);

  delay(500);

  if (Serial.available()) {

    char temp = Serial.read();

    if (temp == '+') {
      calibration_factor += 1;
    }

    else if (temp == '-') {
      calibration_factor -= 1;
    }
  }
}