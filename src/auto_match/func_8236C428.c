typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);
void *memcpy(void *dst, const void *src, unsigned int size);

typedef struct State_8236C428 {
    __vector4 v0;   /* 0x00 */
    __vector4 v10;  /* 0x10 */
    __vector4 v20;  /* 0x20 */
    __vector4 v30;  /* 0x30 */
    float f40;      /* 0x40 */
    int i44;        /* 0x44 */
    float f48;      /* 0x48 */
    int i4c;        /* 0x4c */
    int i50;        /* 0x50 */
    unsigned int i54;      /* 0x54 */
    int i58;        /* 0x58 */
    int i5c;        /* 0x5c */
    int i60;        /* 0x60 */
    int pad64[3];
} State_8236C428;

typedef struct Obj_8236C428 {
    char pad[0xd90];
    State_8236C428 state;
} Obj_8236C428;

extern const __vector4 lbl_82196750;

static __forceinline void Store(__vector4 *d, __vector4 v)
{
    *d = v;
}

void fn_8236C428(Obj_8236C428 *self)
{
    State_8236C428 s;

    Store(&s.v20, __VMXGetReg(77));
    s.v0 = lbl_82196750;
    Store(&s.v30, __VMXGetReg(77));
    s.i44 = 0;
    s.i50 = -1;
    s.f40 = 0.0f;
    s.i54 = 0xffffffff;
    s.f48 = 0.0f;
    s.i5c = 0;
    s.i60 = 0;
    self->state = s;
}
