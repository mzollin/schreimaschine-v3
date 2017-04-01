/**************************************
 * schreimaschine mercedes 160 / AX160
 * compiler & freelancer @ CCCZH
 * 11.03.17
 **************************************/

#include <stdint.h>
#include <stdbool.h>

#define MOD_NO {.shift = false, .code = false, .kb2 = false}
#define MOD_SHIFT {.shift = true, .code = false, .kb2 = false}
#define MOD_KB2 {.shift = false, .code = false, .kb2 = true}
#define UNDEFINED {0, 0, MOD_NO}

// define selector inputs coming from keyboard controller
const uint8_t IN_A = 14;
const uint8_t IN_B = 15;
const uint8_t IN_C = 16;
const uint8_t IN_D = 17;
const uint8_t IN_E = 18;
const uint8_t IN_F = 19;
const uint8_t IN_G = 10;
const uint8_t IN_H = 11;

// define key outputs going back to keyboard controller
const uint8_t OUT_1 = 2;
const uint8_t OUT_2 = 3;
const uint8_t OUT_3 = 4;
const uint8_t OUT_4 = 5;
const uint8_t OUT_5 = 6;
const uint8_t OUT_6 = 7;
const uint8_t OUT_7 = 8;
const uint8_t OUT_8 = 9;

struct key {
    uint8_t in;
    uint8_t out;
    struct {
        bool shift : 1;
        bool code : 1;
        bool kb2 : 1;
    } modifiers;
};

