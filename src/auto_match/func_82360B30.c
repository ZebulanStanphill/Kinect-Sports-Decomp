typedef struct {
    char pad[0x24];
    int active;
    char pad28[0x168 - 0x28];
    void *sub;
    int value;
} Entry_82360B30;

typedef struct {
    void **maps;
    int pad[3];
    int index;
} Item_82360B30;

typedef struct {
    char pad[8];
    Item_82360B30 ***list;
} Obj_82360B30;

extern Entry_82360B30 *fn_822ABA88(void *map, unsigned int key);
extern unsigned char fn_8288B760(void *p);

int fn_82360B30(Obj_82360B30 *o, int i)
{
    int v;
    Item_82360B30 *it = (*o->list)[i];
    Entry_82360B30 *e = fn_822ABA88(it->maps[it->index], 0);
    if (e->active) {
        if (e->sub)
            v = fn_8288B760(e->sub);
        else
            v = e->value;
        if (v)
            return 1;
    }
    return 0;
}
