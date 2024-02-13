// Définition du pin de la LED
const int ledPin = 2;

// Fonction pour faire clignoter une LED
void blinkTask(void *parameter) {
  pinMode(ledPin, OUTPUT); // Configure le pin de la LED en sortie

  for (;;) { // Boucle infinie
    digitalWrite(ledPin, HIGH); // Allume la LED
    delay(1000); // Attend 1 seconde
    digitalWrite(ledPin, LOW); // Éteint la LED
    delay(1000); // Attend 1 seconde
  }
}

// Fonction pour imprimer un message sur la console série
void printTask(void *parameter) {
  for (;;) { // Boucle infinie 
    Serial.println("Bonjour depuis le cœur 1 !");
    delay(2000); // Attend 2 secondes
  }
}

void setup() {
  Serial.begin(115200); // Initialise la communication série

  // Crée la tâche de clignotement sur le cœur 0
  xTaskCreatePinnedToCore(
    blinkTask,   // Fonction de la tâche
    "BlinkTask", // Nom de la tâche
    10000,       // Taille de la pile (en mots)
    NULL,        // Paramètre de la tâche
    1,           // Priorité de la tâche
    NULL,        // Handle de la tâche
    0            // Cœur ciblé
  );

  // Crée la tâche d'impression sur le cœur 1
  xTaskCreatePinnedToCore(
    printTask,   // Fonction de la tâche
    "PrintTask", // Nom de la tâche
    10000,       // Taille de la pile (en mots)
    NULL,        // Paramètre de la tâche
    1,           // Priorité de la tâche
    NULL,        // Handle de la tâche
    1            // Cœur ciblé
  );
}

void loop() {
  // Rien ici, tout est géré par les tâches FreeRTOS
}
