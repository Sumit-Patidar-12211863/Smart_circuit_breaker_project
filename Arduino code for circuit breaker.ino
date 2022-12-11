

#include <SoftwareSerial.h>

SoftwareSerial mySerial(9, 10);

int inp = A0;
int onCount = 0, offCount = 0;

void setup()
{
  pinMode(13, OUTPUT);
  pinMode(inp,INPUT);
  mySerial.begin(9600);   // Setting the baud rate of GSM Module  
  Serial.begin(9600);    // Setting the baud rate of Serial Monitor (Arduino)
  delay(100);
}


void loop()
{

while(1){

  int sig = analogRead(inp);
  Serial.print("Signal: ");
  Serial.println(sig);

  if (sig>300){

        digitalWrite(13, HIGH);

       if (onCount == 0){

      Serial.println("POWER SUPPLY IS ON");
      
       }else {

        Serial.println("POWER SUPPLY IS BACK AGAIN");
        //SEND POWER BACK SMS
        //SendPowerBackMessage();

          mySerial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
  delay(1000);  // Delay of 1000 milli seconds or 1 second
  mySerial.println("AT+CMGS=\"xxxxxxxxxx\"\r"); // Replace x with mobile number
  Serial.println("SMS sent 1");
  delay(1000);
  mySerial.println("Power is Back");// The SMS text you want to send
  delay(100);
   mySerial.println((char)26);// ASCII code of CTRL+Z
  delay(1000);


        
        offCount = 0;
        onCount = 0;
        
        }
    
    }else{

        digitalWrite(13, LOW);
        
        if(offCount == 0){
        
        Serial.println("POWER SUPPLY INTTERRUPTED");
        //SEND POWER INTERRUPTION SMS
        //SendPowerGoneMessage();

          mySerial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
  delay(1000);  // Delay of 1000 milli seconds or 1 second
  mySerial.println("AT+CMGS=\"xxxxxxxxxx\"\r");
  Serial.println("SMS sent 2");
  delay(1000);
  mySerial.println("Power Failuer Occured");// The SMS text you want to send
  delay(100);
   mySerial.println((char)26);// ASCII code of CTRL+Z
  delay(1000);



       
        offCount = 1;
        onCount = 1;
        
        }else{

          //DO NOTHING
          
          }
       
      
      }
  
  delay(1000);
}

}


 void SendPowerGoneMessage()
{
  mySerial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
  delay(1000);  // Delay of 1000 milli seconds or 1 second
  mySerial.println("AT+CMGS=\"xxxxxxxxxx\"\r");
  delay(1000);
  mySerial.println("Power Failuer Occured");// The SMS text you want to send
  delay(100);
   mySerial.println((char)26);// ASCII code of CTRL+Z
  delay(1000);
}


 void SendPowerBackMessage()
{
  mySerial.println("AT+CMGF=1");    //Sets the GSM Module in Text Mode
  delay(1000);  // Delay of 1000 milli seconds or 1 second
  mySerial.println("AT+CMGS=\"xxxxxxxxxx\"\r"); // Replace x with mobile number
  delay(1000);
  mySerial.println("Power is Back");// The SMS text you want to send
  delay(100);
   mySerial.println((char)26);// ASCII code of CTRL+Z
  delay(1000);
}


 void RecieveMessage()
{
  mySerial.println("AT+CNMI=2,2,0,0,0"); // AT Command to receive a live SMS
  delay(1000);
 }
 
