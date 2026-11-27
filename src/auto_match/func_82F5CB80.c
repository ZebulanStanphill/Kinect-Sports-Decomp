#include "xdk/vectorintrinsics.h"

typedef struct State_82F5CB80 {
    __vector4 vector; /* 0x00 */
    float f10;        /* 0x10 */
    int i14;          /* 0x14 */
    int i18;          /* 0x18 */
    int i1C;          /* 0x1c */
    float f20;        /* 0x20 */
    float f24;        /* 0x24 */
    float f28;        /* 0x28 */
    float f2C;        /* 0x2c */
    int i30;          /* 0x30 */
    int i34;          /* 0x34 */
    int i38;          /* 0x38 */
    float f3C;        /* 0x3c */
    int i40;          /* 0x40 */
} State_82F5CB80;

extern float lbl_83263160;
extern float lbl_83263164;
extern float lbl_83263168;
extern float lbl_8326316C;
extern float lbl_83263170;
extern float lbl_83263174;
extern float lbl_83263178;
extern int lbl_8326317C;
extern int lbl_83263180;

State_82F5CB80 *fn_82F5CB80(State_82F5CB80 *state, int unused, int value, int i40)
{
    state->i40 = i40;
    state->i18 = 1;
    state->i1C = 0;
    state->f28 = 0.0f;
    state->i34 = 0;
    state->f3C = 0.0f;
    state->i38 = 1;
    state->f10 = 0.0f;
    state->i30 = 0;
    state->f20 = 0.0f;
    state->i14 = 1;
    state->f24 = 0.0f;
    state->f2C = 0.0f;
    state->vector = __vspltisw(0);
    if (lbl_8326317C == 0) {
        lbl_8326317C = 1;
        lbl_83263178 = 0.7f;
        lbl_83263180 = value;
        lbl_83263174 = 20.0f;
        lbl_83263170 = 1000.0f;
        lbl_8326316C = 0.6f;
        lbl_83263168 = 1.0f;
        lbl_83263164 = 2.0f;
        lbl_83263160 = 1.5f;
    }
    return state;
}
