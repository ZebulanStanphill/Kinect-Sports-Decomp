typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Config_82377EF8 {
    char pad[4];
    unsigned char enabled;
} Config_82377EF8;

typedef struct Target_82377EF8 {
    char pad[0x78];
    char *base;
} Target_82377EF8;

typedef struct Link_82377EF8 {
    char pad[0x88];
    Target_82377EF8 *target;
} Link_82377EF8;

typedef struct Self_82377EF8 {
    char pad[0x84];
    Link_82377EF8 *link;
} Self_82377EF8;

extern Config_82377EF8 *lbl_832975B0;
extern Config_82377EF8 *fn_82250A18(void);
extern void fn_82390A80(void *obj, __vector4 a, __vector4 b, __vector4 c, float t, int value, int flag);

static __forceinline Config_82377EF8 *GetConfig(void)
{
    if (lbl_832975B0 != 0)
        return lbl_832975B0;
    return fn_82250A18();
}

void fn_82377EF8(Self_82377EF8 *self, __vector4 a, __vector4 b, __vector4 c, float t, int value, unsigned char flag)
{
    if (GetConfig()->enabled && self->link != 0 && self->link->target != 0)
        fn_82390A80(self->link->target->base + 0x28, a, b, c, t, value, flag != 0);
}
