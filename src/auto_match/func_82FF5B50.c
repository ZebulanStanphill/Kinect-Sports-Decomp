typedef struct List_82FF5B50 {
    unsigned int *begin;
    unsigned int *end;
} List_82FF5B50;

typedef struct Obj_82FF5B50 {
    char pad0[0x28];
    List_82FF5B50 ids;      /* 0x28 */
    char pad30[9];
    unsigned char count;    /* 0x39 */
} Obj_82FF5B50;

extern unsigned int *fn_82FF5D28(List_82FF5B50 *list);

static __forceinline unsigned int *Find_82FF5B50(List_82FF5B50 *l, unsigned int id)
{
    unsigned int *p = l->begin;
    unsigned int found;

    while (p != l->end && *p != id) {
        p++;
    }
    found = p != l->end;
    return found ? p : 0;
}

int fn_82FF5B50(void *self, Obj_82FF5B50 *o, unsigned int id)
{
    int result = 0x1c;
    unsigned int *slot;

    if ((int)Find_82FF5B50(&o->ids, id) == 0) {
        result = 0x1b;
        if (o->count < 0xff) {
            slot = fn_82FF5D28(&o->ids);
            if (slot != 0) {
                *slot = id;
                result = 1;
                o->count++;
            }
        }
    }
    return result;
}
