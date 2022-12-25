// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku


#define U_TAPPING_TERM 400
#define MIRYOKU_KLUDGE_MOUSEKEYSPR


#define XXX &none
#define MIRYOKU_LAYOUTMAPPING_KYRIA(\
     K00, K01, K02, K03, K04,                          K05, K06, K07, K08, K09, \
     K10, K11, K12, K13, K14,                          K15, K16, K17, K18, K19, \
     K20, K21, K22, K23, K24,                          K25, K26, K27, K28, K29, \
     N30, N31, K32, K33, K34,                          K35, K36, K37, N38, N39 \
)\
XXX  K00  K01  K02  K03  K04                           K05  K06  K07  K08  K09  XXX  \
&kp TAB  K10  K11  K12  K13  K14                           K15  K16  K17  K18  K19  XXX  \
XXX  K20  K21  K22  K23  K24  XXX  XXX       XXX  XXX  K25  K26  K27  K28  K29  XXX  \
               XXX  K32  K33  K34  &kp ESC   XXX  K35  K36  K37  XXX
#define MIRYOKU_KLUDGE_THUMBCOMBOS_LEFT 42 43
#define MIRYOKU_KLUDGE_THUMBCOMBOS_RIGHT 46 47



#define MIRYOKU_LAYER_EXTRA \
&kp Q,             &kp W,             &kp F,             &kp P,             &kp B,             &kp J,             &kp L,             &kp U,             &kp Y,             &kp SQT,           \
&kp A,             &kp R,             &kp S,             &kp T,             &kp G,             &kp M,             U_MT(LSHFT, N),    U_MT(LCTRL, E),    U_MT(LALT, I),     U_MT(LGUI, O),     \
&kp Z,             &kp X,             &kp C,             &kp D,             &kp V,             &kp K,             &kp H,             &kp COMMA,         U_MT(RALT, DOT),   U_LT(U_BUTTON, SLASH),\
U_NP,              U_NP,              &kp SPC,           &kp LSHFT,         &kp LCTRL,         U_LT(U_SYM, RET),  U_LT(U_NUM, BSPC), U_LT(U_FUN, DEL),  U_NP,              U_NP
