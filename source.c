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

// const uint32_t PROGMEM unicode_map[] = {
// [DESSS]  = 0x00DF,  // ß
// [DEBAE] = 0x00C4,  // Ä
// [DESAE]  = 0x00E4, // ä
// [DEBOE]  = 0x00D6,  // Ö
// [DESOE] = 0x00F6,  // ö
// [DEBUE]  = 0x00DC, // Ü
// [DESUE]  = 0x00FC, // ü
// };

bool process_record_user(uint16_t keycode, keyrecord_t *record)
{
  switch (keycode)
  {
  case DEBAE:
    if (record->event.pressed)
    {
      SEND_STRING("0x00C4"); // Unicode for ä
    }
    break;
  case DESAE:
    if (record->event.pressed)
    {
      SEND_STRING("0x00E4"); // Unicode for å
    }
    break;
  case DEBOE:
    if (record->event.pressed)
    {
      SEND_STRING("0x00D6"); // Unicode for ö
    }
    break;
  case DESOE:
    if (record->event.pressed)
    {
      SEND_STRING("0x00F6"); // Unicode for ø
    }
    break;
  case DEBUE:
    if (record->event.pressed)
    {
      SEND_STRING("0x00DC"); // Unicode for ü
    }
    break;
  case DESUE:
    if (record->event.pressed)
    {
      SEND_STRING("0x00FC"); // Unicode for ÿ
    }
    break;
  }
  return true;
};
