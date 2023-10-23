#include QMK_KEYBOARD_H

enum unicode_names
{
  DESSS,
  DEBAE,
  DESAE,
  DEBOE,
  DESOE,
  DEBUE,
  DESUE
};

const uint32_t PROGMEM unicode_map[] = {
    [DESSS] = 0x00DF, // ß
    [DEBAE] = 0x00C4, // Ä
    [DESAE] = 0x00E4, // ä
    [DEBOE] = 0x00D6, // Ö
    [DESOE] = 0x00F6, // ö
    [DEBUE] = 0x00DC, // Ü
    [DESUE] = 0x00FC, // ü
};