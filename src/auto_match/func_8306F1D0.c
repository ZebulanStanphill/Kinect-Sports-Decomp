typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float v[4];
} __vector4;

extern void fn_83075D30(__vector4 *, void *, int);
extern void fn_83075D80(void *, int, __vector4);
extern float fn_8306E7E8(float, float);

typedef struct State_8306F1D0 {
    char pad[0xd20];
    float rate;
    int enabled;
} State_8306F1D0;

void fn_8306F1D0(State_8306F1D0 *self, int *table, void *data, int index)
{
    __vector4 value;
    if (self->enabled && table[index + 0x58] == 1) {
        fn_83075D30(&value, data, index);
        value.v[1] = fn_8306E7E8(value.v[1], 0.08f / self->rate);
        fn_83075D80(data, index, value);
    }
}
