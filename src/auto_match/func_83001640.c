typedef struct Item_83001640 {
    char pad0[0x3d];
    unsigned char flags;
} Item_83001640;

typedef struct Pair_83001640 {
    int key;
    Item_83001640 *item;
} Pair_83001640;

typedef struct Vec_83001640 {
    Pair_83001640 *begin;
    Pair_83001640 *end;
} Vec_83001640;

typedef struct Obj_83001640 {
    char pad0[0x24];
    Item_83001640 *item;
    char pad28[0x2c];
    Vec_83001640 *children;
} Obj_83001640;

static __forceinline void SetFlags(Item_83001640 *item, unsigned int set, unsigned int clear)
{
    item->flags = item->flags & ~clear | set;
}

void fn_83001640(Obj_83001640 *self, unsigned int set, unsigned int clear)
{
    Pair_83001640 *it;

    if (self->item != 0) {
        self->item->flags = self->item->flags & ~clear | set;
    }
    if (self->children != 0) {
        for (it = self->children->begin; it != self->children->end; it++) {
            it->item->flags = it->item->flags & ~clear | set;
        }
    }
}
