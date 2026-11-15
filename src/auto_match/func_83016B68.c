typedef struct Self_83016B68 {
    int unused;
    void *table;
} Self_83016B68;

extern float fn_8302A5B8(void *table, float value);
extern float lbl_8216C698;
extern float fn_83016920(Self_83016B68 *, float, float, float, unsigned int);

float fn_83016B68(Self_83016B68 *self, float valueIn, float minimum, float maximum, unsigned int mode)
{
    float offset = 0.0f;
    float value = fn_83016920(self, valueIn, minimum, maximum, mode);
    if (value <= 0.0f)
        return lbl_8216C698;
    while (value > 10.0f) {
        value *= 0.1f;
        offset += 20.0f;
    }
    while (value < 1.0f) {
        value *= 10.0f;
        offset -= 20.0f;
    }
    return fn_8302A5B8(self->table, value) + offset;
}
