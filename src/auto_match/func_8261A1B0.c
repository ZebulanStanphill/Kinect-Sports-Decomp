typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltw(__vector4 v, unsigned int i);
void __stvewx(__vector4 v, void *base, int offset);

typedef struct Float3_8261A1B0 {
    float x, y, z;
} Float3_8261A1B0;

typedef struct Segment_8261A1B0 {
    Float3_8261A1B0 start;
    Float3_8261A1B0 end;
    int id;
} Segment_8261A1B0;

static __forceinline void StoreFloat3(Float3_8261A1B0 *out, __vector4 v)
{
    __vector4 x = __vspltw(v, 0);
    __vector4 y = __vspltw(v, 1);
    __vector4 z = __vspltw(v, 2);
    __stvewx(x, out, 0);
    __stvewx(y, out, 4);
    __stvewx(z, out, 8);
}

void fn_8261A1B0(Segment_8261A1B0 *self, const __vector4 *start, const __vector4 *end, int id)
{
    StoreFloat3(&self->start, *start);
    StoreFloat3(&self->end, *end);
    self->id = id;
}
