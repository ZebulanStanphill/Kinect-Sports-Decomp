typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float v[4];
} __vector4;

typedef struct Self_8306D6D8 {
    char pad[0x1a60];
    __vector4 position;
    float pad70, scale;
    char pad78[4];
    unsigned char flip;
    char pad7d[7];
    float offset;
} Self_8306D6D8;

extern __vector4 fn_8306ED38(__vector4, float);

__vector4 *fn_8306D6D8(__vector4 *out, Self_8306D6D8 *self, unsigned char adjust)
{
    __vector4 value = self->position;
    if (self->flip)
        value.v[0] = -value.v[0];
    value = fn_8306ED38(value, self->scale);
    if (adjust)
        value.v[1] = self->offset + value.v[1];
    *out = value;
    return out;
}
