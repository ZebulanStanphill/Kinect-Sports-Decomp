typedef struct It { char pad[0x10]; struct It *next; } It;
typedef struct { char pad[0x10]; int count; It *free; } P;
extern void fn_82BE8CF8(It *it);
extern void fn_82BF7370(P *p);

void fn_82BF7468(P *p, It *it)
{
    fn_82BE8CF8(it);
    it->next = p->free;
    p->free = it;
    if (--p->count >= 0) {
        if (p->count == 0)
            fn_82BF7370(p);
    }
}
