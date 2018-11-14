#include "mbed.h"

Serial pc(USBTX, USBRX);
DigitalOut led1(LED1);
// main() runs in its own thread in the OS
int main() {
    while (true) {
        led1 = !led1;
        printf("hello23!\r\n");
        wait(1.8);

    }
}

