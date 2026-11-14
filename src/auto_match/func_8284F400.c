typedef struct Object_8284F400 {
    char pad0[0x8c];
    float fraction;
    char pad90[0xb0 - 0x90];
    float length;
} Object_8284F400;

float fn_8284F400(Object_8284F400 *self)
{
    float length = self->length;
    float value;

    if (length == 0.0f)
        return 0.0f;
    value = self->fraction * length;
    if (value < 0.0f)
        value = 0.0f;
    if (value >= length)
        value = length;
    return value;
}
