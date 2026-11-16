typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float scalar[4];
    unsigned int words[4];
} __vector4;

extern __vector4 __vspltw(__vector4, unsigned int);

static __forceinline void SetAll(__vector4 *vector, float value)
{
    vector->scalar[0] = value;
    *vector = __vspltw(*vector, 0);
}

void fn_830838A8(char *self)
{
    __vector4 *corner;
    *(int *)self = -1;
    {
        char *type = &self[4];
        *type = 2;
    }
    self[5] = 1;
    corner = (__vector4 *)(self + 0x10);
    SetAll(corner, 3.40282e+38f);
    ((float *)self)[8] = -3.40282e+38f;
    ++corner;
    *corner = __vspltw(*corner, 0);
}
