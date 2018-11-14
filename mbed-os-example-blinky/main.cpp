#include "mbed.h"

Serial pc(USBTX, USBRX);
DigitalOut led1(LED1);
DigitalOut led2(LED2);
// main() runs in its own thread in the OS
int main() {
    while (true) {
        led1 = !led1;
        printf("hello23!\r\n");
        wait(0.8);
        led2 = !led2;
        printf("hello!\r\n");
        wait(0.5);
    }
}

