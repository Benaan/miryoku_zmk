// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define U_TAPPING_TERM 200

#define MIRYOKU_LAYER_BASE \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
U_LMT(LGUI, A),    U_LMT(LALT, R),    U_LMT(LCTRL, S),   U_LMT(LSHFT, T),   &kp G,             &kp M,             U_RMT(LSHFT, N),   U_RMT(LCTRL, E),   U_RMT(LALT, I),    U_RMT(LGUI, O),    \
&kp Z,             &kp X,             &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp ESC,           U_LT(U_NAV, SPC),  U_LT(U_SYM, RET),  U_LT(U_SYM, TAB),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP


#define MIRYOKU_LAYER_TAP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp G,             &kp M,             &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp SPC,           U_HT(LSHFT, TAB),  U_HT(LCTRL, ESC),  &kp TAB,           &kp BSPC,          &kp DEL,           U_NP,              U_NP


#define MIRYOKU_LAYER_NAV \
&kp LPAR,          &kp RPAR,          &kp RET,           &kp SEMICOLON,     &kp DEL,           U_NA,              &u_caps_word,      U_NA,              U_NA,              U_NA,              \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         &kp BSPC,          U_NA,              &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             &kp INS,           &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp TAB,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
&kp DLLR,          &kp PRCT,          &kp AMPS,          &kp PIPE,          &kp CRRT,          U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
&kp COLON,         &kp LBRC,          &kp RBRC,          &kp LPAR,          &kp PLUS,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp HASH,          &kp AT,            &kp EXCL,          &kp EQL,           &kp TILDE,         U_NA,              U_NA,              U_NA,              U_NA,              U_NA,              \
U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP


#define MIRYOKU_LAYER_NUM \
&kp LBKT,          &kp NUM_7,         &kp NUM_8,         &kp NUM_9,         &kp RBKT,          U_NA,              U_NA,              U_NA,              U_NA,              U_BOOT,            \
&kp SEMI,          &kp NUM_4,         &kp NUM_5,         &kp NUM_6,         &kp ASTRK,         U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp GRAVE,         &kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp BSLH,          U_NA,              &kp C_PP,          &kp C_NEXT,        U_NA,              U_NA,              \
U_NP,              U_NP,              &kp DOT,           &kp NUM_0,         &kp MINUS,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP



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

