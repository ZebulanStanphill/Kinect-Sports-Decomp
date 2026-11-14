typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Pair_83027798 {
    __vector4 a;
    __vector4 b;
} Pair_83027798;

typedef struct Entry_83027798 {
    Pair_83027798 current;          // 0x00
    Pair_83027798 saved;            // 0x20
} Entry_83027798;

typedef struct Object_83027798 {
    char pad0[0x2e];
    unsigned short cols : 3;        // 0x2e, bits 15..13
    unsigned short rows : 2;        // bits 12..11
    unsigned short other : 11;
    Entry_83027798 entries[1];      // 0x30
} Object_83027798;

void fn_83027798(Object_83027798 *self)
{
    unsigned short count = self->rows * self->cols;
    unsigned short i;

    if (count != 0) {
        i = 0;
        do {
            Pair_83027798 *src = &self->entries[i].current;
            Pair_83027798 *dst = &self->entries[i].saved;

            dst->a = src->a;
            dst->b = src->b;
            i++;
        } while (i < count);
    }
}
