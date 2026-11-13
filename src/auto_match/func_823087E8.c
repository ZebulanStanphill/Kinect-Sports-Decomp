typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
typedef struct Src_823087E8 { char pad[0x80]; __vector4 v80; } Src_823087E8;
typedef struct Obj_823087E8 {
    int pad0[3];
    Src_823087E8 *src;   /* 0x0c */
    int f10;             /* 0x10 */
    int f14;             /* 0x14 */
    int pad18[2];
    __vector4 v20;       /* 0x20 */
    __vector4 v30;       /* 0x30 */
    int f40;             /* 0x40 */
    int f44;             /* 0x44 */
    int f48;             /* 0x48 */
} Obj_823087E8;
extern __vector4 *fn_822C4448(__vector4 *out, Src_823087E8 *src, int b, int c, int d);

void fn_823087E8(Obj_823087E8 *self)
{
    __vector4 tmp;
    self->f40 = 0;
    self->f14 = 0;
    self->v30 = *fn_822C4448(&tmp, self->src, self->f10, 1, 0);
    self->v20 = self->src->v80;
    self->f48 = 1;
    self->f44 = 0;
}
