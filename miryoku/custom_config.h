// Copyright 2021 Manna Harbour
// https://github.com/manna-harbour/miryoku


#define U_TAPPING_TERM 300
//#define MIRYOKU_KLUDGE_MOUSEKEYSPR

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