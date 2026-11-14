typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vpermwi(__vector4 v, int control);
__vector4 __vcmpeqfpR(__vector4 a, __vector4 b, unsigned int *cr);

typedef struct Mover_82569740 {
    char pad0[0xa0];
    __vector4 direction;    /* 0xa0 */
    char padb0[0xc0];
    int moving;             /* 0x170 */
} Mover_82569740;

typedef struct Driver_82569740 {
    char pad0[0x10];
    __vector4 direction;    /* 0x10 */
    char pad20[4];
    unsigned char enabled;  /* 0x24 */
    char pad25[0xb7];
    Mover_82569740 *mover;  /* 0xdc */
} Driver_82569740;

extern void fn_82528948(Mover_82569740 *mover);
extern void fn_8252D970(Mover_82569740 *mover, float dt);

static __forceinline int Vector3Equal(__vector4 a, __vector4 b)
{
    unsigned int cr = 0;

    a = __vpermwi(a, 24);
    b = __vpermwi(b, 24);
    __vcmpeqfpR(a, b, &cr);
    return (cr & 0x80) != 0;
}

void fn_82569740(Driver_82569740 *self, float dt)
{
    Mover_82569740 *mover = self->mover;

    if (self->enabled) {
        const __vector4 *direction = &self->direction;
        if (!Vector3Equal(*direction, mover->direction)) {
            mover->direction = *direction;
            mover->moving = 0;
            fn_82528948(mover);
        }
    }
    fn_8252D970(mover, dt);
}
