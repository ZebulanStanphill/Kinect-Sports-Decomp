extern int fn_827D9780(void *a, void *item);

typedef struct Obj {
    char pad[0x34];
    void **begin;
    void **end;
} Obj;

int fn_82628290(Obj *p, void *a)
{
    void **it;
    for (it = p->begin; it != p->end; it++) {
        if (fn_827D9780(a, *it) == 0)
            return 1;
    }
    return 0;
}
