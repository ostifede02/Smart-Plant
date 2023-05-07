#include "telegram_bot.h"

void handleNewMessages(int numNewMessages, float humidity_value)
{
  Serial.println("handleNewMessages");
  Serial.println(String(numNewMessages));

  for (int i=0; i<numNewMessages; i++) {
    // Chat id of the requester
    String chat_id = String(bot.messages[i].chat_id);
    
    // Print the received message
    String text = bot.messages[i].text;
    Serial.println(text);

    String from_name = bot.messages[i].from_name;

    if (text == "/start") {
      String welcome = "Ciao, " + from_name + "!\n";
      welcome += "Io sono Varna e mi occuperò di avvisarti quando dovrai annaffiare le tue piante.\n";
      welcome += "Per sapere la salute della tua pianta digita:\n/humidity e ti dirò l'umidità del terreno!";
      bot.sendMessage(chat_id, welcome, "");
    }

    if (text == "/humidity") {
        String humidity_msg = "L'umidità è di ";
        humidity_msg += String(humidity_value) + " %";
        bot.sendMessage(chat_id, humidity_msg, "");
    }
  }
}


void AllertMessages(float humidity_value)
{
    // Chat id of the requester
    String chat_id = String(bot.messages[0].chat_id);

    String humidity_msg = "ATTENZIONE! L'umidità è sotto la soglia del 50%, corrisponde al ";
    humidity_msg += String(humidity_value) + " %.\n";

    bot.sendMessage(chat_id, humidity_msg, "");
}