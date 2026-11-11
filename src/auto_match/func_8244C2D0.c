typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vrlimi(__vector4 a, __vector4 b, unsigned int mask, unsigned int rotate);
__vector4 __vaddfp(__vector4 a, __vector4 b);

typedef struct Slot_8244C2D0 {
    int active;             /* 0x00 */
    int pad04[3];
    __vector4 position;     /* 0x10 */
    __vector4 pad20;
} Slot_8244C2D0;

typedef struct Inner_8244C2D0 {
    char pad0[0x50];
    __vector4 origin;       /* 0x50 */
} Inner_8244C2D0;

typedef struct Ref_8244C2D0 {
    int pad0;
    Inner_8244C2D0 *inner;  /* 0x04 */
} Ref_8244C2D0;

typedef struct Model_8244C2D0 {
    char pad0[0x174];
    Ref_8244C2D0 *ref;      /* 0x174 */
} Model_8244C2D0;

typedef struct Data_8244C2D0 {
    Model_8244C2D0 *model;      /* 0x000 */
    char pad4[0x23c];
    Slot_8244C2D0 slots[1];     /* 0x240 */
} Data_8244C2D0;

typedef struct Owner_8244C2D0 {
    char pad0[0x40];
    Data_8244C2D0 *data;    /* 0x40 */
    float *offsetsA;        /* 0x44 */
    float *offsetsB;        /* 0x48 */
} Owner_8244C2D0;

extern float lbl_831C78F0;

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

void fn_8244C2D0(__vector4 *out, Owner_8244C2D0 *owner, float t, unsigned char index)
{
    Data_8244C2D0 *data = owner->data;

    if (data->slots[index].active != 0) {
        *out = data->slots[index].position;
    } else {
        float z = (owner->offsetsA[1] - t) * lbl_831C78F0;
        *out = __vaddfp(data->model->ref->inner->origin, VectorSet(0.0f, 0.0f, z, 0.0f));
    }
}
