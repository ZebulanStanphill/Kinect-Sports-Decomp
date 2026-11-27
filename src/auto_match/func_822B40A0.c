#include "xdk/vectorintrinsics.h"

typedef struct Rec_822B40A0 {
    char pad0[8];
    unsigned short key;
    char padA[0x50 - 0xa];
} Rec_822B40A0;

typedef struct Table_822B40A0 {
    int pad0;
    Rec_822B40A0 *begin;
    Rec_822B40A0 *end;
} Table_822B40A0;

typedef struct Item_822B40A0 {
    char pad0[0x20];
    unsigned int id;
    unsigned int key;
} Item_822B40A0;

typedef struct Self_822B40A0 {
    char pad0[0x10];
    Item_822B40A0 **begin;
    Item_822B40A0 **end;
    char pad18[8];
    Table_822B40A0 *table;
} Self_822B40A0;

extern int fn_8255C820(__vector4 *pos, Rec_822B40A0 *rec);

static __forceinline Rec_822B40A0 *Find(Table_822B40A0 *t, Item_822B40A0 *item)
{
    unsigned int key = item->key;
    Rec_822B40A0 *r;
    for (r = t->begin; r < t->end; r++) {
        if (r->key == (unsigned short)key) {
            return r;
        }
    }
    return 0;
}

Item_822B40A0 *fn_822B40A0(Self_822B40A0 *self, __vector4 pos, unsigned int id)
{
    Item_822B40A0 **it = self->begin;
    Item_822B40A0 **end = self->end;

    for (; it != end; it++) {
        Item_822B40A0 *item = *it;
        if (item->id == id) {
            if (fn_8255C820(&pos, Find(self->table, item))) {
                return item;
            }
        }
    }
    return 0;
}
