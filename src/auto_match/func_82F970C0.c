typedef struct Pair_82F970C0 {
    float x;
    float y;
} Pair_82F970C0;

typedef struct Obj_82F970C0 {
    char pad0[0x18];
    unsigned int count;
    int pad1c;
    Pair_82F970C0 *items;
} Obj_82F970C0;

int fn_82F970C0(Obj_82F970C0 *self)
{
    unsigned int i;
    for (i = 0; i < self->count; i++) {
        self->items[i].x = 0.0f;
        self->items[i].y = 0.0f;
    }
    return 1;
}
