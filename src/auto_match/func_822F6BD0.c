// Builds the vector (0, 0, distance, 0) from fn_822F5B38, scales x and z when the owner's mode
// word is 0, lets fn_822E5DE0 adjust it and returns it through the result pointer.
// The vector is built the way XNA Math's XMVectorSet does (four lvlx loads merged with vrlimi).
// The 0.0f literals are the game's LTCG-pooled zero: the unit needs the pool alias
// __real@00000000=ltcg_pool_0_0f (objects.json "pool_aliases").
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vrlimi(__vector4 a, __vector4 b, unsigned int mask, unsigned int rotate);

typedef struct Owner_822F6BD0 {
    char pad0[0x2c];
    int mode;               // 0x2c
} Owner_822F6BD0;

typedef struct Obj_822F6BD0 {
    char pad0[0xc];
    Owner_822F6BD0 *owner;  // 0x0c
} Obj_822F6BD0;

extern float lbl_82192730[];

float fn_822F5B38(Obj_822F6BD0 *self);
void fn_822E5DE0(__vector4 *out, Owner_822F6BD0 *owner, __vector4 v);

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

__vector4 *fn_822F6BD0(__vector4 *result, Obj_822F6BD0 *self)
{
    __vector4 v;
    Owner_822F6BD0 *owner;
    float x, z, k;
    int mode;

    z = fn_822F5B38(self);
    owner = self->owner;
    mode = owner->mode;
    v = VectorSet(0.0f, 0.0f, z, 0.0f);
    if (mode == 0) {
        k = lbl_82192730[1];
        v.vector4_f32[0] *= k;
        v.vector4_f32[2] *= k;
    }
    fn_822E5DE0(&v, owner, v);
    *result = v;
    return result;
}
