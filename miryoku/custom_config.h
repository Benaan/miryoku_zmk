// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku

#define U_TAPPING_TERM 200

#define MIRYOKU_LAYER_TAP \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp G,             &kp M,             &kp N,             &kp E,             &kp I,             &kp O,             \
&kp Z,             &kp X,             &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         &kp DOT,           &kp SLASH,         \
U_NP,              U_NP,              &kp SPC,           U_MT(LSHFT, TAB),  U_MT(LCTRL, ESC),  &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP


#define MIRYOKU_LAYER_NAV \
&kp LPAR,          &kp RPAR,          &kp RET,           &kp SEMICOLON,     &kp DEL,           U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             \
&kp LGUI,          &kp LALT,          &kp LCTRL,         &kp LSHFT,         &kp BSPC,          &u_caps_word,      &kp LEFT,          &kp DOWN,          &kp UP,            &kp RIGHT,         \
U_UND,             U_CUT,             U_CPY,             U_PST,             U_RDO,             &kp INS,           &kp HOME,          &kp PG_DN,         &kp PG_UP,         &kp END,           \
U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              &kp RET,           &kp BSPC,          &kp DEL,           U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
&kp DLLR,          &kp PRCT,          &kp AMPS,          &kp PIPE,          &kp CRRT,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp COLON,         &kp LBRC,          &kp RBRC,          &kp LPAR,          &kp PLUS,          U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp HASH,          &kp AT,            &kp EXCL,          &kp EQL,           &kp TILDE,         U_NA,              &u_to_U_SYM,       &u_to_U_MOUSE,     &kp RALT,          U_NA,              \
U_NP,              U_NP,              &kp LPAR,          &kp RPAR,          &kp UNDER,         U_NA,              U_NA,              U_NA,              U_NP,              U_NP


#define MIRYOKU_LAYER_NUM \
&kp LBKT,          &kp NUM_7,         &kp NUM_8,         &kp NUM_9,         &kp RBKT,          U_NA,              &u_to_U_BASE,      &u_to_U_EXTRA,     &u_to_U_TAP,       U_BOOT,            \
&kp SEMI,          &kp NUM_4,         &kp NUM_5,         &kp NUM_6,         &kp ASTRK,         U_NA,              &kp LSHFT,         &kp LCTRL,         &kp LALT,          &kp LGUI,          \
&kp GRAVE,         &kp NUM_1,         &kp NUM_2,         &kp NUM_3,         &kp BSLH,          U_NA,              &u_to_U_NUM,       &u_to_U_NAV,       &kp RALT,          U_NA,              \
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

