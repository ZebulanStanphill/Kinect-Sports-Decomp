typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Entry_82510EB8 {
    char pad0[0x10];
    void *target;           /* 0x10 */
    unsigned short id;      /* 0x14 */
    char pad16[2];
    int kind;               /* 0x18 */
} Entry_82510EB8;

typedef struct Self_82510EB8 {
    void *f0;
    void *context;          /* 0x04 */
} Self_82510EB8;

extern __vector4 *fn_82510F40(__vector4 *out, Self_82510EB8 *self, unsigned short id, short kind);
extern int fn_82560100(void *context, void *target, __vector4 *position, float f, __vector4 *offset,
                       int c, int d, int e);

void fn_82510EB8(Self_82510EB8 *self, Entry_82510EB8 **entry)
{
    Entry_82510EB8 *e = *entry;
    void **target = &e->target;
    __vector4 position;

    if (e->target != 0) {
        fn_82510F40(&position, self, e->id, (short)e->kind);
        fn_82560100(self->context, target, &position, 0.0f, 0, 0, 0, 0);
    }
}
