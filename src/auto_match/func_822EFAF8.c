// Builds the vector (0, 0, target->z, 0), sets x to +-lbl_831CD0D8[0] when fn_82397F30 accepts the
// owner's handle, scales x and z when the owner's mode word is 0, lets fn_822E5DE0 adjust it and
// returns it through the result pointer (same shape as Matching func_822F6BD0).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vrlimi(__vector4 a, __vector4 b, unsigned int mask, unsigned int rotate);

typedef struct Owner_822EFAF8 {
    char pad0[0x28];
    int flipped;            // 0x28
    int mode;               // 0x2c
} Owner_822EFAF8;

typedef struct Target_822EFAF8 {
    char pad0[0x14];
    float z;                // 0x14
} Target_822EFAF8;

typedef struct Obj_822EFAF8 {
    char pad0[0xc];
    Owner_822EFAF8 *owner;  // 0x0c
    int handle;             // 0x10
    Target_822EFAF8 *target; // 0x14
} Obj_822EFAF8;

extern float lbl_82192730[];
extern float lbl_831CD0D8[];

int fn_82397F30(int handle);
void fn_822E5DE0(__vector4 *out, Owner_822EFAF8 *owner, __vector4 v);

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

static __forceinline __vector4 Offset(Obj_822EFAF8 *self)
{
    __vector4 v;
    float k;
    int flipped;

    v = VectorSet(0.0f, 0.0f, self->target->z, 0.0f);
    v.vector4_f32[1] = 0.0f;
    if (fn_82397F30(self->handle) != 0) {
        v.vector4_f32[0] = self->owner->flipped != 0 ? -lbl_831CD0D8[0] : lbl_831CD0D8[0];
    }
    return v;
}

__vector4 *fn_822EFAF8(__vector4 *result, Obj_822EFAF8 *self)
{
    __vector4 v;
    __vector4 out;
    Owner_822EFAF8 *owner;
    float k;

    v = Offset(self);
    owner = self->owner;
    if (owner->mode == 0) {
        k = lbl_82192730[1];
        v.vector4_f32[0] *= k;
        v.vector4_f32[2] *= k;
    }
    fn_822E5DE0(&out, owner, v);
    *result = out;
    return result;
}
