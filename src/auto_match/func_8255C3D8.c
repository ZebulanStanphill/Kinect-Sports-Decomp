// Copies a spawn description into an object: position (float3 -> vector, w cleared via v77/v67,
// stored back with stvewx), rotation, type, two shorts through an inline setter, ids, optional e.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);
__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __vspltw(__vector4 v, unsigned int i);
void __stvewx(__vector4 v, void *base, int offset);

typedef struct Float3_8255C3D8 {
    float x, y, z;
} Float3_8255C3D8;

typedef struct Float4_8255C3D8 {
    float x, y, z, w;
} Float4_8255C3D8;

typedef struct Desc_8255C3D8 {
    char pad00[2];
    unsigned short a;                // 0x02
    unsigned short b;                // 0x04
    char pad06[2];
    int c;                           // 0x08
    unsigned char d;                 // 0x0c
    char pad0d[3];
    Float3_8255C3D8 position;        // 0x10
    Float4_8255C3D8 rotation;        // 0x1c
    int e;                           // 0x2c
} Desc_8255C3D8;

typedef struct Object_8255C3D8 {
    char pad000[0x84];
    int type;                        // 0x084
    char pad088[0x94 - 0x88];
    int e;                           // 0x094
    Float3_8255C3D8 position;        // 0x098
    Float4_8255C3D8 rotation;        // 0x0a4
    char pad0b4[0x4e8 - 0xb4];
    unsigned short a;                // 0x4e8
    unsigned short b;                // 0x4ea
    char pad4ec[4];
    int c;                           // 0x4f0
    int d;                           // 0x4f4
} Object_8255C3D8;

static __forceinline __vector4 LoadFloat3(const Float3_8255C3D8 *src)
{
    __vector4 vl, vr, zero, mask;

    vl = __lvlx(src, 0);
    vr = __lvrx(src, 12);
    vr = __vsldoi(vr, vr, 1 << 2);
    vl = __vor(vl, vr);
    zero = __VMXGetReg(77);
    mask = __VMXGetReg(67);
    return __vsel(vl, zero, mask);
}

static __forceinline void StoreFloat3(Float3_8255C3D8 *dst, __vector4 v)
{
    __vector4 x = __vspltw(v, 0);
    __vector4 y = __vspltw(v, 1);
    __vector4 z = __vspltw(v, 2);

    __stvewx(x, dst, 0);
    __stvewx(y, dst, 4);
    __stvewx(z, dst, 8);
}

static __forceinline void SetRange(Object_8255C3D8 *self, unsigned short a, unsigned short b)
{
    self->a = a;
    self->b = b;
}

void fn_8255C3D8(Object_8255C3D8 *self, const Desc_8255C3D8 *desc, int type)
{
    StoreFloat3(&self->position, LoadFloat3(&desc->position));
    self->rotation.x = desc->rotation.x;
    self->rotation.y = desc->rotation.y;
    self->rotation.z = desc->rotation.z;
    self->rotation.w = desc->rotation.w;
    self->type = type;
    SetRange(self, desc->a, desc->b);
    self->c = desc->c;
    self->d = desc->d;
    if (desc->e != 0) {
        self->e = desc->e;
    }
}
