#define LEDC_CHANNEL_0     0
#define LEDC_TIMER_13_BIT  13
#define LEDC_BASE_FREQ     5000
#define LED_PIN            2  // Le pin GPIO où la LED est connectée

void setup() {
  // Configuration du canal PWM
  ledcSetup(LEDC_CHANNEL_0, LEDC_BASE_FREQ, LEDC_TIMER_13_BIT);
  // Attachement du canal PWM au pin GPIO de la LED
  ledcAttachPin(LED_PIN, LEDC_CHANNEL_0);
}

void loop() {
  // Augmenter la luminosité de la LED
  for (int dutyCycle = 0; dutyCycle <= 8191; dutyCycle++) {
    // Mise à jour du cycle de travail du PWM
    ledcWrite(LEDC_CHANNEL_0, dutyCycle);
    delay(1);
  }

  // Diminuer la luminosité de la LED
  for (int dutyCycle = 8191; dutyCycle >= 0; dutyCycle--) {
    // Mise à jour du cycle de travail du PWM
    ledcWrite(LEDC_CHANNEL_0, dutyCycle);
    delay(1);
  }
}