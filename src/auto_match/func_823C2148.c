/* /O1 /QVMXReserve: v75 and v77 are the game's reserved vectors, read with __VMXGetReg. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Ref_823C2148 {
    void *obj; /* 0x00 */
    void *rep; /* 0x04 */
} Ref_823C2148;

typedef struct Source_823C2148 {
    char pad0[0x50];
    __vector4 value; /* 0x50 */
} Source_823C2148;

typedef struct Self_823C2148 {
    char pad0[0x4b0];
    void *panel; /* 0x4b0 */
    char pad4b4[0xd50 - 0x4b4];
    unsigned char inactive; /* 0xd50 */
    unsigned char dirty;    /* 0xd51 */
    unsigned char done;     /* 0xd52 */
    char padd53[0xd];
    __vector4 current; /* 0xd60 */
    __vector4 target;  /* 0xd70 */
    char padd80[0xe10 - 0xd80];
    Source_823C2148 *source; /* 0xe10 */
} Self_823C2148;

__vector4 __VMXGetReg(int n);
extern void fn_822315A0(void *rep);
extern Ref_823C2148 *fn_82356F98(Ref_823C2148 *ref);
extern void fn_8236BCD8(Self_823C2148 *self);
extern void fn_823DB6B8(void *panel, Ref_823C2148 *ref, int mode, __vector4 a, __vector4 b, float x,
                        float y);

void fn_823C2148(Self_823C2148 *self, unsigned char active, unsigned char reset)
{
    __vector4 value;
    Ref_823C2148 tmp;
    Ref_823C2148 *ref;
    __vector4 zero;
    __vector4 ext;

    value = self->source->value;
    self->inactive = active == 0;
    self->dirty = 1;
    self->done = 0;
    self->current = value;
    self->target = value;
    if (reset != 0) {
        fn_8236BCD8(self);
        ext = __VMXGetReg(75);
        zero = __VMXGetReg(77);
        ref = fn_82356F98(&tmp);
        if (self->panel != 0) {
            fn_823DB6B8(self->panel, ref, 0, zero, ext, 0.0f, 0.0f);
        }
        if (ref->rep != 0) {
            fn_822315A0(ref->rep);
        }
    }
}
