typedef struct Vec3_826D81C8 { float x, y, z; } Vec3_826D81C8;

typedef struct Buffer_826D81C8 {
    void *data;
    int capacity;
    int size;
    unsigned short stride;
    int flags;
} Buffer_826D81C8;

typedef struct Item_826D81C8 {
    int id;
    int type;
    float weight;
    Vec3_826D81C8 pos;
    float radius;
    int f1c;
    int f20;
    Buffer_826D81C8 buffer;
} Item_826D81C8;

extern void fn_826E3F28(Buffer_826D81C8 *dst, unsigned short stride, void *data, int size, int capacity, int flags);

static __forceinline void SetPlacement(Item_826D81C8 *item, float x, float y, float z, float weight)
{
    item->weight = weight;
    item->pos.x = x;
    item->pos.y = y;
    item->pos.z = z;
}

Item_826D81C8 *fn_826D81C8(Item_826D81C8 *self, const Item_826D81C8 *other)
{
    self->id = other->id;
    self->type = other->type;
    SetPlacement(self, other->pos.x, other->pos.y, other->pos.z, other->weight);
    self->radius = other->radius;
    self->f1c = other->f1c;
    self->f20 = other->f20;
    fn_826E3F28(&self->buffer, other->buffer.stride, other->buffer.data, other->buffer.size,
                other->buffer.capacity, other->buffer.flags);
    return self;
}
