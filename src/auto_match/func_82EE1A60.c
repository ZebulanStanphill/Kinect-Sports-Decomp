typedef struct { unsigned short f0; unsigned short f2; } Item;
typedef struct {
    char pad[0x48];
    char sub[0x254 - 0x48];
    unsigned int n;
} Obj;

extern int fn_82EE1048(void *sub, unsigned int i, Item **out);

int fn_82EE1A60(Obj *o, unsigned short *a, unsigned short *b, unsigned short *count)
{
    unsigned int i;

    if (count == 0) {
        return 0x80070057;
    }
    *count = 0;
    for (i = 0; i < o->n; i++) {
        Item *p;
        Item *it;
        if (fn_82EE1048(o->sub, i, &it) >= 0)
            p = it;
        else
            p = 0;
        if (p == 0) {
            return 0xc00d36bb;
        }
        if ((a == 0 || *a == p->f2) && (b == 0 || *b == p->f0)) {
            (*count)++;
        }
    }
    return 0;
}
