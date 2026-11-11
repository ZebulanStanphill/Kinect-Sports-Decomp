// Resets an effect emitter: scale 1, state 0, active, six points set to the owner's float3 at
// +0xb58 and its position to the float3 at +0xbac (w cleared through v77/v67).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);
__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

typedef struct Float3_82424E00 {
    float x, y, z;
} Float3_82424E00;

typedef struct Emitter_82424E00 {
    int state;                       // 0x000
    char pad004[0x19c];
    __vector4 position;              // 0x1a0
    float scale;                     // 0x1b0
    char pad1b4[4];
    Float3_82424E00 points[6];       // 0x1b8
    unsigned char active;            // 0x200
} Emitter_82424E00;

typedef struct Effects_82424E00 {
    char pad000[0x4c0];
    Emitter_82424E00 emitter;        // 0x4c0
} Effects_82424E00;

typedef struct Owner_82424E00 {
    char pad0000[0xb58];
    Float3_82424E00 a;               // 0xb58
    char padb64[0xbac - 0xb64];
    Float3_82424E00 b;               // 0xbac
    char padbb8[0x2cdc - 0xbb8];
    Effects_82424E00 *effects;       // 0x2cdc
} Owner_82424E00;

typedef struct Self_82424E00 {
    char pad0[8];
    Owner_82424E00 *owner;           // 0x8
} Self_82424E00;

extern const float lbl_821CA45C[2];

static __forceinline __vector4 LoadFloat3(const Float3_82424E00 *src)
{
    __vector4 vl, vr, zero, mask;

    vr = __lvrx(src, 12);
    vl = __lvlx(src, 0);
    vr = __vsldoi(vr, vr, 1 << 2);
    vl = __vor(vl, vr);
    zero = __VMXGetReg(77);
    mask = __VMXGetReg(67);
    return __vsel(vl, zero, mask);
}

void fn_82424E00(Self_82424E00 *self)
{
    Owner_82424E00 *owner = self->owner;
    Emitter_82424E00 *e = &owner->effects->emitter;
    __vector4 a = LoadFloat3(&owner->a);
    __vector4 b = LoadFloat3(&owner->b);

    e->scale = lbl_821CA45C[1];
    e->state = 0;
    e->active = 1;
    e->points[0].x = a.vector4_f32[0];
    e->points[0].y = a.vector4_f32[1];
    e->points[0].z = a.vector4_f32[2];
    e->points[1].x = a.vector4_f32[0];
    e->points[1].y = a.vector4_f32[1];
    e->points[1].z = a.vector4_f32[2];
    e->points[2].x = a.vector4_f32[0];
    e->points[2].y = a.vector4_f32[1];
    e->points[2].z = a.vector4_f32[2];
    e->points[3].x = a.vector4_f32[0];
    e->points[3].y = a.vector4_f32[1];
    e->points[3].z = a.vector4_f32[2];
    e->points[4].x = a.vector4_f32[0];
    e->points[4].y = a.vector4_f32[1];
    e->points[4].z = a.vector4_f32[2];
    e->points[5].x = a.vector4_f32[0];
    e->points[5].y = a.vector4_f32[1];
    e->points[5].z = a.vector4_f32[2];
    e->position = b;
}
