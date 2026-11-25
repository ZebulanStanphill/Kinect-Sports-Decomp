extern int abs(int value);

typedef struct Scale_82E8D828 {
    int unused;
    int step;
    int span;
} Scale_82E8D828;

typedef struct Offset_82E8D828 {
    int base;
    int index;
} Offset_82E8D828;

void fn_82E8D828(void *self, int *out, const Scale_82E8D828 *scale, const Offset_82E8D828 *offset)
{
    int base;
    int index;

    if (offset == 0) {
        base = 0;
        index = 0;
    } else {
        base = offset->base;
        index = offset->index;
    }
    out[0] = scale->step * index + base;
    out[1] = abs(scale->step * scale->span) + (scale->step * index / 2 + base) / 2;
    out[2] = abs(scale->step * scale->span) * 5 / 4 + (scale->step * index / 2 + base) / 2;
}
