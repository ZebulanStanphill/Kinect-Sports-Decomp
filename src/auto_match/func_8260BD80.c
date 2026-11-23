typedef struct Point_8260BD80 {
    float x;
    float y;
} Point_8260BD80;

typedef struct Frame_8260BD80 {
    char pad0[0xc];
    unsigned unsigned int id; /* 0x0c */
    Point_8260BD80 points[2]; /* 0x10 */
    float values[2];          /* 0x20 */
} Frame_8260BD80;

typedef struct History_8260BD80 {
    int current;              /* 0x00 */
    Frame_8260BD80 frames[2]; /* 0x04 */
} History_8260BD80;

static __forceinline int Wrap(int index, int count)
{
    while (index < 0) {
        index += count;
    }
    while (index >= count) {
        index -= count;
    }
    return index;
}

static __forceinline int PointNear(const Point_8260BD80 *a, const Point_8260BD80 *b)
{
    float d;

    d = a->x - b->x;
    if (d < -0.001f || d > 0.001f) {
        return 0;
    }
    d = a->y - b->y;
    if (d < -0.001f || d > 0.001f) {
        return 0;
    }
    return 1;
}

static __forceinline int ValueNear(float a, float b)
{
    return a >= b - 0.001f && a <= b + 0.001f;
}

static __forceinline int IsSame(const Frame_8260BD80 *a, const Frame_8260BD80 *b)
{
    unsigned int i;

    if (a->id != b->id) {
        return 0;
    }
    for (i = 0; i < 2; i++) {
        if (!ValueNear(a->values[i], b->values[i])) {
            return 0;
        }
    }
    for (i = 0; i < 2; i++) {
        if (!PointNear(&a->points[i], &b->points[i])) {
            return 0;
        }
    }
    return 1;
}

int fn_8260BD80(History_8260BD80 *self)
{
    Frame_8260BD80 *current;
    Frame_8260BD80 *previous;

    current = &self->frames[self->current];
    previous = &self->frames[Wrap(self->current - 1, 2)];
    return !IsSame(current, previous);
}
