/*********
  Rui Santos
  Complete project details at https://randomnerdtutorials.com  
*********/

// Load Wi-Fi library
#include <WiFi.h>

// Replace with your network credentials
const char* ssid     = "ESP32-Access-Point";
const char* password = "123456789";

// Set web server port number to 80
// WiFiServer server(80);

// // Variable to store the HTTP request
// String header;

// // Auxiliar variables to store the current output state
// String output26State = "off";
// String output27State = "off";

// // Assign output variables to GPIO pins
// const int output26 = 26;
// const int output27 = 27;

void setup() {
  Serial.begin(115200);
  // Initialize the output variables as outputs
  // pinMode(output26, OUTPUT);
  // pinMode(output27, OUTPUT);
  // // Set outputs to LOW
  // digitalWrite(output26, LOW);
  // digitalWrite(output27, LOW);

  // Connect to Wi-Fi network with SSID and password
  Serial.print("Setting AP (Access Point)…");
  // Remove the password parameter, if you want the AP (Access Point) to be open
  WiFi.softAP(ssid, password);

  IPAddress IP = WiFi.softAPIP();
  Serial.print("AP IP address: ");
  Serial.println(IP);
  
  //server.begin();
}

void loop(){

}
