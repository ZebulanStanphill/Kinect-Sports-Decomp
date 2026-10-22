extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);

typedef struct {
    int f0;
    int rate;
    char pad8[0x14 - 0x8];
    unsigned int size;
    char pad18[0x28 - 0x18];
    int pos;
} Item;

typedef struct {
    int f0;
    char cs[0x1c];
    int total;
    char pad24[0x17c - 0x24];
    Item *items[(0x208 - 0x17c) / 4];
    int count;
} Mgr;

extern int fn_82D01D88(Item *it);
extern void fn_82D01840(Item *it, unsigned int n);

void fn_82CF8E10(Mgr *m)
{
    int i;
    Item *it;
    int oldPos;

    RtlEnterCriticalSection(m->cs);
    for (i = 0; i < m->count; i++) {
        it = m->items[i];
        oldPos = it->pos;
        if (fn_82D01D88(it) > 0) {
            fn_82D01840(it, it->size - it->size / 10);
        }
        m->total += (it->pos - oldPos) * it->rate;
    }
    RtlLeaveCriticalSection(m->cs);
}
