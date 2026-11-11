// Resets an object: zeroes the first two vectors of each of its (a * b) 64-byte entries, where
// a and b are bit fields of the halfword at +0x2e, and sets the four floats at +0x18 to -97.
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);

typedef struct Entry_830277F0 {
    __vector4 a;                    // 0x00
    __vector4 b;                    // 0x10
    char pad20[0x20];
} Entry_830277F0;

typedef struct Object_830277F0 {
    char pad0[0x18];
    float values[4];                // 0x18
    char pad28[6];
    unsigned short cols : 3;        // 0x2e, bits 15..13
    unsigned short rows : 2;        // bits 12..11
    unsigned short other : 11;
    Entry_830277F0 entries[1];      // 0x30
} Object_830277F0;

extern const float lbl_8217C590;        // -97.0f

void fn_830277F0(Object_830277F0 *self)
{
    unsigned short count = self->rows * self->cols;
    unsigned short i;
    unsigned char j;

    if (count != 0) {
        __vector4 zero = __vspltisw(0);

        i = 0;
        do {
            Entry_830277F0 *e = &self->entries[i];

            e->b = zero;
            e->a = zero;
            i++;
        } while (i < count);
    }
    {
        float v = lbl_8217C590;

        for (j = 0; j < 4; j++)
            self->values[j] = v;
    }
}
