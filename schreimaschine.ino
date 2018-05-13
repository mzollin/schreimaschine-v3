  /**************************************
 * schreimaschine mercedes 160 / AX160
 * compiler & freelancer @ CCCZH
 * 11.03.17
 **************************************/

#include <stdint.h>
#include <stdbool.h>

// define selector inputs coming from keyboard controller
const uint8_t IN_A = 14;  // A0
const uint8_t IN_B = 15;  // A1
const uint8_t IN_C = 16;  // A2
const uint8_t IN_D = 17;  // A3
const uint8_t IN_E = 18;  // A4
const uint8_t IN_F = 19;  // A5
const uint8_t IN_G = 10;  // D10
const uint8_t IN_H = 11;  // D11

// define key outputs going back to keyboard controller
const uint8_t OUT_1 = 2;  // D2
const uint8_t OUT_2 = 3;  // D3
const uint8_t OUT_3 = 4;  // D4
const uint8_t OUT_4 = 5;  // D5
const uint8_t OUT_5 = 6;  // D6
const uint8_t OUT_6 = 7;  // D7
const uint8_t OUT_7 = 8;  // D8
const uint8_t OUT_8 = 9;  // D9

struct key {
    uint8_t in;
    uint8_t out;
};

struct key keys[128] = {
    // NUL
    {0, 0},
    // SOH
    {0, 0},
    // STX
    {0, 0},
    // ETX
    {0, 0},
    // EOT
    {0, 0},
    // ENQ
    {0, 0},
    // ACK
    {0, 0},
    // BEL
    {0, 0},
    // BS (backspace)
    {IN_B, OUT_6},
    // HT (tab)
    {IN_B, OUT_7},
    // LF (enter)
    {IN_G, OUT_1},
    // VT
    {0, 0},
    // FF
    {0, 0},
    // CR
    {0, 0},
    // SO
    {0, 0},
    // SI
    {0, 0},
    // DLE
    {0, 0},
    // DC1
    {0, 0},
    // DC2
    {0, 0},
    // DC3
    {0, 0},
    // DC4
    {0, 0},
    // NAK
    {0, 0},
    // SYN
    {0, 0},
    // ETB
    {0, 0},
    // CAN
    {0, 0},
    // EM
    {0, 0},
    // SUB
    {0, 0},
    // ESC
    {0, 0},
    // FS
    {0, 0},
    // GS
    {0, 0},
    // RS
    {0, 0},
    // US
    {0, 0},
    // Space
    {IN_A, OUT_6},
    // !
    {0, 0},
    // "
    {0, 0},
    // # (code)
    {IN_H, OUT_8},
    // $
    {0, 0},
    // %
    {0, 0},
    // &
    {0, 0},
    // '
    {IN_D, OUT_1},
    // (
    {0, 0},
    // )
    {0, 0},
    // *
    {0, 0},
    // +
    {IN_F, OUT_1},
    // ,
    {IN_G, OUT_5},
    // -
    {IN_G, OUT_2},
    // .
    {IN_H, OUT_2},
    // /
    {0, 0},
    // 0
    {IN_B, OUT_2},
    // 1
    {IN_C, OUT_7},
    // 2
    {IN_E, OUT_7},
    // 3
    {IN_D, OUT_7},
    // 4
    {IN_B, OUT_3},
    // 5
    {IN_A, OUT_3},
    // 6
    {IN_B, OUT_4},
    // 7
    {IN_A, OUT_4},
    // 8
    {IN_B, OUT_5},
    // 9
    {IN_A, OUT_5},
    // :
    {0, 0},
    // ;
    {0, 0},
    // <
    {0, 0},
    // =
    {0, 0},
    // >
    {0, 0},
    // ?
    {0, 0},
    // @
    {0, 0},
    // A (ä)
    {IN_E, OUT_2},
    // B (ss/?)
    {IN_A, OUT_2},
    // C (capslock)
    {IN_B, OUT_8},
    // D
    {0, 0},
    // E (backspace)
    {IN_B, OUT_1},
    // F (Rückführtaste/Schlange)
    {IN_C, OUT_6},
    // G
    {0, 0},
    // H (Rückschritttaste)
    {IN_E, OUT_1},
    // I
    {0, 0},
    // J (Halbzeilentaste)
    {IN_H, OUT_1},
    // K (Halbzeilentaste rückwärts)
    {IN_A, OUT_1},
    // L (Randlösetaste)
    {IN_A, OUT_7},
    // M (Mode)
    {IN_C, OUT_1},
    // N
    {0, 0},
    // O (ö)
    {IN_F, OUT_2},
    // P
    {0, 0},
    // Q
    {0, 0},
    // R (Randstelltaste)
    {IN_A, OUT_8},
    // S (Shift)
    {IN_G, OUT_8},
    // T (T+, Tabulator-Setztaste)
    {IN_C, OUT_8},
    // U (ü)
    {IN_D, OUT_2},
    // V
    {0, 0},
    // W
    {0, 0},
    // X
    {0, 0},
    // Y
    {0, 0},
    // Z
    {0, 0},
    // [
    {0, 0},
    // backslash
    {0, 0},
    // ]
    {0, 0},
    // ^
    {0, 0},
    // _
    {0, 0},
    // `
    {0, 0},
    // a
    {IN_E, OUT_8},
    // b
    {IN_H, OUT_4},
    // c
    {IN_H, OUT_3},
    // d
    {IN_G, OUT_6},
    // e
    {IN_D, OUT_6},
    // f
    {IN_F, OUT_3},
    // g
    {IN_E, OUT_3},
    // h
    {IN_F, OUT_4},
    // i
    {IN_C, OUT_5},
    // j
    {IN_E, OUT_4},
    // k
    {IN_F, OUT_5},
    // l
    {IN_E, OUT_5},
    // m
    {IN_H, OUT_5},
    // n
    {IN_G, OUT_4},
    // o
    {IN_D, OUT_5},
    // p
    {IN_C, OUT_2},
    // q
    {IN_F, OUT_7},
    // r
    {IN_C, OUT_3},
    // s
    {IN_F, OUT_6},
    // t
    {IN_D, OUT_3},
    // u
    {IN_D, OUT_4},
    // v
    {IN_G, OUT_3},
    // w
    {IN_E, OUT_6},
    // x
    {IN_H, OUT_6},
    // y
    {IN_F, OUT_8},
    // z
    {IN_C, OUT_4},
    // {
    {0, 0},
    // |
    {0, 0},
    // }
    {0, 0},
    // ~
    {0, 0},
    // DEL
    {0, 0},
};

