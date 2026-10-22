typedef struct {
    int a;
    unsigned char busy;
    unsigned char b5;
    unsigned char next;
    unsigned char flags;
} Entry;

typedef struct {
    char pad0[0x30];
    Entry *table;
    char pad34[0xc9 - 0x34];
    unsigned char cur;
} Obj;

extern int fn_82A2D670(Obj *o, unsigned int i, Entry *e);

int fn_82A2D810(Obj *o)
{
    Entry *table = o->table;
    Entry *start = &table[o->cur];
    unsigned int i = start->next;
    for (;;) {
        Entry *e = &table[i];
        if (e->busy == 0 && (e->flags & 0x40) && (e->flags & 8)) {
            int hr = fn_82A2D670(o, i, e);
            if (hr < 0) {
                return hr;
            }
        }
        if (e == start) {
            return 0;
        }
        i = e->next;
    }
}
