typedef struct { int v[8]; } CRITICAL_SECTION;
extern void RtlEnterCriticalSection(CRITICAL_SECTION *cs);
extern void RtlLeaveCriticalSection(CRITICAL_SECTION *cs);

typedef struct {
    void *a;
    void *b;
    char *node;
    void *d;
} Iter;

extern void *fn_82FF9B18(void *p);
extern void fn_82FFDF28(Iter *out, void *map, void *key);
extern void fn_82FFF348(Iter *out, void *map, Iter *where);
extern void fn_8302B530(void);
extern void fn_8302B540(void);

typedef struct {
    char pad[0x50];
    CRITICAL_SECTION cs;
    char pad2[0x90 - 0x70];
    char map[1];
} Obj;

void fn_82FFBA00(Obj *o, void *key)
{
    Iter it;
    Iter res;

    fn_8302B530();
    RtlEnterCriticalSection(&o->cs);
    fn_82FFDF28(&it, o->map, key);
    if (it.node != 0 && fn_82FF9B18(it.node + 8) == 0) {
        fn_82FFF348(&res, o->map, &it);
    }
    RtlLeaveCriticalSection(&o->cs);
    fn_8302B540();
}
