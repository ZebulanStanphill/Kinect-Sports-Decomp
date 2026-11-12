// Copy assignment of a class that adds six matrices and a float to a base whose own copy
// assignment is fn_83037020. Each matrix copies as two 32-byte halves with their own operator=.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

struct Half_830372D0 {
    __vector4 a, b;
    __forceinline Half_830372D0 &operator=(const Half_830372D0 &h)
    {
        a = h.a;
        b = h.b;
        return *this;
    }
};

struct Matrix_830372D0 {
    Half_830372D0 lo, hi;
};

struct Base_830372D0 {
    char data[0x1b0];
};

struct Derived_830372D0 : Base_830372D0 {
    Matrix_830372D0 m[6];   // 0x1b0
    float f;                // 0x330
};

extern "C" Base_830372D0 *fn_83037020(Base_830372D0 *self, const Base_830372D0 *other);

extern "C" Derived_830372D0 *fn_830372D0(Derived_830372D0 *self, const Derived_830372D0 *other)
{
    fn_83037020(self, other);
    for (int i = 0; i < 6; i++)
        self->m[i] = other->m[i];
    self->f = other->f;
    return self;
}
