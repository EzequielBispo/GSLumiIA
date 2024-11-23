#include <ThingerESP32.h>

#define USERNAME "ezequielfeio123456"
#define DEVICE_ID "SENSOR"
#define DEVICE_CREDENTIAL "A8xKhI-OVSSsnY5j"

#define SSID "Wokwi-GUEST"
#define SSID_PASSWORD ""

ThingerESP32 thing(USERNAME, DEVICE_ID, DEVICE_CREDENTIAL);

double IInterna;
double IExterna;
double ILampada;

int LDRPin1 = 34; 
int LDRPin2 = 35;

void setup() {
  Serial.begin(115200);
  thing.add_wifi(SSID, SSID_PASSWORD);

  thing["IInterna"] >> outputValue(IInterna);
  thing["IExterna"] >> outputValue(IExterna);
  
  pinMode(LDRPin1, INPUT);
  pinMode(LDRPin2, INPUT);
}

void loop() {
  IInterna = analogRead(LDRPin1); 
  IExterna = analogRead(LDRPin2);

  if (IExterna > IInterna) {
    ILampada = IInterna / IExterna * 100;
  } else {
    ILampada = 0;
  }

  thing["ILampada"] >> outputValue(ILampada);

  thing.handle();
  
  delay(1000);
}
