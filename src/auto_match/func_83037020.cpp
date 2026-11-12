// Assignment of a block with a 40-byte header and six 4x4 matrices (compiler-generated
// copy: header copied as a POD, each matrix through its own operator=).
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

struct Half_83037020 {
    __vector4 a, b;
    __forceinline Half_83037020 &operator=(const Half_83037020 &h)
    {
        a = h.a;
        b = h.b;
        return *this;
    }
};

struct Matrix_83037020 {
    Half_83037020 h[2];
    __forceinline Matrix_83037020 &operator=(const Matrix_83037020 &m)
    {
        h[0] = m.h[0];
        h[1] = m.h[1];
        return *this;
    }
};

struct Header_83037020 {
    int v[10];
};

struct Block_83037020 {
    Header_83037020 header;     // 0x00
    Matrix_83037020 m[6];       // 0x30
};

extern "C" Block_83037020 *fn_83037020(Block_83037020 *self, const Block_83037020 *other)
{
    int i;
    self->header = other->header;
    for (i = 0; i < 6; i++)
        self->m[i] = other->m[i];
    return self;
}
