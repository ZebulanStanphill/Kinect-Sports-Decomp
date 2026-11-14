typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Config_82377A48 {
    char pad[4];
    unsigned char enabled;
} Config_82377A48;

typedef struct Target_82377A48 {
    char pad[0x78];
    char *base;
} Target_82377A48;

typedef struct Link_82377A48 {
    char pad[0x88];
    Target_82377A48 *target;
} Link_82377A48;

typedef struct Self_82377A48 {
    char pad[0x84];
    Link_82377A48 *link;
} Self_82377A48;

extern Config_82377A48 *lbl_832975B0;
extern Config_82377A48 *fn_82250A18(void);
extern void fn_823910A8(void *obj, __vector4 a, __vector4 b, __vector4 c, float t, int value);

static __forceinline Config_82377A48 *GetConfig(void)
{
    if (lbl_832975B0 != 0)
        return lbl_832975B0;
    return fn_82250A18();
}

void fn_82377A48(Self_82377A48 *self, __vector4 a, __vector4 b, __vector4 c, float t, int value)
{
    if (GetConfig()->enabled && self->link != 0 && self->link->target != 0)
        fn_823910A8(self->link->target->base + 0x1d8, a, b, c, t, value);
}
