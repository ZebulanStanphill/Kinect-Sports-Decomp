struct Counted_826F6210 { int pad[2]; int count; };
class Owner_826F6210 {
public:
    virtual void s00(); virtual void s01(); virtual void s02(); virtual void s03();
    virtual void s04(); virtual void s05(); virtual void s06(); virtual void s07();
    virtual void s08(); virtual void s09(); virtual void s0a(); virtual void s0b();
    virtual void s0c(); virtual void s0d(); virtual void s0e(); virtual void s0f();
    virtual void s10(); virtual void s11(); virtual void s12(); virtual void s13();
    virtual void s14(); virtual void s15(); virtual void s16();
    virtual struct Res_826F6210 *get();
};
struct Res_826F6210 { char pad[0x78]; char *base; };
extern "C" {
Counted_826F6210 *fn_82694700(void *, int);
void fn_826944C8(Counted_826F6210 *);
int fn_826B1788(Res_826F6210 *, Counted_826F6210 **, int);
}
struct Obj_826F6210 { char pad[0x68]; Owner_826F6210 *owner; };

extern "C" int fn_826F6210(Obj_826F6210 *param_1, int param_2)
{
    if (param_1->owner == 0)
        return 0;
    Res_826F6210 *res = param_1->owner->get();
    Counted_826F6210 *ref = fn_82694700(res->base + 0x254, param_2);
    ref->count++;
    int r = fn_826B1788(res, &ref, 0);
    Counted_826F6210 *q = ref;
    if (--q->count == 0)
        fn_826944C8(q);
    return r;
}
