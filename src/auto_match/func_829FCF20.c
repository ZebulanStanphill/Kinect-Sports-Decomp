typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct Entry_829FCF20 {
    char padding[0x10];
    __vector4 dimensions;
    char padding20[0x50 - 0x20];
    unsigned int count;
    char padding54[0x4b50 - 0x54];
} Entry_829FCF20;

float fn_829FCF20(Entry_829FCF20 *entries, int index)
{
    float square;
    unsigned int count = entries[index].count;
    __vector4 dimensions = entries[index].dimensions;
    float size = dimensions.vector4_f32[2] * 0.001714433659799397f;
    size = size * 8.0f;
    square = size * size;
    return square * (float)count;
}
