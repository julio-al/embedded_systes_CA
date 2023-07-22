#include "mbed.h"

DigitalOut led1(LED1);
DigitalOut led2(LED2);

int main() {
    while(1) {
        led1 = !led1;
        ThisThread::sleep_for(2s);
        led2 = !led2;
        ThisThread::sleep_for(5s);
    }
}

