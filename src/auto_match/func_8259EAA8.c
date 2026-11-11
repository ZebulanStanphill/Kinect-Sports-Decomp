// Applies four 0x20-byte parameter blocks (the object's own at +0xab00 when its override
// flag at +0xaaa4 is set, otherwise the defaults in lbl_8326C070) through fn_825AFDF8, then
// sets vector shader constant 0xc6 to (lbl_82191EA0[75], 0, lbl_821954B0[391], 0).
// The vector is built the way XNA Math's XMVectorSet does on the VMX128 unit.
// The 0.0f literals are the game's LTCG-pooled zero: the unit needs the pool alias
// __real@00000000=ltcg_pool_0_0f (objects.json "pool_aliases").
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vrlimi(__vector4 a, __vector4 b, unsigned int mask, unsigned int rotate);

typedef struct Block_8259EAA8 {
    char data[0x20];
} Block_8259EAA8;

typedef struct Defaults_8259EAA8 {
    char pad00[0xd0];
    Block_8259EAA8 blocks[4];        // 0xd0
    char pad150[0xd0];
} Defaults_8259EAA8;

typedef struct Device_8259EAA8 {
    char pad0000[0xaaa4];
    int useOwnBlocks;                // 0xaaa4
    char padAAA8[0x58];
    Block_8259EAA8 blocks[4];        // 0xab00
} Device_8259EAA8;

extern Defaults_8259EAA8 lbl_8326C070;
extern const float lbl_82191EA0[];
extern const float lbl_821954B0[];

extern void fn_825AFDF8(Device_8259EAA8 *self, Block_8259EAA8 *a, Block_8259EAA8 *b,
                        Block_8259EAA8 *c, Block_8259EAA8 *d);
extern void fn_82543C70(void *self, unsigned int index, const __vector4 *values, unsigned int count);

static __forceinline __vector4 VectorSet(float x, float y, float z, float w)
{
    __vector4 vx, vy, vz, vw;

    vx = __lvlx(&x, 0);
    vy = __lvlx(&y, 0);
    vz = __lvlx(&z, 0);
    vw = __lvlx(&w, 0);
    vy = __vrlimi(vy, vw, 0x4, 3);
    vx = __vrlimi(vx, vz, 0x4, 3);
    return __vrlimi(vx, vy, 0x3, 2);
}

void fn_8259EAA8(Device_8259EAA8 *self)
{
    __vector4 v;

    if (self->useOwnBlocks == 0) {
        fn_825AFDF8(self, &lbl_8326C070.blocks[0], &lbl_8326C070.blocks[1],
                    &lbl_8326C070.blocks[2], &lbl_8326C070.blocks[3]);
    } else {
        fn_825AFDF8(self, &self->blocks[0], &self->blocks[1], &self->blocks[2], &self->blocks[3]);
    }
    v = VectorSet(lbl_82191EA0[0x12c / 4], 0.0f, lbl_821954B0[0x61c / 4], 0.0f);
    fn_82543C70(self, 0xc6, &v, 1);
}
