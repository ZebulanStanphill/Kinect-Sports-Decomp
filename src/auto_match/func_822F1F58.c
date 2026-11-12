// Builds the vector (distance, 0, target->z, 0): distance is 0 when the owner is disabled, the
// target's fixed distance in mode 2, else a random value between two target limits (chosen by the
// handle's current entry). Scales x and z when the owner's mode word is 0, lets fn_822E5DE0 adjust
// it and returns it through the result pointer (same shape as Matching func_822EFAF8).
// The random range is an inline helper called in both arms (tail-merged by the compiler).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vrlimi(__vector4 a, __vector4 b, unsigned int mask, unsigned int rotate);

typedef struct Entry_822F1F58 {
    char pad0[0xc];
    int active;             // 0x0c
} Entry_822F1F58;

typedef struct Ref_822F1F58 {
    Entry_822F1F58 *ptr;
    unsigned int rc;
} Ref_822F1F58;

typedef struct Owner_822F1F58 {
    char pad0[0x24];
    int disabled;           // 0x24
    char pad28[0x4];
    int mode;               // 0x2c
} Owner_822F1F58;

typedef struct State_822F1F58 {
    char pad0[0x178];
    int mode;               // 0x178
} State_822F1F58;

typedef struct Target_822F1F58 {
    char pad0[0x14];
    float z;                // 0x14
    char pad18[0x10];
    float nearMin;          // 0x28
    float nearMax;          // 0x2c
    float farMin;           // 0x30
    float farMax;           // 0x34
    float fixed;            // 0x38
} Target_822F1F58;

typedef struct Obj_822F1F58 {
    char pad0[0xc];
    Owner_822F1F58 *owner;  // 0x0c
    State_822F1F58 *state;  // 0x10
    Target_822F1F58 *target; // 0x14
} Obj_822F1F58;

extern float lbl_82192730[];
extern const float lbl_821CA45C[];
extern unsigned int lbl_83265A28;

Ref_822F1F58 *fn_822E5F48(Ref_822F1F58 *out, Owner_822F1F58 *owner);
void fn_822315A0(unsigned int rc);
void fn_822E5DE0(__vector4 *out, Owner_822F1F58 *owner, __vector4 v);

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

static __forceinline float Random01(void)
{
    union {
        unsigned int u;
        float f;
    } r;

    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    r.u = (lbl_83265A28 & 0x7fffff) | 0x3f800000;
    return r.f - lbl_821CA45C[1];
}

static __forceinline float RandomRange(float lo, float hi)
{
    return (hi - lo) * Random01() + lo;
}

__vector4 *fn_822F1F58(__vector4 *result, Obj_822F1F58 *self)
{
    __vector4 v;
    Owner_822F1F58 *owner;
    float distance;
    int active;
    float k;
    int mode;
    Ref_822F1F58 ref;

    if (self->owner->disabled != 0) {
        distance = 0.0f;
    } else if (self->state->mode == 2) {
        distance = self->target->fixed;
    } else {
        active = fn_822E5F48(&ref, self->owner)->ptr->active;
        if (ref.rc != 0)
            fn_822315A0(ref.rc);
        if (active != 0)
            distance = RandomRange(self->target->nearMin, self->target->nearMax);
        else
            distance = RandomRange(self->target->farMin, self->target->farMax);
    }
    owner = self->owner;
    mode = owner->mode;
    v = VectorSet(distance, 0.0f, self->target->z, 0.0f);
    if (mode == 0) {
        k = lbl_82192730[1];
        v.vector4_f32[0] *= k;
        v.vector4_f32[2] *= k;
    }
    fn_822E5DE0(&v, owner, v);
    *result = v;
    return result;
}
