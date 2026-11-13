typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Obj_823926F0 {
    char base[0x20];
    __vector4 a;        /* 0x20 */
    __vector4 b;        /* 0x30 */
    __vector4 c;        /* 0x40 */
    float f50;          /* 0x50 */
    int pad54[3];
    int f60;            /* 0x60 */
    int pad64[3];
    int f70;            /* 0x70 */
    int pad74[3];
    int f80;            /* 0x80 */
    int pad84[3];
    float f90;          /* 0x90 */
} Obj_823926F0;

extern void fn_822C5B18(Obj_823926F0 *, const Obj_823926F0 *);

Obj_823926F0 *fn_823926F0(Obj_823926F0 *self, const Obj_823926F0 *o)
{
    fn_822C5B18(self, o);
    self->a = o->a;
    self->b = o->b;
    self->c = o->c;
    self->f50 = o->f50;
    self->f60 = o->f60;
    self->f70 = o->f70;
    self->f80 = o->f80;
    self->f90 = o->f90;
    return self;
}
