#include <vector>

struct Element_82376640 {
    Element_82376640();
    Element_82376640(const Element_82376640 &other);
    Element_82376640 &operator=(const Element_82376640 &other);
    ~Element_82376640();
    int data;
    void *rc;
};
extern "C" Element_82376640 *fn_82365BD8(Element_82376640 *self, const void *other);
extern "C" void fn_822315A0(void *);
typedef Element_82376640 T;
template <> void std::vector<T>::push_back(const T &);

struct String_8233C310 { char b[0x20]; };
struct SP_8233C310 { char *p; char *rc; };
struct Obj_8233C310 { char pad[0x30]; std::vector<T> v; };
struct Mgr_8233C310 { char pad[0x80]; int f80; };

extern "C" {
SP_8233C310 *fn_822EA970(SP_8233C310 *, int, int, int, int, int *);
String_8233C310 *fn_822C7578(void *, void *);
void fn_82230218(String_8233C310 *, void *, int, unsigned int);
void fn_822C8B40(void *, SP_8233C310 *);
}

extern "C" SP_8233C310 *fn_8233C310(SP_8233C310 *out, Mgr_8233C310 *mgr, int p3, int p4, void *p5, int p6, int p7,
                                    SP_8233C310 *p8)
{
    SP_8233C310 tmp;
    int f80 = mgr->f80;
    SP_8233C310 *r = fn_822EA970(&tmp, p3, p7, f80, p4, &p6);
    out->p = r->p;
    out->rc = r->rc;
    r->p = 0;
    r->rc = 0;
    if (tmp.rc != 0) fn_822315A0(tmp.rc);
    {
        String_8233C310 *s = fn_822C7578(out->p + 0x40, p8->p + 4);
        fn_82230218(s, p5, 0, (unsigned int)-1);
    }
    {
        Obj_8233C310 *o = (Obj_8233C310 *)out->p;
        char store[8];
        T *e = fn_82365BD8((T *)store, p8);
        o->v.push_back(*e);
        if (e->rc != 0) fn_822315A0(e->rc);
    }
    fn_822C8B40(mgr, out);
    if (p8->rc != 0) fn_822315A0(p8->rc);
    return out;
}
