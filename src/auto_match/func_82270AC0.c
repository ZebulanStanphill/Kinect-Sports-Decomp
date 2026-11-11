// Copies this object's settings into the block at +0x240 of the singleton fn_82270B70
// returns: a clamped pair (when the value at +0x10 is not positive the pool constant
// lbl_821954B0[0x20] and the value at +0xc are used instead), the value at +0xc, the float3
// at +0 widened to a vector through the reserved zero/select registers v77/v67, and two
// more floats.
// The 0.0f literal is the game's LTCG-pooled zero: the unit needs the pool alias
// __real@00000000=ltcg_pool_0_0f (objects.json "pool_aliases").
// lbl_821954B0[0x20] is read as pool base (lis/addi lbl_821954B0) plus lfs 0x80, inside the
// 0xA28-byte pool symbol, the way other matched units index it.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __VMXGetReg(int n);

typedef struct Float3_82270AC0 {
    float x, y, z;
} Float3_82270AC0;

typedef struct Obj_82270AC0 {
    Float3_82270AC0 direction;       // 0x00
    float f0c;                       // 0x0c
    float f10;                       // 0x10
    float f14;                       // 0x14
    float f18;                       // 0x18
} Obj_82270AC0;

typedef struct Block_82270AC0 {
    char pad00[0x50];
    float f50;                       // 0x50
    float f54;                       // 0x54
    float f58;                       // 0x58
    float f5c;                       // 0x5c
    __vector4 direction;             // 0x60
    float f70;                       // 0x70
    float f74;                       // 0x74
} Block_82270AC0;

typedef struct Manager_82270AC0 {
    char pad000[0x240];
    Block_82270AC0 *block;           // 0x240
} Manager_82270AC0;

extern Manager_82270AC0 *fn_82270B70(void);
extern const float lbl_821954B0[];

static __forceinline __vector4 LoadFloat3(const Float3_82270AC0 *src)
{
    __vector4 vl, vr;

    vr = __lvrx(src, 12);
    vl = __lvlx(src, 0);
    vr = __vsldoi(vr, vr, 1 << 2);
    return __vor(vl, vr);
}

void fn_82270AC0(Obj_82270AC0 *self)
{
    Block_82270AC0 *block = fn_82270B70()->block;
    __vector4 v, zero, mask;

    if (self->f10 <= 0.0f) {
        block->f5c = lbl_821954B0[0x80 / 4];
        block->f58 = self->f0c;
    } else {
        block->f5c = self->f10;
        block->f58 = 0.0f;
    }
    block->f54 = self->f0c;
    v = LoadFloat3(&self->direction);
    zero = __VMXGetReg(77);
    mask = __VMXGetReg(67);
    block->direction = __vsel(v, zero, mask);
    block->f70 = self->f18;
    block->f74 = self->f14;
    block->f50 = 0.0f;
}
