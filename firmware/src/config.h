#pragma once

#define PROJECT_VER "1.2"
#define PROJECT_NAME "BallClock"
#define PROJECT_URL "AlexGyver/BallClock/main/project.json"

#if defined(ESP8266)
#define LED_PIN D5
#else
#define LED_PIN (13U)
#endif
#define PHOTO_PIN 0