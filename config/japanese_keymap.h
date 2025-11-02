#include <dt-bindings/zmk/keys.h>

// 日本語キーボードレイアウト定義 (JIS配列)
// QMKのkeymap_japanese.hをZMK用に変換

// 数字キー
#define JP_1    N1      // 1
#define JP_2    N2      // 2
#define JP_3    N3      // 3
#define JP_4    N4      // 4
#define JP_5    N5      // 5
#define JP_6    N6      // 6
#define JP_7    N7      // 7
#define JP_8    N8      // 8
#define JP_9    N9      // 9
#define JP_0    N0      // 0
#define JP_MINS MINUS   // -
#define JP_CIRC EQUAL   // ^
#define JP_YEN  INT3    // ¥

// 英字キー (上段)
#define JP_Q    Q       // Q
#define JP_W    W       // W
#define JP_E    E       // E
#define JP_R    R       // R
#define JP_T    T       // T
#define JP_Y    Y       // Y
#define JP_U    U       // U
#define JP_I    I       // I
#define JP_O    O       // O
#define JP_P    P       // P
#define JP_AT   LBKT    // @
#define JP_LBRC RBKT    // [
#define JP_EISU CAPS    // Eisū (英数)

// 英字キー (中段)
#define JP_A    A       // A
#define JP_S    S       // S
#define JP_D    D       // D
#define JP_F    F       // F
#define JP_G    G       // G
#define JP_H    H       // H
#define JP_J    J       // J
#define JP_K    K       // K
#define JP_L    L       // L
#define JP_SCLN SEMI    // ;
#define JP_COLN SQT     // :
#define JP_RBRC BSLH    // ]

// 英字キー (下段)
#define JP_Z    Z       // Z
#define JP_X    X       // X
#define JP_C    C       // C
#define JP_V    V       // V
#define JP_B    B       // B
#define JP_N    N       // N
#define JP_M    M       // M
#define JP_COMM COMMA   // ,
#define JP_DOT  DOT     // .
#define JP_SLSH SLASH   // /
#define JP_BSLS INT1    // (backslash)

// 日本語入力キー
#define JP_MHEN INT5    // Muhenkan (無変換)
#define JP_HENK INT4    // Henkan (変換)

// Shiftキーとの組み合わせ
#define JP_EXLM LS(JP_1)    // !
#define JP_DQUO LS(JP_2)    // "
#define JP_HASH LS(JP_3)    // #
#define JP_DLR  LS(JP_4)    // $
#define JP_PERC LS(JP_5)    // %
#define JP_AMPR LS(JP_6)    // &
#define JP_QUOT LS(JP_7)    // '
#define JP_LPRN LS(JP_8)    // (
#define JP_RPRN LS(JP_9)    // )
#define JP_EQL  LS(JP_MINS) // =
#define JP_TILD LS(JP_CIRC) // ~
#define JP_PIPE LS(JP_YEN)  // |
#define JP_GRV  LS(JP_AT)   // `
#define JP_LCBR LS(JP_LBRC) // {
#define JP_CAPS LS(JP_EISU) // Caps Lock
#define JP_PLUS LS(JP_SCLN) // +
#define JP_ASTR LS(JP_COLN) // *
#define JP_RCBR LS(JP_RBRC) // }
#define JP_LABK LS(JP_COMM) // <
#define JP_RABK LS(JP_DOT)  // >
#define JP_QUES LS(JP_SLSH) // ?
#define JP_UNDS LS(JP_BSLS) // _