struct key keys[256] = {
    // NUL
    UNDEFINED,
    // SOH
    UNDEFINED,
    // STX
    UNDEFINED,
    // ETX
    UNDEFINED,
    // EOT
    UNDEFINED,
    // ENQ
    UNDEFINED,
    // ACK
    UNDEFINED,
    // BEL
    UNDEFINED,
    // BS
    {IN_B, OUT_6, MOD_NO},
    // HT
    {IN_B, OUT_7, MOD_NO},
    // LF
    {IN_G, OUT_1, MOD_NO},
    // VT
    UNDEFINED,
    // FF
    UNDEFINED,
    // CR
    UNDEFINED,
    // SO
    UNDEFINED,
    // SI
    UNDEFINED,
    // DLE
    UNDEFINED,
    // DC1
    UNDEFINED,
    // DC2
    UNDEFINED,
    // DC3
    UNDEFINED,
    // DC4
    UNDEFINED,
    // NAK
    UNDEFINED,
    // SYN
    UNDEFINED,
    // ETB
    UNDEFINED,
    // CAN
    UNDEFINED,
    // EM
    UNDEFINED,
    // SUB
    UNDEFINED,
    // ESC
    UNDEFINED,
    // FS
    UNDEFINED,
    // GS
    UNDEFINED,
    // RS
    UNDEFINED,
    // US
    UNDEFINED,
    // Space
    {IN_A, OUT_6, MOD_NO},
    // ! (Shift-1)
    {IN_C, OUT_7, MOD_SHIFT},
    // " (Shift-2)
    {IN_E, OUT_7, MOD_SHIFT},
    // # (KB2-7)
    {IN_A, OUT_4, MOD_KB2},
    // $ (Shift-4)
    {IN_B, OUT_3, MOD_SHIFT},
    // % (Shift-5)
    {IN_A, OUT_3, MOD_SHIFT},
    // & (Shift-6)
    {IN_B, OUT_4, MOD_SHIFT},
    // ' (Shift-3)
    {IN_D, OUT_7, MOD_SHIFT},
    // ( (Shift-8)
    {IN_B, OUT_5, MOD_SHIFT},
    // ) (Shift-9)
    {IN_A, OUT_5, MOD_SHIFT},
    // * (Shift-+)
    {IN_F, OUT_1, MOD_NO},
    // +
    {IN_F, OUT_1, MOD_NO},
    // ,
    {IN_G, OUT_5, MOD_NO},
    // -
    {IN_G, OUT_2, MOD_NO},
    // .
    {IN_H, OUT_2, MOD_NO},
    // / (Shift-7)
    {IN_A, OUT_4, MOD_SHIFT},
    // 0
    {IN_B, OUT_2, MOD_NO},
    // 1
    {IN_C, OUT_7, MOD_NO},
    // 2
    {IN_E, OUT_7, MOD_NO},
    // 3
    {IN_D, OUT_7, MOD_NO},
    // 4
    {IN_B, OUT_3, MOD_NO},
    // 5
    {IN_A, OUT_3, MOD_NO},
    // 6
    {IN_B, OUT_4, MOD_NO},
    // 7
    {IN_A, OUT_4, MOD_NO},
    // 8
    {IN_B, OUT_5, MOD_NO},
    // 9
    {IN_A, OUT_5, MOD_NO},
    // :
    {IN_H, OUT_2, MOD_SHIFT},
    // ;
    {IN_G, OUT_5, MOD_SHIFT},
    // <
    {IN_B, OUT_5, MOD_KB2},
    // =
    {IN_B, OUT_2, MOD_SHIFT},
    // >
    {IN_A, OUT_5, MOD_KB2},
    // ?
    {IN_A, OUT_2, MOD_SHIFT},
    // @
    {0, 0, MOD_NO},
    // A
    {IN_E, OUT_8, MOD_SHIFT},
    // B
    {IN_H, OUT_4, MOD_SHIFT},
    // C
    {IN_H, OUT_3, MOD_SHIFT},
    // D
    {IN_G, OUT_6, MOD_SHIFT},
    // E
    {IN_D, OUT_6, MOD_SHIFT},
    // F
    {IN_F, OUT_3, MOD_SHIFT},
    // G
    {IN_E, OUT_3, MOD_SHIFT},
    // H
    {IN_F, OUT_4, MOD_SHIFT},
    // I
    {IN_C, OUT_5, MOD_SHIFT},
    // J
    {IN_E, OUT_4, MOD_SHIFT},
    // K
    {IN_F, OUT_5, MOD_SHIFT},
    // L
    {IN_E, OUT_5, MOD_SHIFT},
    // M
    {IN_H, OUT_5, MOD_SHIFT},
    // N
    {IN_G, OUT_4, MOD_SHIFT},
    // O
    {IN_D, OUT_5, MOD_SHIFT},
    // P
    {IN_C, OUT_2, MOD_SHIFT},
    // Q
    {IN_F, OUT_7, MOD_SHIFT},
    // R
    {IN_C, OUT_3, MOD_SHIFT},
    // S
    {IN_F, OUT_6, MOD_SHIFT},
    // T
    {IN_D, OUT_3, MOD_SHIFT},
    // U
    {IN_D, OUT_4, MOD_SHIFT},
    // V
    {IN_G, OUT_3, MOD_SHIFT},
    // W
    {IN_E, OUT_6, MOD_SHIFT},
    // X
    {IN_H, OUT_6, MOD_SHIFT},
    // Y
    {IN_F, OUT_8, MOD_SHIFT},
    // Z
    {IN_C, OUT_4, MOD_SHIFT},
    // [
    UNDEFINED,
    // backslash
    UNDEFINED,
    // ]
    UNDEFINED,
    // ^
    UNDEFINED,
    // _
    {IN_G, OUT_2, MOD_SHIFT},
    // `
    {IN_D, OUT_1, MOD_SHIFT},
    // a
    {IN_E, OUT_8, MOD_NO},
    // b
    {IN_H, OUT_4, MOD_NO},
    // c
    {IN_H, OUT_3, MOD_NO},
    // d
    {IN_G, OUT_6, MOD_NO},
    // e
    {IN_D, OUT_6, MOD_NO},
    // f
    {IN_F, OUT_3, MOD_NO},
    // g
    {IN_E, OUT_3, MOD_NO},
    // h
    {IN_F, OUT_4, MOD_NO},
    // i
    {IN_C, OUT_5, MOD_NO},
    // j
    {IN_E, OUT_4, MOD_NO},
    // k
    {IN_F, OUT_5, MOD_NO},
    // l
    {IN_E, OUT_5, MOD_NO},
    // m
    {IN_H, OUT_5, MOD_NO},
    // n
    {IN_G, OUT_4, MOD_NO},
    // o
    {IN_D, OUT_5, MOD_NO},
    // p
    {IN_C, OUT_2, MOD_NO},
    // q
    {IN_F, OUT_7, MOD_NO},
    // r
    {IN_C, OUT_3, MOD_NO},
    // s
    {IN_F, OUT_6, MOD_NO},
    // t
    {IN_D, OUT_3, MOD_NO},
    // u
    {IN_D, OUT_4, MOD_NO},
    // v
    {IN_G, OUT_3, MOD_NO},
    // w
    {IN_E, OUT_6, MOD_NO},
    // x
    {IN_H, OUT_6, MOD_NO},
    // y
    {IN_F, OUT_8, MOD_NO},
    // z
    {IN_C, OUT_4, MOD_NO},
    // {
    UNDEFINED,
    // |
    {IN_C, OUT_7, MOD_KB2},
    // }
    UNDEFINED,
    // ~
    UNDEFINED,
    // DEL
    UNDEFINED,
    // 128
    UNDEFINED,
    // 129
    UNDEFINED,
    // 130
    UNDEFINED,
    // 131
    UNDEFINED,
    // 132
    UNDEFINED,
    // 133
    UNDEFINED,
    // 134
    UNDEFINED,
    // 135
    UNDEFINED,
    // 136
    UNDEFINED,
    // 137
    UNDEFINED,
    // 138
    UNDEFINED,
    // 139
    UNDEFINED,
    // 140
    UNDEFINED,
    // 141
    UNDEFINED,
    // 142
    UNDEFINED,
    // 143
    UNDEFINED,
    // 144
    UNDEFINED,
    // 145
    UNDEFINED,
    // 146
    UNDEFINED,
    // 147
    UNDEFINED,
    // 148
    UNDEFINED,
    // 149
    UNDEFINED,
    // 150
    UNDEFINED,
    // 151
    UNDEFINED,
    // 152
    UNDEFINED,
    // 153
    UNDEFINED,
    // 154
    UNDEFINED,
    // 155
    UNDEFINED,
    // 156
    UNDEFINED,
    // 157
    UNDEFINED,
    // 158
    UNDEFINED,
    // 159
    UNDEFINED,
    // 160          NO-BREAK SPACE
    UNDEFINED,
    // 161    ¡     INVERTED EXCLAMATION MARK
    UNDEFINED,
    // 162    ¢     CENT SIGN
    UNDEFINED,
    // 163    £     POUND SIGN
    UNDEFINED,
    // 164    ¤     CURRENCY SIGN
    UNDEFINED,
    // 165    ¥     YEN SIGN
    UNDEFINED,
    // 166    ¦     BROKEN BAR
    UNDEFINED,
    // 167    §     SECTION SIGN
    {IN_B, OUT_3, MOD_KB2},
    // 168    ¨     DIAERESIS
    UNDEFINED,
    // 169    ©     COPYRIGHT SIGN
    UNDEFINED,
    // 170    ª     FEMININE ORDINAL INDICATOR
    UNDEFINED,
    // 171    «     LEFT-POINTING DOUBLE ANGLE QUOTATION MARK
    UNDEFINED,
    // 172    ¬     NOT SIGN
    UNDEFINED,
    // 173          SOFT HYPHEN
    UNDEFINED,
    // 174    ®     REGISTERED SIGN
    UNDEFINED,
    // 175    ¯     MACRON
    UNDEFINED,
    // 176    °     DEGREE SIGN
    {IN_A, OUT_3, MOD_KB2},
    // 177    ±     PLUS-MINUS SIGN
    UNDEFINED,
    // 178    ²     SUPERSCRIPT TWO
    {IN_E, OUT_7, MOD_KB2},
    // 179    ³     SUPERSCRIPT THREE
    {IN_D, OUT_7, MOD_KB2},
    // 180    '     ACUTE ACCENT
    {IN_D, OUT_1, MOD_SHIFT},
    // 181    µ     MICRO SIGN
    {IN_B, OUT_4, MOD_KB2},
    // 182    ¶     PILCROW SIGN
    UNDEFINED,
    // 183    ·     MIDDLE DOT
    UNDEFINED,
    // 184    ¸     CEDILLA
    UNDEFINED,
    // 185    ¹     SUPERSCRIPT ONE
    UNDEFINED,
    // 186    º     MASCULINE ORDINAL INDICATOR
    UNDEFINED,
    // 187    »     RIGHT-POINTING DOUBLE ANGLE QUOTATION MARK
    UNDEFINED,
    // 188    ¼     VULGAR FRACTION ONE QUARTER
    UNDEFINED,
    // 189    ½     VULGAR FRACTION ONE HALF
    UNDEFINED,
    // 190    ¾     VULGAR FRACTION THREE QUARTERS
    UNDEFINED,
    // 191    ¿     INVERTED QUESTION MARK
    UNDEFINED,
    // 192    À     LATIN CAPITAL LETTER A WITH GRAVE
    UNDEFINED,
    // 193    Á     LATIN CAPITAL LETTER A WITH ACUTE
    UNDEFINED,
    // 194    Â     LATIN CAPITAL LETTER A WITH CIRCUMFLEX
    UNDEFINED,
    // 195    Ã     LATIN CAPITAL LETTER A WITH TILDE
    UNDEFINED,
    // 196    Ä     LATIN CAPITAL LETTER A WITH DIAERESIS
    UNDEFINED,
    // 197    Å     LATIN CAPITAL LETTER A WITH RING ABOVE
    UNDEFINED,
    // 198    Æ     LATIN CAPITAL LETTER AE
    UNDEFINED,
    // 199    Ç     LATIN CAPITAL LETTER C WITH CEDILLA
    UNDEFINED,
    // 200    È     LATIN CAPITAL LETTER E WITH GRAVE
    UNDEFINED,
    // 201    É     LATIN CAPITAL LETTER E WITH ACUTE
    UNDEFINED,
    // 202    Ê     LATIN CAPITAL LETTER E WITH CIRCUMFLEX
    UNDEFINED,
    // 203    Ë     LATIN CAPITAL LETTER E WITH DIAERESIS
    UNDEFINED,
    // 204    Ì     LATIN CAPITAL LETTER I WITH GRAVE
    UNDEFINED,
    // 205    Í     LATIN CAPITAL LETTER I WITH ACUTE
    UNDEFINED,
    // 206    Î     LATIN CAPITAL LETTER I WITH CIRCUMFLEX
    UNDEFINED,
    // 207    Ï     LATIN CAPITAL LETTER I WITH DIAERESIS
    UNDEFINED,
    // 208    Ð     LATIN CAPITAL LETTER ETH
    UNDEFINED,
    // 209    Ñ     LATIN CAPITAL LETTER N WITH TILDE
    UNDEFINED,
    // 210    Ò     LATIN CAPITAL LETTER O WITH GRAVE
    UNDEFINED,
    // 211    Ó     LATIN CAPITAL LETTER O WITH ACUTE
    UNDEFINED,
    // 212    Ô     LATIN CAPITAL LETTER O WITH CIRCUMFLEX
    UNDEFINED,
    // 213    Õ     LATIN CAPITAL LETTER O WITH TILDE
    UNDEFINED,
    // 214    Ö     LATIN CAPITAL LETTER O WITH DIAERESIS
    UNDEFINED,
    // 215    ×     MULTIPLICATION SIGN
    UNDEFINED,
    // 216    Ø     LATIN CAPITAL LETTER O WITH STROKE
    UNDEFINED,
    // 217    Ù     LATIN CAPITAL LETTER U WITH GRAVE
    UNDEFINED,
    // 218    Ú     LATIN CAPITAL LETTER U WITH ACUTE
    UNDEFINED,
    // 219    Û     LATIN CAPITAL LETTER U WITH CIRCUMFLEX
    UNDEFINED,
    // 220    Ü     LATIN CAPITAL LETTER U WITH DIAERESIS
    UNDEFINED,
    // 221    Ý     LATIN CAPITAL LETTER Y WITH ACUTE
    UNDEFINED,
    // 222    Þ     LATIN CAPITAL LETTER THORN
    UNDEFINED,
    // 223    ß     LATIN SMALL LETTER SHARP S
    {IN_A, OUT_2, MOD_NO},
    // 224    à     LATIN SMALL LETTER A WITH GRAVE
    UNDEFINED,
    // 225    á     LATIN SMALL LETTER A WITH ACUTE
    UNDEFINED,
    // 226    â     LATIN SMALL LETTER A WITH CIRCUMFLEX
    UNDEFINED,
    // 227    ã     LATIN SMALL LETTER A WITH TILDE
    UNDEFINED,
    // 228    ä     LATIN SMALL LETTER A WITH DIAERESIS
    UNDEFINED,
    // 229    å     LATIN SMALL LETTER A WITH RING ABOVE
    UNDEFINED,
    // 230    æ     LATIN SMALL LETTER AE
    UNDEFINED,
    // 231    ç     LATIN SMALL LETTER C WITH CEDILLA
    UNDEFINED,
    // 232    è     LATIN SMALL LETTER E WITH GRAVE
    UNDEFINED,
    // 233    é     LATIN SMALL LETTER E WITH ACUTE
    UNDEFINED,
    // 234    ê     LATIN SMALL LETTER E WITH CIRCUMFLEX
    UNDEFINED,
    // 235    ë     LATIN SMALL LETTER E WITH DIAERESIS
    UNDEFINED,
    // 236    ì     LATIN SMALL LETTER I WITH GRAVE
    UNDEFINED,
    // 237    í     LATIN SMALL LETTER I WITH ACUTE
    UNDEFINED,
    // 238    î     LATIN SMALL LETTER I WITH CIRCUMFLEX
    UNDEFINED,
    // 239    ï     LATIN SMALL LETTER I WITH DIAERESIS
    UNDEFINED,
    // 240    ð     LATIN SMALL LETTER ETH
    UNDEFINED,
    // 241    ñ     LATIN SMALL LETTER N WITH TILDE
    UNDEFINED,
    // 242    ò     LATIN SMALL LETTER O WITH GRAVE
    UNDEFINED,
    // 243    ó     LATIN SMALL LETTER O WITH ACUTE
    UNDEFINED,
    // 244    ô     LATIN SMALL LETTER O WITH CIRCUMFLEX
    UNDEFINED,
    // 245    õ     LATIN SMALL LETTER O WITH TILDE
    UNDEFINED,
    // 246    ö     LATIN SMALL LETTER O WITH DIAERESIS
    UNDEFINED,
    // 247    ÷     DIVISION SIGN
    UNDEFINED,
    // 248    ø     LATIN SMALL LETTER O WITH STROKE
    UNDEFINED,
    // 249    ù     LATIN SMALL LETTER U WITH GRAVE
    UNDEFINED,
    // 250    ú     LATIN SMALL LETTER U WITH ACUTE
    UNDEFINED,
    // 251    û     LATIN SMALL LETTER U WITH CIRCUMFLEX
    UNDEFINED,
    // 252    ü     LATIN SMALL LETTER U WITH DIAERESIS
    UNDEFINED,
    // 253    ý     LATIN SMALL LETTER Y WITH ACUTE
    UNDEFINED,
    // 254    þ     LATIN SMALL LETTER THORN
    UNDEFINED,
    // 255    ÿ     LATIN SMALL LETTER Y WITH DIAERESIS
    UNDEFINED
};

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
        // look the character up and type it
        kb_type(keys[serial_char]);
    }
    
    //kb_transmit(18, 7);
    //kb_transmit(IN_E, OUT_3);
}

void kb_type(struct key raw_char) {
    // supported char?
    if(!raw_char.in) {
        Serial.print("Flo du Idiot\n");
        return;
    }

    // press modifier keys

    // press basic key
    kb_transmit(raw_char.in, raw_char.out);
}

void kb_transmit(uint8_t in, uint8_t out) {
    // wait for scan time slot and press key
    for(uint8_t i=0; i<3; ++i) {
        while(!digitalRead(in)) {};
        digitalWrite(out, HIGH);
        while(digitalRead(in)) {};
        digitalWrite(out, LOW);
    }
    for(uint8_t i=0; i<3; ++i) {
        while(!digitalRead(in)) {};
        while(digitalRead(in)) {};
    }
}
