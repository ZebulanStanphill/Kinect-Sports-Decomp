// Fills a two-point description from a source record: both float3 points widened to vectors
// (w cleared through the reserved zero vector v77 and select mask v67), their radii, and the
// owner, type and user words.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);
__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

typedef struct Float3_82286928 {
    float x, y, z;
} Float3_82286928;

typedef struct Source_82286928 {
    Float3_82286928 points[2];  // 0x00
    char pad18[0x90];
    float radii[2];             // 0xa8
    char padB0[0x30];
    float scale;                // 0xe0
    int wordE4;                 // 0xe4
    int wordE8;                 // 0xe8
    char padEC[0x288];
    int word374;                // 0x374
    char pad378[0x50];
    int word3C8;                // 0x3c8
    int word3CC;                // 0x3cc
} Source_82286928;

typedef struct Desc_82286928 {
    int type;                   // 0x00
    int pointCount;             // 0x04
    int radiusCount;            // 0x08
    int wordC;                  // 0x0c
    __vector4 points[2];        // 0x10
    char pad30[0xd0];
    float radii[2];             // 0x100
    char pad108[0xc];
    float scale;                // 0x114
    int word118;                // 0x118
    int word11C;                // 0x11c
    int word120;                // 0x120
    int word124;                // 0x124
    int word128;                // 0x128
    int word12C;                // 0x12c
    int word130;                // 0x130
    int word134;                // 0x134
    int word138;                // 0x138
    int word13C;                // 0x13c
    int user;                   // 0x140
    void *owner;                // 0x144
} Desc_82286928;

static __forceinline __vector4 LoadFloat3(const Float3_82286928 *src)
{
    __vector4 vl, vr;

    vr = __lvrx(src, 12);
    vl = __lvlx(src, 0);
    vr = __vsldoi(vr, vr, 1 << 2);
    return __vor(vl, vr);
}

void fn_82286928(void *owner, Desc_82286928 *desc, Source_82286928 *src, int type, int user)
{
    int count = 2;
    int i;

    for (i = 0; i < count; i++) {
        __vector4 v = LoadFloat3(&src->points[i]);
        __vector4 zero = __VMXGetReg(77);
        __vector4 mask = __VMXGetReg(67);
        desc->points[i] = __vsel(v, zero, mask);
        desc->radii[i] = src->radii[i];
    }
    desc->type = type;
    desc->pointCount = count;
    desc->radiusCount = count;
    desc->scale = src->scale;
    desc->wordC = 0;
    desc->word118 = 1;
    desc->word13C = 0;
    desc->word11C = src->wordE4;
    desc->word120 = src->wordE8;
    desc->word124 = src->word374;
    desc->word128 = 0;
    desc->word12C = src->word3C8;
    desc->word138 = src->word3CC;
    desc->word130 = 0;
    desc->word134 = 0;
    desc->user = user;
    desc->owner = owner;
}
