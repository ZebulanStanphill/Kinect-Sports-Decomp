typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Src_825D9DC0 {
    char pad0[0x5c0];
    __vector4 v5c0;          /* 0x5c0 */
    int f5d0;                /* 0x5d0 */
    float f5d4;              /* 0x5d4 */
    unsigned char b5d8;      /* 0x5d8 */
    char pad5d9[3];
    int f5dc;                /* 0x5dc */
} Src_825D9DC0;

typedef struct Obj_825D9DC0 {
    char pad0[0xa0];
    __vector4 va0;           /* 0xa0 */
    char padb0[0xa20 - 0xb0];
    int fa20;                /* 0xa20 */
    char pada24[0xb60 - 0xa24];
    float fb60;              /* 0xb60 */
    float fb64;              /* 0xb64 */
    int fb68;                /* 0xb68 */
    int fb6c;                /* 0xb6c */
    __vector4 vb70;          /* 0xb70 */
    __vector4 vb80;          /* 0xb80 */
    char padb90[4];
    int fb94;                /* 0xb94 */
} Obj_825D9DC0;

extern void fn_8261D538(Obj_825D9DC0 *self, int value);

int fn_825D9DC0(Obj_825D9DC0 *self, Src_825D9DC0 *src)
{
    self->fb64 = src->f5d4;
    self->fb60 = src->f5d4;
    self->fb6c = src->b5d8;
    self->fb68 = src->b5d8;
    self->fb94 = src->f5dc;
    fn_8261D538(self, src->f5d0);
    self->vb70 = self->va0;
    self->vb80 = src->v5c0;
    { int *p = &self->fa20; *p = 1; }
    return 1;
}
