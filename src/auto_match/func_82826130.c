typedef struct Entry_82826130 {
    int key;
    int value;
    int extra;
} Entry_82826130;

typedef struct Vec_82826130 {
    Entry_82826130 *begin;
    Entry_82826130 *end;
} Vec_82826130;

typedef struct Obj_82826130 {
    char pad0[0xc];
    Vec_82826130 *entries;
} Obj_82826130;

typedef unsigned char (*Visit_82826130)(Obj_82826130 *self, int key, int value, void *context);

void fn_82826130(Obj_82826130 *self, void *context, Visit_82826130 visit)
{
    unsigned char ok = 1;
    int i;

    for (i = (int)(self->entries->end - self->entries->begin) - 1; i >= 0; i--) {
        Entry_82826130 *e;
        if (!ok) {
            return;
        }
        e = &self->entries->begin[i];
        ok = visit(self, e->key, e->value, context);
    }
}
