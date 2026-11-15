typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float value[4];
} __vector4;

typedef struct Output_8306CC70 {
    __vector4 position; /* 0x00 */
    float first;        /* 0x10 */
    float second;       /* 0x14 */
} Output_8306CC70;

extern __vector4 *fn_8306D678(__vector4 *out, void *self);
extern float fn_8306D688(void *self);
extern float fn_8306D690(void *self);
extern int lbl_8315FA80;

int fn_8306CC70(unsigned char *self, Output_8306CC70 *out)
{
    int result = 0;
    if (!out) {
        result = 0x80070057;
    } else {
        __vector4 position;
        unsigned char *state = self + 0x78;
        float sign = -1.0f;
        out->position = *fn_8306D678(&position, state);
        if (lbl_8315FA80 == 0) {
            out->position.value[2] *= sign;
        }
        out->first = fn_8306D688(state);
        if (lbl_8315FA80 == 0) {
            out->first *= sign;
        }
        out->second = fn_8306D690(state);
    }
    return result;
}
