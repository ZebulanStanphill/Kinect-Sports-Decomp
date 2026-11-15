typedef struct Self_83016AB8 {
    int unused;
    void *table;
} Self_83016AB8;

extern float fn_8302A5B8(void *table, float value);
extern float lbl_8216C698;

float fn_83016AB8(Self_83016AB8 *self, float value)
{
    float offset = 0.0f;
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
