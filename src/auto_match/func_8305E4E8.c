typedef struct Shape_8305E4E8 {
    char pad0[0x28];
    void *points;
    unsigned int *indices;
    int count;
} Shape_8305E4E8;

typedef struct Bounds_8305E4E8 {
    float values[6];
} Bounds_8305E4E8;

extern unsigned char fn_8305D830(Shape_8305E4E8 *self, int index, Bounds_8305E4E8 *out);
extern void *fn_8305F7A0(void *points, unsigned int index);
extern float fn_83066DD8(Bounds_8305E4E8 *bounds, void *point);

float fn_8305E4E8(Shape_8305E4E8 *self)
{
    float best = 3.402823466e+38f;
    int first;
    for (first = 0; first < self->count; first++) {
        Bounds_8305E4E8 bounds;
        if (fn_8305D830(self, first, &bounds)) {
            float minimum = 0.0f;
            float maximum = 0.0f;
            int index;
            for (index = 2; index < self->count; index++) {
                float value = fn_83066DD8(
                    &bounds, fn_8305F7A0(self->points, self->indices[(index + first) % self->count]));
                if (value < minimum) {
                    minimum = value;
                }
                if (value > maximum) {
                    maximum = value;
                }
            }
            if (maximum - minimum < best) {
                best = maximum - minimum;
            }
        }
    }
    return best;
}
