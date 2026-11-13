typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Obj_823927F0 {
    char base[0x20];
    __vector4 a;        /* 0x20 */
    __vector4 b;        /* 0x30 */
    __vector4 c;        /* 0x40 */
    float f50;          /* 0x50 */
    int pad54[3];
    int f60;            /* 0x60 */
} Obj_823927F0;

extern void fn_822C5B18(Obj_823927F0 *, const Obj_823927F0 *);

Obj_823927F0 *fn_823927F0(Obj_823927F0 *self, const Obj_823927F0 *o)
{
    fn_822C5B18(self, o);
    self->a = o->a;
    self->b = o->b;
    self->c = o->c;
    self->f50 = o->f50;
    self->f60 = o->f60;
    return self;
}
