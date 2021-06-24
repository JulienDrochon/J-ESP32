//crétion d'un réseau wifi à partir de l'ESP32 (access point)

#include <WiFi.h>

const char* ssid = "Nom du réseau que vous voulez créer";
const char* password = "Mot de passe du réseau que vous voulez créer";

void setup()
{
  Serial.begin(115200);
  delay(1000);
  Serial.println("\n");
  
  Serial.println("Creation du point d'acces...");
  WiFi.softAP(ssid, password);
  
  Serial.print("Adresse IP: ");
  Serial.println(WiFi.softAPIP());
}

void loop()
{
  
}
