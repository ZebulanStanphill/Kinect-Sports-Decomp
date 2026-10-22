typedef struct Item {
    int pad0[3];
    void *id;
    __int64 start;
    int pad18;
    unsigned int dur;
    int f20;
    int f24;
    int pad28[2];
    void *active;
} Item;

typedef struct {
    Item **items;
    unsigned int count;
    int pad8;
    int cs[1];
} Mgr;

extern void RtlEnterCriticalSection(void *cs);
extern void RtlLeaveCriticalSection(void *cs);

void fn_82A1F560(Mgr *m, Item *item)
{
    __int64 end;
    __int64 e;
    unsigned int i;
    Item *it;

    end = item->dur + item->start;
    RtlEnterCriticalSection(&m->cs);
    for (i = 0; i < m->count; i++) {
        it = m->items[i];
        if (it->active != 0 && it->id == item->id) {
            e = it->dur + it->start;
            if (e > end) {
                end = e;
            }
        }
    }
    item->start = end;
    item->f20 = 0;
    item->f24 = 0;
    RtlLeaveCriticalSection(&m->cs);
}
