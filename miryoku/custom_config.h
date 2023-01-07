#define U_TAPPING_TERM 300

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_MT(LGUI, A),     U_MT(LALT, R),     U_MT(LCTRL, S),    U_MT(LSHFT, T),    &kp G,             &kp M,             U_MT(RSHFT, N),    U_MT(RCTRL, E),    U_MT(RALT, I),     U_MT(LGUI, O),     \
&kp Z,             &kp X,             &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         &kp DOT,           &kp SEMICOLON,     \
U_NP,              U_NP,              U_MT(LCTRL, ESC),  U_LT(U_NAV, SPC),  U_MT(LSHFT, TAB),  U_MT(LCTRL, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP

#define MIRYOKU_LAYER_TAP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp G,             &kp M,             &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         &kp DOT,           &kp SEMICOLON,     \
U_NP,              U_NP,              U_MT(LCTRL, ESC),  &kp SPC,           U_MT(LSHFT, TAB),  &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_NUM \
&kp PLUS,          &kp NUM_7,         &kp NUM_8,         &kp NUM_9,         &kp SLASH,         &kp PIPE,          &kp EXCLAMATION,   &kp AMPERSAND,     &kp DOLLAR,        &kp GRAVE,         \
&kp MINUS,         &kp NUM_4,         &kp NUM_5,         &kp NUM_6,         &kp BACKSLASH,     &kp UNDERSCORE     &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp EQUAL,         &kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp ASTERISK,      &kp HASH,          &kp QUESTION,      &kp PERCENT,       &kp AT_SIGN,       &kp TILDE,         \
U_NP,              U_NP,              &kp DOT,           &kp NUM_0,         &kp COMMA,         U_NA,              U_NA,              &kp CARET,         U_NP,              U_NP

/ {
    combos {
        compatible = "zmk,combos";
        combo_esc {
            timeout-ms = <50>;
            key-positions = <6 7>;
            bindings = <&tog 2>;
        };
    };
};
