typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Config_82377C68 {
    char pad[4];
    unsigned char enabled;
} Config_82377C68;

typedef struct Target_82377C68 {
    char pad[0x78];
    char *base;
} Target_82377C68;

typedef struct Link_82377C68 {
    char pad[0x88];
    Target_82377C68 *target;
} Link_82377C68;

typedef struct Self_82377C68 {
    char pad[0x84];
    Link_82377C68 *link;
} Self_82377C68;

extern Config_82377C68 *lbl_832975B0;
extern Config_82377C68 *fn_82250A18(void);
extern void fn_823913F0(void *obj, __vector4 a, __vector4 b, __vector4 c, float t, int value, int x, int y,
                        float u, float v);

static __forceinline Config_82377C68 *GetConfig(void)
{
    if (lbl_832975B0 != 0)
        return lbl_832975B0;
    return fn_82250A18();
}

void fn_82377C68(Self_82377C68 *self, __vector4 a, __vector4 b, __vector4 c, float t, int value, int x, int y,
                 float u, float v)
{
    if (GetConfig()->enabled && self->link != 0 && self->link->target != 0)
        fn_823913F0(self->link->target->base + 0x268, a, b, c, t, value, x, y, u, v);
}
