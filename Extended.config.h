// ---------------------------------------------------------------------------------------------------------------------------------
// Extended configuration for OnStep SmartWebServer infrequently used options

//                                 *** Most users will not change anything in this file! ***

// ---------------------------------------------------------------------------------------------------------------------------------
// ADJUST THE FOLLOWING TO CONFIGURE YOUR CONTROLLER FEATURES ----------------------------------------------------------------------
// <-Req'd = always must set, <-Often = usually must set, Option = optional, Adjust = adjust as req'd, Infreq = infrequently changed

// DEBUG ------------------------------------------------------------ see https://onstep.groups.io/g/main/wiki/6-Configuration#DEBUG
// Enable additional debugging and/or status messages on the specified SERIAL_DEBUG port
// Note that the SERIAL_DEBUG port cannot be used for normal communication with OnStep

//      Parameter Name              Value        Default  Notes                                                                 Hint
#define DEBUG                         OFF //         OFF, Use ON for background error messages only, use VERBOSE for all      Infreq
                                          //              error and status messages, use PROFILER for VT100 task profiler,
                                          //              use REMOTE to forward verbose debug output to OnStep
#define SERIAL_DEBUG               Serial //      Serial, Or use any h/w serial port. Serial1 or Serial2, etc. as supported.  Option
#define SERIAL_DEBUG_BAUD           57600 //        9600, n. Where n=9600,19200,57600,115200 (common baud rates.)             Option

// STATUS LED ----------------------------------------------------------------------------------------------------------------------
#define LED_STATUS_ON_STATE           LOW //         LOW, Use HIGH so indicator stays on when connected if needed.            Option

// PASSWORD ------------------------------------------------------------------------------------------------------------------------
#define PASSWORD_DEFAULT       "password" //  "password", Adjust as required, this can be changed at runtime also.            Adjust
                                          //              password for runtime access to network settings.

// BLE GAMEPAD SETTINGS (ESP32 ONLY) ------------------------------------------- see https://onstep.groups.io/g/developer/wiki/22427
// THIS IS AN EXPERIMENTAL FEATURE
#define BLE_GAMEPAD                   OFF //         OFF, ON to allow BLE gamepad connection for ESP32 only.                   Option
#define BLE_GP_ADDR   "ff:ff:de:09:f5:cf" // ...f:ff:ff", GamePad MAC address #1                                               Adjust
                                          //              GamePad device address must match exactly else it will not connect!
                                          //              Replace address with yours, in lower case, with colons as shown.
#define BLE_GP_ADDR1  "ff:ff:ff:ff:ff:ff" // ...f:ff:ff", GamePad MAC address #2                                               Adjust
                                          //              Two GamePads are allowed, operating in a "handoff" mode, one at time.

// IP ADDRESS SETTINGS -------------------------------------------------------------------------------------------------------------
// These settings are stored in NV (EEPROM) and will not revert to the defaults once first set from the values below unless
// NV is wiped, these settings (where applicable) can be changed at runtime however.
#define AP_ENABLED                   true //        true, Wifi Access Point Enabled.                                          Adjust
#define AP_SSID                  "ONSTEP" //    "ONSTEP", Wifi Access Point SSID.                                             Adjust
#define AP_PASSWORD            "password" //  "password", Wifi Access Point password.                                         Adjust
#define AP_CHANNEL                      7 //           7, Wifi Access Point channel.                                          Adjust
#define AP_IP_ADDR          (192,168,0,1) // ..,168,0,1), Wifi Access Point IP Address.                                       Adjust
#define AP_GW_ADDR          (192,168,0,1) // ..,168,0,1), Wifi Access Point GATEWAY Address.                                  Adjust
#define AP_SN_MASK        (255,255,255,0) // ..55,255,0), Wifi Access Point SUBNET Mask.                                      Adjust

#define STA_ENABLED                 false //       false, Wifi Station Enabled.                                               Adjust
#define STA_DHCP_ENABLED             true //        true, Wifi Station DHCP Enabled.                                          Adjust
#define STA_SSID                   "Home" //      "Home", Wifi Station SSID to connnect to.                                   Adjust
#define STA_PASSWORD           "password" //  "password", Wifi Station mode password.                                         Adjust
#define STA_IP_ADDR        (192,168,1,55) // ..168,1,55), Wifi Station/Ethernet IP Address.                                   Adjust
#define STA_GW_ADDR         (192,168,1,1) // ..,168,1,1), Wifi Station/Ethernet GATEWAY Address.                              Adjust
#define STA_SN_MASK       (255,255,255,0) // ..55,255,0), Wifi Station/Ethernet SUBNET Mask.                                  Adjust

// NON-VOLATILE STORAGE ------------------------------------------------------------------------------------------------------------
#define NV_WIPE                       OFF //         OFF, Causes the defaults to be written back into NV (FLASH,EEPROM,etc.)  Infreq
                                          //              ***     IMPORTANT: ENABLE THIS OPTION THEN UPLOAD, WAIT A MINUTE    ***
// Warning --->                           //              ***     OR TWO THEN SET THIS OPTION TO OFF AND UPLOAD AGAIN.        ***
                                          //              ***     LEAVING THIS OPTION ENABLED CAN CAUSE EXCESSIVE NV          ***
                                          //              ***     WEAR AND DAMAGE THE MICROCONTROLLER NV SUBSYSTEM !!!        ***

#define NV_DEFAULT                     ON //          ON, Uses HAL specified default, for remembering settings when           Infreq
                                          //              powered off.  This is usually done using the microcontrollers
                                          //              built-in EEPROM or FLASH emulation of EEPROM.
