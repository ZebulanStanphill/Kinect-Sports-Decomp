// make_shared-style factory: allocates a reference-count block (vtable lbl_821AE598) holding a
// 0x30-byte value, constructs the value from a packed source (a word and two float3, widened
// to vectors with w cleared through the game's reserved zero vector v77 and select mask v67)
// and returns the shared pointer pair.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __VMXGetReg(int n);
__vector4 __lvlx(const void *base, int offset);
__vector4 __lvrx(const void *base, int offset);
__vector4 __vsldoi(__vector4 a, __vector4 b, int shift);
__vector4 __vor(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);

extern unsigned int lbl_821AE598;
extern void *fn_8265C9E0(unsigned int n);

typedef struct Float3_82322440 {
    float x, y, z;
} Float3_82322440;

typedef struct Source_82322440 {
    int a;                   // 0x00
    Float3_82322440 b;       // 0x04
    Float3_82322440 c;       // 0x10
} Source_82322440;

typedef struct Val_82322440 {
    int a;                   // 0x00
    __vector4 b;             // 0x10
    __vector4 c;             // 0x20
} Val_82322440;

typedef struct Block_82322440 {
    void *vt;                // 0x00
    int uses;                // 0x04
    int weaks;               // 0x08
    Val_82322440 val;        // 0x10
} Block_82322440;

typedef struct Ptr_82322440 {
    Val_82322440 *ptr;
    Block_82322440 *block;
} Ptr_82322440;

static __forceinline __vector4 LoadFloat3(const Float3_82322440 *src)
{
    __vector4 vl, vr;

    vr = __lvrx(src, 12);
    vl = __lvlx(src, 0);
    vr = __vsldoi(vr, vr, 1 << 2);
    return __vor(vl, vr);
}

// Float3 widened to a vector with w cleared (zero vector v77 selected through mask v67).
static __forceinline __vector4 LoadFloat3W0(const Float3_82322440 *src)
{
    __vector4 v, zero, mask;

    v = LoadFloat3(src);
    zero = __VMXGetReg(77);
    mask = __VMXGetReg(67);
    return __vsel(v, zero, mask);
}

Ptr_82322440 *fn_82322440(Ptr_82322440 *out, const Source_82322440 *src)
{
    Block_82322440 *blk = (Block_82322440 *)fn_8265C9E0(0x40);
    if (blk != 0) {
        Val_82322440 *v;
        blk->uses = 1;
        blk->vt = &lbl_821AE598;
        blk->weaks = 1;
        v = &blk->val;
        if (v != 0) {
            v->a = src->a;
            v->b = LoadFloat3W0(&src->b);
            v->c = LoadFloat3W0(&src->c);
        }
    } else {
        blk = 0;
    }
    out->block = blk;
    out->ptr = &blk->val;
    return out;
}
