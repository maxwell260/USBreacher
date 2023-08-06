#include <Keyboard.h>
#include <SoftwareSerial.h>
SoftwareSerial btserial(9,8);

String command;
int time;

void write(String command);
void press();
void enter();
void cmd();
void admincmd();

void setup(){
    Serial.begin(9600);
    btserial.begin(9600);
    Keyboard.begin();
    Serial.println("Scheda pronta");
}

void loop(){
    if(btserial.available()){
        command = btserial.readString();

        if(command=="cmd"){
            cmd();
        }
        else if(command=="cmd --admin"){
            admincmd();
        }
        else if(command=="set delay 1"){
            time=100;
        }
        else if(command=="set delay 2"){
            time=200;
        }
        else if(command=="set delay 3"){
            time=400;
        }
        else if(command=="set delay 5"){
            time=500;
        }
        else{
            write(command);
        }
    }
}

void press(int key){
    Keyboard.press(key);
    delay(time);
    Keyboard.releaseAll();
    delay(time);
    }
void enter(){
    Keyboard.press(KEY_RETURN);
    delay(time);
}
void write(String command){
    Keyboard.print(command);
    delay(time);
    enter();
}
void cmd(){
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('r');
    delay(time);
    write("cmd");
    enter();
}
void admincmd(){
    Keyboard.press(KEY_LEFT_GUI);
    Keyboard.press('r');
    Keyboard.releaseAll();
    delay(time);
    write("cmd");
    Keyboard.press(KEY_LEFT_CTRL);
    Keyboard.press(KEY_LEFT_SHIFT);
    enter();
    press(KEY_LEFT_ARROW);
    enter();
}
