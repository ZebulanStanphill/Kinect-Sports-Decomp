// If the object's source is ready (fn_827F3D78), copies its 0x20-byte record and writes the
// record's position as a vector (x, y, z, 0) (XNA Math XMVectorSet shape); returns whether it did.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __lvlx(const void *base, int offset);
__vector4 __vrlimi(__vector4 a, __vector4 b, unsigned int mask, unsigned int rotate);

typedef struct Record_822C8A98 {
    char pad[0x10];
    float x;        // 0x10
    float y;        // 0x14
    float z;        // 0x18
    float pad1c;
} Record_822C8A98;

typedef struct Source_822C8A98 Source_822C8A98;

typedef struct Holder_822C8A98 {
    int pad0;
    Source_822C8A98 *source;    // 0x04
} Holder_822C8A98;

typedef struct Obj_822C8A98 {
    char pad[0x80];
    Holder_822C8A98 *holder;    // 0x80
} Obj_822C8A98;

extern const float ltcg_pool_0_0f;

unsigned char fn_827F3D78(Source_822C8A98 *source);
Record_822C8A98 *fn_827F4018(Source_822C8A98 *source);
void *memcpy(void *dst, const void *src, unsigned int size);

static __forceinline __vector4 VectorSet(float x, float y, float z, float w)
{
    __vector4 vx = __lvlx(&x, 0);
    __vector4 vy = __lvlx(&y, 0);
    __vector4 vz = __lvlx(&z, 0);
    __vector4 vw = __lvlx(&w, 0);

    vx = __vrlimi(vx, vy, 4, 3);
    vz = __vrlimi(vz, vw, 4, 3);
    return __vrlimi(vx, vz, 3, 2);
}

int fn_822C8A98(Obj_822C8A98 *self, __vector4 *out)
{
    Record_822C8A98 record;

    if (fn_827F3D78(self->holder->source)) {
        memcpy(&record, fn_827F4018(self->holder->source), sizeof(record));
        *out = VectorSet(record.x, record.y, record.z, ltcg_pool_0_0f);
        return 1;
    }
    return 0;
}
