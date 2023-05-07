#ifndef TELEGRAM_BOT
#define TELEGRAM_BOT

#include <UniversalTelegramBot.h>   // Universal Telegram Bot Library written by Brian Lough: https://github.com/witnessmenow/Universal-Arduino-Telegram-Bot
#include <WiFiClientSecure.h>
#include <ArduinoJson.h>

// Initialize Telegram BOT
#define BOTtoken "5961260527:AAFkAbCBDGXLq9z9qc18lgm1GGTp-ZT4m8k"  // your Bot Token (Get from Botfather)
#define CHAT_ID "1951988684"


extern WiFiClientSecure client;
extern UniversalTelegramBot bot;


void handleNewMessages(int numNewMessages, float humidity_value);
void AllertMessages(float humidity_value);

#endif