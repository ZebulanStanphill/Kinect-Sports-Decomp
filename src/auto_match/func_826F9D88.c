typedef struct Entry_826F9D88 {
    unsigned int id;
    int unused;
    float x;
    float y;
    char padding[0x14];
} Entry_826F9D88;

typedef struct Owner_826F9D88 {
    char padding[0xb0];
    float width;
    float height;
    float offsetX;
    float offsetY;
    char paddingc0[0x950 - 0xc0];
    Entry_826F9D88 entries[3];
    char padding9bc[0x9d4 - 0x9bc];
    unsigned int count;
} Owner_826F9D88;

typedef struct Pair_826F9D88 {
    float x;
    float y;
} Pair_826F9D88;

static __forceinline Pair_826F9D88 Normalize(Pair_826F9D88 point, Pair_826F9D88 offset, Pair_826F9D88 size)
{
    Pair_826F9D88 result;
    result.x = (point.x * 0.05f - offset.x) / size.x;
    result.y = (point.y * 0.05f - offset.y) / size.y;
    return result;
}

void fn_826F9D88(Owner_826F9D88 *self, unsigned int index, float *outX, float *outY, unsigned int *outId)
{
    if (index < self->count) {
        Pair_826F9D88 offset;
        Pair_826F9D88 size;
        Pair_826F9D88 point;
        Pair_826F9D88 result;
        offset.x = self->offsetX;
        offset.y = self->offsetY;
        size.x = self->width;
        size.y = self->height;
        point.x = self->entries[index].x;
        point.y = self->entries[index].y;
        result = Normalize(point, offset, size);
        if (outX != 0) {
            *outX = result.x;
        }
        if (outY != 0) {
            *outY = result.y;
        }
        if (outId != 0) {
            *outId = self->entries[index].id;
        }
    }
}
