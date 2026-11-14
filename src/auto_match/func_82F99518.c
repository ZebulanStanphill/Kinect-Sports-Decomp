typedef struct Pair_82F99518 {
    float x;
    float y;
} Pair_82F99518;

typedef struct Obj_82F99518 {
    char pad0[0x18];
    unsigned int count;
    int pad1c;
    Pair_82F99518 *items;
} Obj_82F99518;

int fn_82F99518(Obj_82F99518 *self)
{
    unsigned int i;
    for (i = 0; i < self->count; i++) {
        self->items[i].x = 0.0f;
        self->items[i].y = 1.0f;
    }
    return 1;
}
