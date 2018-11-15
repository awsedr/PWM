#include "mbed.h"

//PwmOut led1(D8);
PwmOut led2(D9);
PwmOut led3(D8);
PwmOut led4(D10);

int main()
{
    while (1) {
        for (float f = 0.0; f < 0.2; f += 0.001) {
           // led1 = f;
            led2 = f*f;
            led3 = f;
           led4 = 0.2 - f;
            wait(0.02);
        }
    }
}