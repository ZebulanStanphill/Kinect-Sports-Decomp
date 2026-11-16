typedef struct Point_8305FC88 {
    float x;
    float y;
    float z;
} Point_8305FC88;

typedef struct Points_8305FC88 {
    Point_8305FC88 *data; /* 0x0 */
    char padding[0x14];
    int count; /* 0x18 */
} Points_8305FC88;

extern float fn_828102D0(const Point_8305FC88 *, const Point_8305FC88 *);
extern float fn_82809558(float value);

float fn_8305FC88(Points_8305FC88 *self, int *first, int *second)
{
    int i;
    float maximum = 0.0f;
    *first = -1;
    *second = -1;
    for (i = 0; i < self->count; i++) {
        int j;
        for (j = i + 1; j < self->count; j++) {
            float distance = fn_828102D0(&self->data[i], &self->data[j]);
            if (distance > maximum) {
                *first = i;
                maximum = distance;
                *second = j;
            }
        }
    }
    return fn_82809558(maximum);
}
