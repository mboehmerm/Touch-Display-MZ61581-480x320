
// Edit Arduino\libraries\TFT_eSPI\User_Setup_select.h :


// See SetupX_Template.h for all options available
#define USER_SETUP_ID 405

// Driver

#define R61581_DRIVER

#define TFT_WIDTH  320
#define TFT_HEIGHT 480

// Pins

#define TFT_BL    5           // LED back-light control pin
#define TFT_BACKLIGHT_ON LOW  // Level to turn ON back-light (HIGH or LOW)

#define TFT_CS   15     // Chip select control pin
#define TFT_DC    2     // Data Command control pin
#define TFT_RST  -1     // Set TFT_RST to -1 if the display RESET is connected to NodeMCU RST or 3.3V

//#define TFT_MISO 19   // default pins ESP32
//#define TFT_MOSI 23   // dito
//#define TFT_SCLK 18   // dito

#define TOUCH_CS 4      // Chip select pin (T_CS) of touch screen

// Fonts
#define LOAD_GLCD       // Font 1. Original Adafruit 8 pixel font needs ~1820 bytes in FLASH
#define LOAD_FONT2      // Font 2. Small 16 pixel high font, needs ~3534 bytes in FLASH, 96 characters
#define LOAD_FONT4      // Font 4. Medium 26 pixel high font, needs ~5848 bytes in FLASH, 96 characters
#define LOAD_FONT6      // Font 6. Large 48 pixel font, needs ~2666 bytes in FLASH, only characters 1234567890:-.apm
#define LOAD_FONT7      // Font 7. 7 segment 48 pixel font, needs ~2438 bytes in FLASH, only characters 1234567890:.
#define LOAD_FONT8      // Font 8. Large 75 pixel font needs ~3256 bytes in FLASH, only characters 1234567890:-.
//#define LOAD_FONT8N     // Font 8. Alternative to Font 8 above, slightly narrower, so 3 digits fit a 160 pixel TFT
#define LOAD_GFXFF      // FreeFonts. Include access to the 48 Adafruit_GFX free fonts FF1 to FF48 and custom fonts

#define SMOOTH_FONT

//#define SPI_FREQUENCY      20000000
//#define SPI_FREQUENCY      27000000  // ok
#define SPI_FREQUENCY        40000000  // ok with short cables
//#define SPI_FREQUENCY      80000000  // white screen

#define SPI_TOUCH_FREQUENCY 2500000

// #define SUPPORT_TRANSACTIONS
