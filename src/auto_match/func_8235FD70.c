extern float lbl_821CA45C[];
extern unsigned int lbl_83265A28;

static __forceinline float rnd(void)
{
    union { unsigned int i; float f; } value;
    lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
    value.i = lbl_83265A28 & 0x7fffff | 0x3f800000;
    return value.f - lbl_821CA45C[1];
}

typedef struct Obj_8235FD70 {
    char pad0[0xb2c];
    float base;
    float cur;
    char pad1[0x2b20 - 0xb34];
    unsigned int id;
    char pad2[0x2c04 - 0x2b24];
    float value;
} Obj_8235FD70;

void fn_8235FD70(Obj_8235FD70 *o, unsigned int id, int randomise)
{
    if (id == o->id) {
        float v;
        if (randomise != 0) {
            float base = o->base;
            float cur = o->cur;
            v = base + (cur - base) * rnd();
        } else {
            v = 0.0f;
        }
        o->value = v;
    }
}