bool g_code = false;
bool g_code_override = false;
bool g_shift = false;

 void setup() {
    // configure I/O pins
    pinMode(IN_A, INPUT);
    pinMode(IN_B, INPUT);
    pinMode(IN_C, INPUT);
    pinMode(IN_D, INPUT);
    pinMode(IN_E, INPUT);
    pinMode(IN_F, INPUT);
    pinMode(IN_G, INPUT);
    pinMode(IN_H, INPUT);
    pinMode(OUT_1, OUTPUT);
    pinMode(OUT_2, OUTPUT);
    pinMode(OUT_3, OUTPUT);
    pinMode(OUT_4, OUTPUT);
    pinMode(OUT_5, OUTPUT);
    pinMode(OUT_6, OUTPUT);
    pinMode(OUT_7, OUTPUT);
    pinMode(OUT_8, OUTPUT);

    // init USB serial port
    Serial.begin(115200);
}

void loop() {
    uint8_t serial_char;

    // read new ASCII character if available
    
    if(Serial.available() > 0) {
        serial_char = Serial.read();
        Serial.write(serial_char);
        if(serial_char > 127) {
            Serial.print("Flo du Idiot\n");
        } else if (serial_char == 'S') {
            g_shift = true;
        } else if (serial_char == '#') {
            g_code = true;
        } else if (serial_char == '$') {
            if (g_code_override) {
                g_code_override = false;
                Serial.print("code OFF\n");
            } else {
                g_code_override = true;
                Serial.print("code ON\n");          
            }
        } else {
            // look the character up and type it
            kb_type(keys[serial_char]);
            g_shift = false;
            g_code = false;
        }
    } else {
        kb_type(keys[0]);
    }
}

#define G_CODE (g_code || g_code_override)
#define SYNC(DIN) { \
  while(!digitalRead(DIN)) {}; \
  if ((raw_char.in != 0) && (DIN == raw_char.in) && (i >= 6)) { \
    digitalWrite(raw_char.out, HIGH); \
  } \
  if (g_shift && DIN == IN_G) { \
    digitalWrite(OUT_8, HIGH); \
  } \
  if (G_CODE && DIN == IN_H) { \
    digitalWrite(OUT_8, HIGH); \
  } \
  while(digitalRead(DIN)) {}; \
  digitalWrite(raw_char.out, LOW); \
  digitalWrite(OUT_8, LOW); \
}


void kb_type(struct key raw_char) {
    for(uint8_t i=0; i < (G_CODE ? 30 : 10); ++i) {
        SYNC(IN_H);
        SYNC(IN_G);
        SYNC(IN_F);
        SYNC(IN_E);
        SYNC(IN_D);
        SYNC(IN_C);
        SYNC(IN_B);
        SYNC(IN_A);
    }

    for(uint8_t i=0; i< (G_CODE ? 12 : 6); ++i) {
        while(!digitalRead(IN_H)) {};
        while(digitalRead(IN_H)) {};
    }
}
