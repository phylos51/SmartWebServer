// -------------------------------------------------------------------------------------------------
// Pin map for ESP32C3
#pragma once

// locate WeMos D1 R32 serial port pins to match WeMos D1 Mini main and swapped port pins
#ifndef SERIAL_RX
  #define SERIAL_RX         1
#endif
#ifndef SERIAL_TX
  #define SERIAL_TX         3
#endif
#ifndef SERIAL_SWAPPED_RX
  #define SERIAL_SWAPPED_RX 23
#endif
#ifndef SERIAL_SWAPPED_TX
  #define SERIAL_SWAPPED_TX 5
#endif

#define BOOT0_PIN           5   // GPIO5 to Boot0 of STM32 etc. (no swapped serial if active)

#define AXIS1_ENC_A_PIN     18  // pin# for Axis1 encoder, for A or CW  or MA/CLK
#define AXIS1_ENC_B_PIN     19  // pin# for Axis1 encoder, for B or CCW or SLO
#define AXIS2_ENC_A_PIN     22  // pin# for Axis1 encoder, for A or CW  or MA/CLK
#define AXIS2_ENC_B_PIN     21  // pin# for Axis1 encoder, for B or CCW or SLO

#if AXIS1_ENC > 0 && AXIS2_ENC > 0
  #define VGPIO_PIN_0       OFF
  #define VGPIO_PIN_1       OFF
  #define VGPIO_PIN_2       OFF
  #define VGPIO_PIN_3       OFF
#else
  #define VGPIO_PIN_0       AXIS1_ENC_A_PIN
  #define VGPIO_PIN_1       AXIS1_ENC_B_PIN
  #define VGPIO_PIN_2       AXIS2_ENC_A_PIN
  #define VGPIO_PIN_3       AXIS2_ENC_B_PIN
#endif
#define VGPIO_PIN_4         OFF
#define VGPIO_PIN_5         OFF
#define VGPIO_PIN_6         OFF
#define VGPIO_PIN_7         OFF

#define ETHERNET_RESET_PIN  9   // pin# for controlling the reset of W5500 so it comes up properly

#ifndef LED_STATUS_PIN      
  #define LED_STATUS_PIN    2   // pin 2 is a guess and is probably wrong
#endif

#define SD_CARD_CS_PIN      OFF // pin 4 to CS for SD adapter on Arduino Ethernet Shield