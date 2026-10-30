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

struct String_8233C3F8 { char b[0x20]; };
struct SP_8233C3F8 { char *p; char *rc; };
struct Obj_8233C3F8 { char pad[0x30]; std::vector<T> v; };
struct Mgr_8233C3F8 { char pad[0x80]; int f80; };

extern "C" {
String_8233C3F8 *fn_822C7578(void *, void *);
void fn_82230218(String_8233C3F8 *, void *, int, unsigned int);
void fn_822C8B40(void *, SP_8233C3F8 *);
void fn_82359C18(void *);
void *fn_8265C9E0(unsigned int);
void fn_822FB850(void *, int, int, int, int, int, void *);
extern char lbl_821A8D8C[];
}

extern "C" SP_8233C3F8 *fn_8233C3F8(SP_8233C3F8 *out, Mgr_8233C3F8 *mgr, int p3, int p4, void *p5, int p6, int p7,
                                    SP_8233C3F8 *p8, void *p9)
{
    int f80 = mgr->f80;
    int *r = (int *)fn_8265C9E0(0xa8);
    if (r != 0) {
        r[1] = 1;
        r[0] = (int)lbl_821A8D8C;
        r[2] = 1;
        if (r + 4 != 0) {
            fn_822FB850(r + 4, p3, p7, f80, p4, p6, p9);
        }
    } else {
        r = 0;
    }
    char *ob = (char *)(r + 4);
    out->rc = (char *)r;
    out->p = ob;
    {
        String_8233C3F8 *s = fn_822C7578(ob + 0x40, p8->p + 4);
        fn_82230218(s, p5, 0, (unsigned int)-1);
    }
    {
        Obj_8233C3F8 *o = (Obj_8233C3F8 *)out->p;
        char store[8];
        T *e = fn_82365BD8((T *)store, p8);
        o->v.push_back(*e);
        if (e->rc != 0) fn_822315A0(e->rc);
    }
    fn_822C8B40(mgr, out);
    if (p8->rc != 0) fn_822315A0(p8->rc);
    fn_82359C18(p9);
    return out;
}
