typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vrlimi(__vector4 a, __vector4 b, unsigned int mask, unsigned int rotate);
__vector4 __vaddfp(__vector4 a, __vector4 b);

typedef struct Slot_82447D08 {
    int active; /* 0x00 */
    int pad04[3];
    __vector4 position; /* 0x10 */
    __vector4 pad20;
} Slot_82447D08;

typedef struct Inner_82447D08 {
    char pad0[0x10];
    float heading; /* 0x10 */
    char pad14[0xc];
    __vector4 offset; /* 0x20 */
} Inner_82447D08;

typedef struct Ref_82447D08 {
    int pad0;
    Inner_82447D08 *inner; /* 0x04 */
} Ref_82447D08;

typedef struct Model_82447D08 {
    char pad0[0x174];
    Ref_82447D08 *ref; /* 0x174 */
} Model_82447D08;

typedef struct Data_82447D08 {
    Model_82447D08 *model; /* 0x000 */
    char pad4[0x23c];
    Slot_82447D08 slots[1]; /* 0x240 */
} Data_82447D08;

typedef struct Owner_82447D08 {
    char pad0[0x40];
    Data_82447D08 *data; /* 0x40 */
    float *offsetsA;     /* 0x44 */
    float *offsetsB;     /* 0x48 */
} Owner_82447D08;

extern float lbl_831C78F0;
extern __vector4 fn_8255AE78(__vector4 v, float angle);

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

__vector4 *fn_82447D08(__vector4 *out, Owner_82447D08 *owner, float t, unsigned char index)
{
    Data_82447D08 *data = owner->data;

    if (data->slots[index].active != 0) {
        *out = data->slots[index].position;
    } else {
        float z = lbl_831C78F0 * t;
        __vector4 rotated = fn_8255AE78(VectorSet(0.0f, 0.0f, z, 0.0f), data->model->ref->inner->heading);

        *out = __vaddfp(owner->data->model->ref->inner->offset, rotated);
    }
    return out;
}
