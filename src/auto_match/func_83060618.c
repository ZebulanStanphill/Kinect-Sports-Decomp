typedef struct Vec3_83060618 {
    float x;
    float y;
    float z;
} Vec3_83060618;

typedef struct Array_83060618 {
    Vec3_83060618 *data;   /* 0x00 */
    int pad04[5];          /* 0x04 */
    int count;             /* 0x18 */
    int capacity;          /* 0x1c */
    int grow;              /* 0x20 */
    unsigned char fixed;   /* 0x24 */
} Array_83060618;

extern int fn_830602B8(Array_83060618 *a, int newCapacity);

int fn_83060618(Array_83060618 *a, float x, float y, float z)
{
    Vec3_83060618 *e;

    if (a->capacity == a->count) {
        if (a->fixed == 0) {
            fn_830602B8(a, a->grow + a->capacity);
        } else {
            return -1;
        }
    }
    e = &a->data[a->count];
    e->x = x;
    e->y = y;
    e->z = z;
    a->count = a->count + 1;
    return a->count - 1;
}
