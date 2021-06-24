//Connexion à un réseau wifi existant

#include <WiFi.h>

const char* ssid = "Nom du réseau auquel vous voulez vous connecter";
const char* password = "Mot de passe du réseau auquel vous voulez vous connecter";

void setup()
{
  Serial.begin(115200);
  delay(1000);
  Serial.println("\n");
  
  WiFi.begin(ssid, password);
  Serial.print("Tentative de connexion...");
  
  while(WiFi.status() != WL_CONNECTED)
  {
    Serial.print(".");
    delay(100);
  }
  
  Serial.println("\n");
  Serial.println("Connexion etablie!");
  Serial.print("Adresse IP: ");
  Serial.println(WiFi.localIP());
}

void loop()
{
  
}
