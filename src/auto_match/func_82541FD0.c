typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vrlimi(__vector4 a, __vector4 b, int mask, int rotate);

typedef struct State_82541FD0 {
    void *device;               /* 0x0000 */
    char pad4[0xaaa0];
    int enabled;                /* 0xaaa4 */
    char padAAA8[0x18];
    __vector4 vAAC0;            /* 0xaac0 */
    __vector4 vAAD0;            /* 0xaad0 */
    __vector4 vAAE0;            /* 0xaae0 */
    __vector4 vAAF0;            /* 0xaaf0 */
    char padAB00[0xf0];
    __vector4 vABF0;            /* 0xabf0 */
    __vector4 vAC00;            /* 0xac00 */
    float scale;                /* 0xac10 */
    float bias;                 /* 0xac14 */
    char padAC18[8];
    __vector4 vAC20;            /* 0xac20 */
} State_82541FD0;

void fn_825AF948(void *device);
void fn_825AFB90(void *device, const __vector4 *a, const __vector4 *b, const __vector4 *c,
                 const __vector4 *d, const __vector4 *e, const __vector4 *f, const __vector4 *g,
                 const __vector4 *h, const __vector4 *i);

static __forceinline __vector4 VectorSet(float x, float y, float z, float w)
{
    __vector4 vx, vy, vz, vw;

    vx = __lvlx(&x, 0);
    vy = __lvlx(&y, 0);
    vz = __lvlx(&z, 0);
    vw = __lvlx(&w, 0);
    vx = __vrlimi(vx, vy, 4, 3);
    vz = __vrlimi(vz, vw, 4, 3);
    return __vrlimi(vx, vz, 3, 2);
}

void fn_82541FD0(State_82541FD0 *self, int pass)
{
    __vector4 scale, bias;

    if (pass != 1 && pass != 0x80) {
        if (self->enabled == 0) {
            fn_825AF948(self->device);
        } else {
            scale = VectorSet(self->scale, self->scale, self->scale, 0.0f);
            bias = VectorSet(self->bias, 0.0f, 0.0f, 0.0f);
            fn_825AFB90(self->device, &self->vAAD0, &self->vAAC0, &self->vAAF0, &self->vAAE0,
                        &self->vABF0, &self->vAC00, &scale, &bias, &self->vAC20);
        }
    }
}
