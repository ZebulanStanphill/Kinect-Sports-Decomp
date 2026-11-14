typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vpermwi(__vector4 v, int control);
__vector4 __vcmpgtfpR(__vector4 a, __vector4 b, unsigned int *cr);

typedef struct Vec_82462D48 {
    __vector4 v;
} Vec_82462D48;

typedef struct Zone_82462D48 {
    char pad0[0x1c0];
    __vector4 min;          /* 0x1c0 */
    __vector4 max;          /* 0x1d0 */
    char pad1e0[0x270 - 0x1e0];
    int enabled;            /* 0x270 */
} Zone_82462D48;

extern void *fn_82F4EBC0(unsigned char id);
extern unsigned char fn_82F4EFF8(void *device);
extern void fn_82F4EEC0(__vector4 *out, void *device);

static __forceinline int Vector3Greater(__vector4 a, __vector4 b)
{
    unsigned int cr = 0;

    a = __vpermwi(a, 24);
    b = __vpermwi(b, 24);
    __vcmpgtfpR(a, b, &cr);
    return (cr & 0x80) != 0;
}

unsigned char fn_82462D48(Zone_82462D48 *self)
{
    __vector4 pos;

    if (self->enabled == 0) {
        return 1;
    }
    if (fn_82F4EBC0(0) == 0) {
        return 0;
    }
    if (fn_82F4EFF8(fn_82F4EBC0(0))) {
    } else {
        return 0;
    }
    fn_82F4EEC0(&pos, fn_82F4EBC0(0));
    if (Vector3Greater(pos, self->min) && Vector3Greater(self->max, pos)) {
        return 1;
    }
    return 0;
}
