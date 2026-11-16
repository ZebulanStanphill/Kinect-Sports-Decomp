typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float f[4];
    unsigned int u[4];
} __vector4;

extern __vector4 __vsubfp(__vector4, __vector4);
extern __vector4 __vaddfp(__vector4, __vector4);
extern __vector4 __vspltisw(int);
extern __vector4 __vrlimi(__vector4, __vector4, unsigned int, unsigned int);

typedef struct State_83080B40 {
    __vector4 rotation[3]; /* 0x00 */
    __vector4 unknown30;
    __vector4 minimum; /* 0x40 */
    __vector4 maximum; /* 0x50 */
    __vector4 unknown60[2];
    __vector4 position; /* 0x80 */
} State_83080B40;

extern void fn_82CE50D8(__vector4 *, const State_83080B40 *, const __vector4 *);

static __forceinline void Add_83080B40(__vector4 *value, __vector4 delta)
{
    *value = __vaddfp(*value, delta);
}

void fn_83080B40(const __vector4 *position, State_83080B40 *self)
{
    __vector4 delta = __vsubfp(*position, self->position);
    __vector4 transformed;
    self->position = *position;
    fn_82CE50D8(&transformed, self, &delta);
    transformed = __vrlimi(transformed, __vspltisw(0), 1, 0);
    Add_83080B40(&self->minimum, transformed);
    Add_83080B40(&self->maximum, transformed);
}
