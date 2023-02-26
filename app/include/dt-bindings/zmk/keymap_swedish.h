

#pragma once

//#include <dt-bindings/zmk/keys.h>



/*
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ § │ 1 │ 2 │ 3 │ 4 │ 5 │ 6 │ 7 │ 8 │ 9 │ 0 │ + │ ´ │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │ Q │ W │ E │ R │ T │ Y │ U │ I │ O │ P │ Å │ ¨ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │ A │ S │ D │ F │ G │ H │ J │ K │ L │ Ö │ Ä │ ' │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ < │ Z │ X │ C │ V │ B │ N │ M │ , │ . │ - │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define SE_SCTR  GRAVE  // §
#define SE_1     N1     // 1
#define SE_2     N2     // 2
#define SE_3     N3     // 3
#define SE_4     N4     // 4
#define SE_5     N5     // 5
#define SE_6     N6     // 6
#define SE_7     N7     // 7
#define SE_8     N8     // 8
#define SE_9     N9     // 9
#define SE_0     N0     // 0
#define SE_PLUS  MINUS  // +
#define SE_ACAC  EQUAL  // ´ (dead)
// Row 2
#define SE_Q     Q      // Q
#define SE_W     W      // W
#define SE_E     E      // E
#define SE_R     R      // R
#define SE_T     T      // T
#define SE_Y     Y      // Y
#define SE_U     U      // U
#define SE_I     I      // I
#define SE_O     O      // O
#define SE_P     P      // P
#define SE_AO    LBKT   // Å
#define SE_DRSS  RBKT   // ¨ (dead)
// Row 3
#define SE_A     A      // A
#define SE_S     S      // S
#define SE_D     D      // D
#define SE_F     F      // F
#define SE_G     G      // G
#define SE_H     H      // H
#define SE_J     J      // J
#define SE_K     K      // K
#define SE_L     L      // L
#define SE_OE    SEMI   // Ö
#define SE_AE    SQT    // Ä
#define SE_SQT   NUHS   // '
// Row 4
#define SE_LT    NUBS   // <
#define SE_Z     Z      // Z
#define SE_X     X      // X
#define SE_C     C      // C
#define SE_V     V      // V
#define SE_B     B      // B
#define SE_N     N      // N
#define SE_M     M      // M
#define SE_COMMA COMMA  // ,
#define SE_DOT   DOT    // .
#define SE_MINUS SLASH  // -

/* Shifted numbers and symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │ ½ │ ! │ " │ # │ ¤ │ % │ & │ / │ ( │ ) │ = │ ? │ ` │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ ^ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │ * │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ > │   │   │   │   │   │   │   │ ; │ : │ _ │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define SE_HALF  LS(SE_SECT)  // ½
#define SE_EXCL  LS(SE_1)     // !
#define SE_DQT   LS(SE_2)     // "
#define SE_HASH  LS(SE_3)     // #
#define SE_SCAR  LS(SE_4)     // ¤
#define SE_PRCNT LS(SE_5)     // %
#define SE_AMPS  LS(SE_6)     // &
#define SE_SLASH LS(SE_7)     // /
#define SE_LPAR  LS(SE_8)     // (
#define SE_RPAR  LS(SE_9)     // )
#define SE_EQL   LS(SE_0)     // =
#define SE_QMARK LS(SE_PLUS)  // ?
#define SE_GRAVE LS(SE_ACAC)  // ` (dead)
// Row 2
#define SE_CARET LS(SE_DRSS)  // ^ (dead)
// Row 3
#define SE_STAR  LS(SE_SQT)   // *
// Row 4
#define SE_GT    LS(SE_LT)    // >
#define SE_SEMI  LS(SE_COMMA) // ;
#define SE_COLON LS(SE_DOT)   // :
#define SE_UNDER LS(SE_MINUS)  // _

/* RAlt symbols
 * ┌───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───┬───────┐
 * │   │   │ @ │ £ │ $ │ € │   │ { │ [ │ ] │ } │ \ │   │       │
 * ├───┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─────┤
 * │     │   │   │   │   │   │   │   │   │   │   │   │ ~ │     │
 * ├─────┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┬──┴┐    │
 * │      │   │   │   │   │   │   │   │   │   │   │   │   │    │
 * ├────┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤
 * │    │ | │   │   │   │   │   │   │ µ │   │   │   │          │
 * ├────┼───┴┬──┴─┬─┴───┴───┴───┴───┴───┴──┬┴───┼───┴┬────┬────┤
 * │    │    │    │                        │    │    │    │    │
 * └────┴────┴────┴────────────────────────┴────┴────┴────┴────┘
 */
// Row 1
#define SE_AT    RALT(SE_2)    // @
#define SE_PND   RALT(SE_3)    // £
#define SE_DLLR  RALT(SE_4)    // $
#define SE_EURO  RALT(SE_5)    // €
#define SE_LBRC  RALT(SE_7)    // {
#define SE_LBKT  RALT(SE_8)    // [
#define SE_RBKT  RALT(SE_9)    // ]
#define SE_RBRC  RALT(SE_0)    // }
#define SE_BSLH  RALT(SE_PLUS) // (backslash)
// Row 2
#define SE_TILDE RALT(SE_SQT)  // ~ (dead)
// Row 4
#define SE_PIPE  RALT(SE_LT)   // |
#define SE_MICRO RALT(M)       // µ


