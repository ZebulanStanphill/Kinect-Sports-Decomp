typedef struct Stack_822CEE40 {
    void **items;
    unsigned int unk4[3];
    int index;
} Stack_822CEE40;

typedef struct Level_822CEE40 {
    unsigned int unk0[2];
    unsigned int count;
} Level_822CEE40;

typedef struct Source_822CEE40 {
    unsigned int unk0[2];
    Stack_822CEE40 ***entries;
} Source_822CEE40;

typedef struct Obj_822CEE40 {
    unsigned char pad0[0x1c];
    Stack_822CEE40 *levels;
    unsigned char pad20[0x28 - 0x20];
    int mode;
    int entryIndex;
    unsigned char pad30[0x1c0 - 0x30];
    Source_822CEE40 *source;
} Obj_822CEE40;

extern void *fn_822ABA88(void *map, unsigned int key);

void *fn_822CEE40(Obj_822CEE40 *self)
{
    Stack_822CEE40 *levels = self->levels;
    Stack_822CEE40 *e;
    int mode;
    if (((Level_822CEE40 *)levels->items[levels->index])->count <= 1)
        return 0;
    mode = self->mode;
    if (mode < 2) {
        e = (*self->source->entries)[self->entryIndex];
        return fn_822ABA88(e->items[e->index], 1 - mode);
    }
    e = (*self->source->entries)[self->entryIndex];
    return fn_822ABA88(e->items[e->index], mode - 1);
}
