#include QMK_KEYBOARD_H

enum user_keycode {
    BT_USB = USER00, 
    KB_RESET, 
    BATT_LEVEL, 
    LOCK_MODE, 
    RGB_Toogle, 
    RGB_Mode_DN, 
    RGB_Mode_UP, 
    RGB_HUE_DN, 
    RGB_HUE_UP, 
    RGB_SAT_DN, 
    RGB_SAT_UP, 
    RGB_LUM_DN, 
    RGB_LUM_UP, 
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  {
    {KC_PAUSE, KC_KP_MINUS, KC_KP_PLUS, KC_KP_ENTER, KC_KP_3, KC_KP_6, KC_KP_9, KC_KP_ASTERISK},
    {KC_SCROLLLOCK, KC_KP_SLASH, KC_KP_8, KC_KP_5, KC_KP_2, KC_KP_DOT, KC_KP_0, KC_NUMLOCK},
    {KC_PSCREEN, KC_KP_7, KC_KP_4, KC_KP_1, KC_RIGHT, KC_PGDOWN, KC_END, KC_PGUP},
    {KC_F12, KC_HOME, KC_UP, KC_DOWN, KC_LEFT, KC_RCTRL, KC_DELETE, KC_INSERT},
    {KC_F11, KC_BSLASH, KC_ENTER, KC_RSHIFT, MO(1), KC_BSPACE, KC_RBRACKET, KC_LBRACKET},
    {KC_F10, KC_EQUAL, KC_QUOTE, KC_RGUI, KC_SLASH, KC_SCOLON, KC_P, KC_MINUS},
    {KC_F8, KC_F9, KC_0, KC_O, KC_L, KC_DOT, KC_RALT, KC_COMMA},
    {KC_F7, KC_9, KC_I, KC_K, KC_M, KC_J, KC_U, KC_8},
    {KC_F5, KC_F6, KC_7, KC_Y, KC_H, KC_N, KC_B, KC_6},
    {KC_F4, KC_T, KC_G, KC_SPACE, KC_V, KC_F, KC_R, KC_5},
    {KC_F3, KC_C, KC_4, KC_E, KC_D, KC_X, KC_S, KC_W},
    {KC_F2, KC_3, KC_Z, KC_LALT, KC_A, KC_Q, KC_2, KC_F1},
    {KC_ESCAPE, KC_1, KC_LGUI, KC_LCTRL, KC_LSHIFT, KC_CAPSLOCK, KC_TAB, KC_GRAVE}
  },
};
