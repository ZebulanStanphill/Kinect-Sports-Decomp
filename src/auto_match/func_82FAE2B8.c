typedef struct Entry {
    int key;
    void *item;
} Entry;

typedef struct Obj {
    char pad[0x7c];
    Entry *begin;
    Entry *end;
} Obj;

extern unsigned char fn_82FB0820(void *item, void *a, void *b);
extern int fn_83007DF0(Obj *p, void *a, void *b, int c);

int fn_82FAE2B8(Obj *p, void *a, void *b)
{
    Entry *e;

    for (e = p->begin; e != p->end; e++) {
        if (fn_82FB0820(e->item, a, b)) {
            return 1;
        }
    }
    return fn_83007DF0(p, a, b, 0);
}
