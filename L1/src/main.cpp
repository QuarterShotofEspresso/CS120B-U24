#include <avr/io.h>

// for exercise 4
unsigned char seg7[] = {
//    gfedcba <-- segment you want to write to
    0b0111111 // 0 <-- I did this one for you guys
    // 1 <-- for the remaining numbers, determine which segment should be on or off
    // 2
    // 3
    // 4
    // 5
    // 6
    // 7
    // 8
    // 9
    // A <-- we use A-F to represent values 10-15 in hex
    // B
    // C
    // D
    // E
    // F
};


int main() {

    // initalize any variables you want to use

    // configure the Data Direction Registers here:
    DDRB = /* TODO! */;
    DDRC = /* TODO! */;

    while (true) {
        // code here will run forever...
        /* TODO! */
    }

    return 0; // <-- this return statement is never reached

}
