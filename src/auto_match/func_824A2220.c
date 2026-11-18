typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int);
__vector4 __lvlx(const void *, int);
__vector4 __vspltw(__vector4, unsigned int);
__vector4 __vmulfp(__vector4, __vector4);
extern double fabs(double);
extern float lbl_8218E8E8;

typedef struct Player_824A2220 {
    char pad[0x20];
    int category; /* 0x20 */
} Player_824A2220;

typedef struct Settings_824A2220 {
    char pad0[0x14];
    Player_824A2220 *players[2]; /* 0x14 */
    char pad1c[0xd0];
    float *bounds; /* 0xec */
} Settings_824A2220;

typedef struct Owner_824A2220 {
    char pad[0xb8];
    void *handle; /* 0xb8 */
} Owner_824A2220;

extern void *fn_82F50D98(void *);
extern int fn_82F4ECF8(void *);
extern Settings_824A2220 *fn_8249ABC0(void);
extern __vector4 *fn_8249CF88(__vector4 *, const float *, int);

static __forceinline int SelectPlayer_824A2220(Settings_824A2220 *settings, int category, int *selected)
{
    int index;
    for (index = 0; index < 2; index++) {
        if (settings->players[index]->category == category) {
            *selected = index;
            return 1;
        }
    }
    if (category >= 6) {
        *selected = 1;
        return 1;
    }
    return 0;
}

__vector4 *fn_824A2220(__vector4 *out, Owner_824A2220 *owner)
{
    int category;
    Settings_824A2220 *settings;
    int index;
    float *bounds;
    float extent;
    category = fn_82F4ECF8(fn_82F50D98(owner->handle));
    settings = fn_8249ABC0();
    if (SelectPlayer_824A2220(settings, category, &index)) {
        fn_8249CF88(out, settings->bounds, index);
        return out;
    }
    bounds = settings->bounds;
    extent = (float)fabs((bounds[1] - bounds[3]) * lbl_8218E8E8 + bounds[3]);
    *out = __vmulfp(__VMXGetReg(68), __vspltw(__lvlx(&extent, 0), 0));
    return out;
}
