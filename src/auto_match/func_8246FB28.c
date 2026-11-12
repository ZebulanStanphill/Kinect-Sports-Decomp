// Copies four (x, z) tuning pairs of lbl_831C6B70 (+0x74..+0x90) into the area object of the
// owner as XMVectorSet(x, 0, z, 0) vectors (two corners at +0x00/+0x10, two at +0x40/+0x50).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vrlimi(__vector4 a, __vector4 b, unsigned int mask, unsigned int rotate);

typedef struct Pair_8246FB28 {
    float x, z;
} Pair_8246FB28;

typedef struct Tuning_8246FB28 {
    char pad0[0x74];
    Pair_8246FB28 corner[4];    /* 0x74 */
} Tuning_8246FB28;

typedef struct Area_8246FB28 {
    __vector4 a[2];     /* 0x00 */
    __vector4 pad20[2];
    __vector4 b[2];     /* 0x40 */
} Area_8246FB28;

typedef struct Owner_8246FB28 {
    char pad0[0x50];
    Area_8246FB28 *area;    /* 0x50 */
} Owner_8246FB28;

typedef struct Self_8246FB28 {
    char pad0[8];
    Owner_8246FB28 *owner;  /* 0x08 */
} Self_8246FB28;

extern Tuning_8246FB28 lbl_831C6B70;

static __forceinline __vector4 VectorSet(float x, float y, float z, float w)
{
    __vector4 vx, vy, vz, vw;

    vx = __lvlx(&x, 0);
    vy = __lvlx(&y, 0);
    vz = __lvlx(&z, 0);
    vw = __lvlx(&w, 0);
    vx = __vrlimi(vx, vy, 0x4, 3);
    vz = __vrlimi(vz, vw, 0x4, 3);
    return __vrlimi(vx, vz, 0x3, 2);
}

static __forceinline void SetCorners(Area_8246FB28 *area, __vector4 a0, __vector4 a1, __vector4 b0, __vector4 b1)
{
    area->a[0] = a0;
    area->a[1] = a1;
    area->b[0] = b0;
    area->b[1] = b1;
}

void fn_8246FB28(Self_8246FB28 *self)
{
    SetCorners(self->owner->area,
               VectorSet(lbl_831C6B70.corner[0].x, 0.0f, lbl_831C6B70.corner[0].z, 0.0f),
               VectorSet(lbl_831C6B70.corner[1].x, 0.0f, lbl_831C6B70.corner[1].z, 0.0f),
               VectorSet(lbl_831C6B70.corner[2].x, 0.0f, lbl_831C6B70.corner[2].z, 0.0f),
               VectorSet(lbl_831C6B70.corner[3].x, 0.0f, lbl_831C6B70.corner[3].z, 0.0f));
}
