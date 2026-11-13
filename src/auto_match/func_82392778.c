typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Obj_82392778 {
    char base[0x20];
    __vector4 a;        /* 0x20 */
    __vector4 b;        /* 0x30 */
    __vector4 c;        /* 0x40 */
    float f50;          /* 0x50 */
    int pad54[3];
    int f60;            /* 0x60 */
    int pad64[3];
    unsigned char f70;  /* 0x70 */
} Obj_82392778;

extern void fn_822C5B18(Obj_82392778 *, const Obj_82392778 *);

Obj_82392778 *fn_82392778(Obj_82392778 *self, const Obj_82392778 *o)
{
    fn_822C5B18(self, o);
    self->a = o->a;
    self->b = o->b;
    self->c = o->c;
    self->f50 = o->f50;
    self->f60 = o->f60;
    self->f70 = o->f70;
    return self;
}
