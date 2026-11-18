typedef struct Collidable_82DB0B68 {
    void *shape;
    unsigned int shapeKey;
    void *motion;
    void *parent;
    signed char ownerOffset;
} Collidable_82DB0B68;

typedef struct Entity_82DB0B68 {
    char pad[0x10];
    Collidable_82DB0B68 collidable;
} Entity_82DB0B68;

typedef struct CollidableArray_82DB0B68 {
    Collidable_82DB0B68 **data;
    int size;
    int capacityAndFlags;
} CollidableArray_82DB0B68;

typedef struct Listener_82DB0B68 {
    char pad0[0xc];
    void *world;
    char pad10[0x24 - 0x10];
    unsigned char enabled;
    char pad25[0x44 - 0x25];
    CollidableArray_82DB0B68 collidables;
} Listener_82DB0B68;

extern int fn_82D93438(void *owner);
extern void fn_82D35890(void *world, unsigned short id);

static __forceinline void *GetOwner(Collidable_82DB0B68 *c)
{
    return (char *)c + c->ownerOffset;
}

static __forceinline int IndexOf(CollidableArray_82DB0B68 *a, Collidable_82DB0B68 *c)
{
    int i = 0;
    int n = a->size;

    if (0 < n) {
        Collidable_82DB0B68 **p = a->data;

        do {
            if (*p == c) {
                return i;
            }
            i++;
            p++;
        } while (i < n);
    }
    return -1;
}

/* hkMemUtil::memCpyOneAligned for a 4-byte element: a loop over its words. */
static __forceinline void memCpyOneAligned(void *dst, const void *src)
{
    unsigned int k;

    for (k = 0; k < 1; k++) {
        ((unsigned int *)dst)[k] = ((const unsigned int *)src)[k];
    }
}

static __forceinline void RemoveAt(CollidableArray_82DB0B68 *a, int index)
{
    CollidableArray_82DB0B68 *arr = a;

    arr->size--;
    if (arr->size != index) {
        memCpyOneAligned(arr->data + index, arr->data + arr->size);
    }
}

void fn_82DB0B68(Listener_82DB0B68 *self, Entity_82DB0B68 *entity)
{
    Collidable_82DB0B68 *c = &entity->collidable;

    if (self->enabled) {
        unsigned short id = fn_82D93438(GetOwner(c));
        int index = IndexOf(&self->collidables, c);

        if (index == -1) {
            if (id != 0xffff) {
                fn_82D35890(self->world, id);
            }
        } else {
            RemoveAt(&self->collidables, index);
        }
    }
}
