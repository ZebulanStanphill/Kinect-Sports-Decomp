struct Counted_82704A98 { int pad[2]; int count; };
class Owner_82704A98 {
public:
    virtual void s00(); virtual void s01(); virtual void s02(); virtual void s03();
    virtual void s04(); virtual void s05(); virtual void s06(); virtual void s07();
    virtual void s08(); virtual void s09(); virtual void s0a(); virtual void s0b();
    virtual void s0c(); virtual void s0d(); virtual void s0e(); virtual void s0f();
    virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13();
    virtual void s14(); virtual void s15(); virtual void s16();
    virtual struct Res_82704A98 *get();
};
struct Res_82704A98 { char pad[0x78]; char *base; };
struct Item_82704A98 { char pad[4]; int value; };
extern "C" {
Counted_82704A98 *fn_82694700(void *, int);
void fn_826944C8(Counted_82704A98 *);
char *fn_82702B90(void *, Counted_82704A98 **);
}
struct Obj_82704A98 {
    char pad[0x68];
    Owner_82704A98 *owner;
    char pad6c[0xa00 - 0x6c];
    void *table;
};

static __forceinline int *Lookup_82704A98(void *table, Counted_82704A98 **key)
{
    char *e = fn_82702B90(table, key);
    return e != 0 ? (int *)(e + 4) : 0;
}

extern "C" int *fn_82704A98(Obj_82704A98 *param_1, int param_2)
{
    if (param_1->table == 0 || param_1->owner == 0)
        return 0;
    Res_82704A98 *res = param_1->owner->get();
    Counted_82704A98 *ref = fn_82694700(res->base + 0x254, param_2);
    Counted_82704A98 *tmp;
    int c = ref->count;
    tmp = ref;
    ref->count = c + 1;
    int *r = Lookup_82704A98(param_1->table, &tmp);
    if (--ref->count == 0)
        fn_826944C8(ref);
    return r;
}
