#include <vector>

extern "C" {
void fn_822315A0(void *rep);
}

struct Ref_8256D1B8 {
    void *ptr;
    void *rep;
};

struct Element_8256D590 {
    Ref_8256D1B8 ref;
    int unk8;
};

typedef Element_8256D590 E;

extern "C" {
void fn_8256DE08(Ref_8256D1B8 *p, void *x);
void fn_8256BF70(void *self, void *key, int lbl, int a, int b, Ref_8256D1B8 *out, Ref_8256D1B8 *tmp, int c);
void fn_8256C100(void *self, void *key, int lbl, int a, int b, Ref_8256D1B8 *out, Ref_8256D1B8 *tmp, int c);
void fn_8256D528(Ref_8256D1B8 *dst, Ref_8256D1B8 *src);
unsigned char fn_827D9768(void *obj, void *key);
extern int lbl_83265A24;
}

extern template void std::vector<E>::push_back(const E &);

struct Vec_8256D1B8 {
    E *first;
    E *last;
    E *cap;
    void push_back(const E &e) { ((std::vector<E> *)this)->push_back(e); }
};

struct Self_8256D1B8 {
    char pad[0x6c];
    Vec_8256D1B8 v1;
    int pad2;
    Vec_8256D1B8 v2;
};

extern "C" void fn_8256D1B8(Self_8256D1B8 *self, void *k1, void *k2, int val)
{
    Ref_8256D1B8 a, b;
    E c;
    E *end = self->v1.last;
    E *it = self->v1.first;
    for (; it != end; it++) {
        if (fn_827D9768((char *)it->ref.ptr + 0x1f8, k1) != 0) break;
    }
    b.ptr = 0;
    b.rep = 0;
    if (it == self->v1.last) {
        a.ptr = 0;
        a.rep = 0;
        fn_8256DE08(&a, 0);
        fn_8256BF70(self, k1, lbl_83265A24, 0, 0, &b, &a, 1);
    } else {
        fn_8256D528(&b, &it->ref);
    }
    if (b.ptr != 0) {
        c.ref.ptr = 0;
        c.ref.rep = 0;
        fn_8256D528(&c.ref, &b);
        c.unk8 = val;
        self->v1.push_back(c);
        if (c.ref.rep != 0) fn_822315A0(c.ref.rep);
    }
    end = self->v2.last;
    it = self->v2.first;
    for (; it != end; it++) {
        if (fn_827D9768((char *)it->ref.ptr + 0x1f8, k2) != 0) break;
    }
    a.ptr = 0;
    a.rep = 0;
    if (it == self->v2.last) {
        c.ref.ptr = 0;
        c.ref.rep = 0;
        fn_8256DE08(&c.ref, 0);
        fn_8256C100(self, k2, lbl_83265A24, 0, 0, &a, &c.ref, 1);
    } else {
        fn_8256D528(&a, &it->ref);
    }
    if (a.ptr != 0) {
        c.ref.ptr = 0;
        c.ref.rep = 0;
        fn_8256D528(&c.ref, &a);
        c.unk8 = val;
        self->v2.push_back(c);
        if (c.ref.rep != 0) fn_822315A0(c.ref.rep);
    }
    if (a.rep != 0) fn_822315A0(a.rep);
    if (b.rep != 0) fn_822315A0(b.rep);
}
