// Copies a block of settings from the source record into the target: three floats, three
// (a, b) float pairs, words, the float3 at +0xd0 as a vector (w cleared through the game's
// reserved zero vector v77 and select mask v67) and four more floats. Returns 1.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);
__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

typedef struct Float3_825E2048 {
    float x, y, z;
} Float3_825E2048;

typedef struct Pair_825E2048 {
    float a, b;
} Pair_825E2048;

typedef struct Source_825E2048 {
    char pad00[0x9c];
    float float9C;              // 0x9c
    float floatA0;              // 0xa0
    float floatA4;              // 0xa4
    int wordA8;                 // 0xa8
    int wordAC;                 // 0xac
    float floatB0;              // 0xb0
    Pair_825E2048 pairs[3];     // 0xb4
    int wordCC;                 // 0xcc
    Float3_825E2048 position;   // 0xd0
    float floatDC;              // 0xdc
    char padE0[0x10];
    float floatF0;              // 0xf0
    float floatF4;              // 0xf4
    float floatF8;              // 0xf8
} Source_825E2048;

typedef struct Target_825E2048 {
    char pad00[0x34];
    float float34;              // 0x34
    float float38;              // 0x38
    float float3C;              // 0x3c
    char pad40[0x3c];
    Pair_825E2048 pairs[3];     // 0x7c
    int word94;                 // 0x94
    int word98;                 // 0x98
    float float9C;              // 0x9c
    char padA0[0x40];
    int wordE0;                 // 0xe0
    char padE4[0xc];
    __vector4 position;         // 0xf0
    char pad100[8];
    float float108;             // 0x108
    char pad10C[0x54];
    float float160;             // 0x160
    float float164;             // 0x164
    float float168;             // 0x168
} Target_825E2048;

static __forceinline __vector4 LoadFloat3(const Float3_825E2048 *src)
{
    __vector4 vl, vr;

    vr = __lvrx(src, 12);
    vr = __vsldoi(vr, vr, 1 << 2);
    vl = __lvlx(src, 0);
    return __vor(vl, vr);
}

int fn_825E2048(void *self, Target_825E2048 *target, const Source_825E2048 *src)
{
    __vector4 v, zero, mask;
    int i;

    target->float34 = src->float9C;
    target->float38 = src->floatA0;
    target->float3C = src->floatA4;
    target->float9C = src->floatB0;
    for (i = 0; i < 3; i++) {
        target->pairs[i].b = src->pairs[i].b;
        target->pairs[i].a = src->pairs[i].a;
    }
    target->word94 = src->wordA8;
    target->word98 = src->wordAC;
    target->wordE0 = src->wordCC;
    v = LoadFloat3(&src->position);
    zero = __VMXGetReg(77);
    mask = __VMXGetReg(67);
    target->position = __vsel(v, zero, mask);
    target->float108 = src->floatDC;
    target->float160 = src->floatF0;
    target->float164 = src->floatF4;
    target->float168 = src->floatF8;
    return 1;
}
