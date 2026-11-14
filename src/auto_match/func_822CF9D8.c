typedef struct Data_822CF9D8 {
    float value[4];             /* 0x00 */
    float range;                /* 0x10 */
    char pad14[0x5c - 0x14];
    int remap[4];               /* 0x5c */
} Data_822CF9D8;

typedef struct Obj_822CF9D8 {
    char pad0[0x1a8];
    Data_822CF9D8 *data;        /* 0x1a8 */
    char pad1AC[0x1d8 - 0x1ac];
    float input;                /* 0x1d8 */
} Obj_822CF9D8;

extern float fn_82539560(float x, float inMin, float inMax, float outMin, float outMax);

float fn_822CF9D8(Obj_822CF9D8 *self, int index)
{
    float v = self->data->value[index];

    if (self->data->remap[index] != 0)
        v = fn_82539560(self->input, 0.0f, self->data->range, 0.0f, v);
    return v;
}
