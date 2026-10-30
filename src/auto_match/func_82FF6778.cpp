struct Obj_82FF6778 {
    virtual void v0();
    virtual void v1();
    virtual void v2();
};
struct Item_82FF6778 {
    int pad0;
    Obj_82FF6778 *obj;
    int pad8, padc;
};
struct Group_82FF6778 {
    char pad0[0xc];
    int f0c;
    Item_82FF6778 *begin;
    Item_82FF6778 *end;
};
struct Entry_82FF6778 {
    unsigned key;
    Group_82FF6778 *value;
};
struct Table_82FF6778 {
    int pad0;
    Entry_82FF6778 *begin;
    Entry_82FF6778 *end;
};
extern "C" void fn_8302AE48(Obj_82FF6778 *);
static __inline int Found(Table_82FF6778 *t, Entry_82FF6778 *p) { return p != t->end; }
static __inline Group_82FF6778 **Get(Table_82FF6778 *t, Entry_82FF6778 *p) { return Found(t, p) ? &p->value : 0; }
extern "C" int fn_82FF6778(Table_82FF6778 *t, unsigned key)
{
    Entry_82FF6778 *e = t->begin;
    while (e != t->end && e->key != key) e++;
    Group_82FF6778 *g = *Get(t, e);
    g->f0c = 0;
    for (Item_82FF6778 *it = g->begin; it != g->end; it++) {
        Obj_82FF6778 *o = it->obj;
        fn_8302AE48(o);
        o->v2();
    }
    g->end = g->begin;
    return 1;
}
