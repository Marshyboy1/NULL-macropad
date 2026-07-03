#pragma once

// 1. CHOOSE MATRIX OR DIRECT PINS
// Your schematic has 4 push buttons (SW1-SW4) and 1 encoder switch (SW5). 
// Let's configure all 5 as buttons in a single row/list.
#define DIRECT_PINS { \
    { D10, D9, D8, D7, D6 } \
}
// Note: D10=SW1, D9=SW2, D8=SW3, D7=SW4, D6=SW5 (Encoder Switch)

// 2. ROTARY ENCODER PINOUT
// Encoder B connects to Pin 1 (D0). Encoder A connects to Pin 2 (D1).
#define ENCODERS_PAD_A { D1 }
#define ENCODERS_PAD_B { D0 }
#define ENCODER_RESOLUTION 4

// 3. I2C OLED SCREEN SETTINGS
// Pin 5 (D4) is SDA and Pin 6 (D5) is SCL as labeled on your schematic
#define I2C_DRIVER I2CD1
#define I2C1_SDA_PIN D4
#define I2C1_SCL_PIN D5