// Copies a block of settings from the source record into the object: nine floats and two
// words into +0x70..+0x98, the float3 at +0xa4 as a vector (w cleared through the game's
// reserved zero vector v77 and select mask v67) into +0x220, and three words into +0x230.
// Returns 1.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);
__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

typedef struct Float3_825E44F0 {
    float x, y, z;
} Float3_825E44F0;

typedef struct Source_825E44F0 {
    char pad00[0xa4];
    Float3_825E44F0 position;   // 0xa4
    int wordB0;                 // 0xb0
    int wordB4;                 // 0xb4
    int wordB8;                 // 0xb8
    float floatBC;              // 0xbc
    float floatC0;              // 0xc0
    int wordC4;                 // 0xc4
    int wordC8;                 // 0xc8
    float floatCC;              // 0xcc
    float floatD0;              // 0xd0
    float floatD4;              // 0xd4
    float floatD8;              // 0xd8
    float floatDC;              // 0xdc
    float floatE0;              // 0xe0
    float floatE4;              // 0xe4
} Source_825E44F0;

typedef struct Self_825E44F0 {
    char pad00[0x70];
    float float70;              // 0x70
    float float74;              // 0x74
    int word78;                 // 0x78
    int word7C;                 // 0x7c
    float float80;              // 0x80
    float float84;              // 0x84
    float float88;              // 0x88
    float float8C;              // 0x8c
    float float90;              // 0x90
    float float94;              // 0x94
    float float98;              // 0x98
    char pad9C[0x184];
    __vector4 position;         // 0x220
    int word230;                // 0x230
    int word234;                // 0x234
    int word238;                // 0x238
} Self_825E44F0;

static __forceinline __vector4 LoadFloat3(const Float3_825E44F0 *src)
{
    __vector4 vl, vr;

    vl = __lvlx(src, 0);
    vr = __lvrx(src, 12);
    vr = __vsldoi(vr, vr, 1 << 2);
    return __vor(vl, vr);
}

int fn_825E44F0(Self_825E44F0 *self, const Source_825E44F0 *src)
{
    __vector4 v, zero, mask;

    self->float80 = src->floatCC;
    self->float84 = src->floatD0;
    self->float88 = src->floatD4;
    self->float8C = src->floatD8;
    self->float70 = src->floatBC;
    self->float90 = src->floatDC;
    self->float94 = src->floatE0;
    self->word78 = src->wordC4;
    self->float74 = src->floatC0;
    self->float98 = src->floatE4;
    self->word7C = src->wordC8;
    v = LoadFloat3(&src->position);
    zero = __VMXGetReg(77);
    mask = __VMXGetReg(67);
    self->position = __vsel(v, zero, mask);
    self->word230 = src->wordB0;
    self->word234 = src->wordB4;
    self->word238 = src->wordB8;
    return 1;
}
