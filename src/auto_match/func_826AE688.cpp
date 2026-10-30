extern "C" void fn_826C3378(void *, unsigned int, unsigned int);

struct Rep_826AE688 { int a; int b; unsigned int uses; };
struct Weak_826AE688 {
    Rep_826AE688 *rep;
    unsigned int obj;
};
struct Ref_826AE688 {
    Rep_826AE688 *p;
    Weak_826AE688 w;
    unsigned char c;
    __forceinline Ref_826AE688(const Ref_826AE688 &o)
    {
        Weak_826AE688 *pw = &w;
        p = o.p;
        p->uses = p->uses + 1;
        c = 0;
        w.rep = o.w.rep;
        if (w.rep != 0) {
            w.rep->uses = (w.rep->uses + 1) & 0x8fffffff;
        }
        pw->obj = 0;
        if (o.w.obj != 0) {
            fn_826C3378(pw, o.w.obj, o.c & 1);
        }
    }
};
extern "C" Ref_826AE688 *fn_826AE688(Ref_826AE688 *dst, const Ref_826AE688 *src)
{
    dst->Ref_826AE688::Ref_826AE688(*src);
    return dst;
}
