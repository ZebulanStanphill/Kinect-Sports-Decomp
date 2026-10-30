typedef struct { char pad0[0x20]; unsigned int f20; char pad1[4]; unsigned int f28; unsigned int flags; } Item_8277C100;
typedef struct { Item_8277C100 **data; unsigned int count; } Vec_8277C100;
typedef struct { char pad0[0xcc]; int *tbl; char pad1[8]; unsigned int lo; unsigned int hi; } Obj_8277C100;
extern void fn_8277C098(Obj_8277C100 *, Item_8277C100 *);

void fn_8277C100(Obj_8277C100 *o, Vec_8277C100 *v)
{
    unsigned int k, i, prev, j;
    o->tbl[0] = 0;
    k = o->lo;
    if (k <= o->hi) {
        do {
            o->tbl[k] = 0;
            k++;
        } while (k <= o->hi);
    }
    prev = 0;
    i = 0;
    if (v->count > 0) {
        do {
            Item_8277C100 *it = v->data[i];
            unsigned int fl = it->flags & ~4u;
            it->flags = fl;
            if ((fl & 2) == 0) {
                fn_8277C098(o, it);
                j = o->hi;
                while (j >= o->lo) {
                    if (o->tbl[j] != 0)
                        goto found;
                    j--;
                }
                j = 0;
            found:
                it->f28 = j;
                it->f20 = prev;
                if (prev != j)
                    it->flags |= 4;
                prev = j;
            }
            i++;
        } while (i < v->count);
    }
}
