#include <vector>

extern "C" {
void fn_822315A0(void *rep);
}

struct Ref_8256CC50 {
    void *ptr;
    void *rep;
};

struct Element_8256D590 {
    Ref_8256CC50 ref;
    int unk8;
};

typedef Element_8256D590 E;

extern "C" {
void fn_8256DE08(Ref_8256CC50 *p, void *x);
void fn_8256BF70(void *self, void *key, int lbl, int a, int b, Ref_8256CC50 *out, Ref_8256CC50 *tmp, int c);
void fn_8256C100(void *self, void *key, int lbl, int a, int b, Ref_8256CC50 *out, Ref_8256CC50 *tmp, int c);
void fn_8256D528(Ref_8256CC50 *dst, Ref_8256CC50 *src);
unsigned char fn_827D9768(void *obj, void *key);
extern int lbl_83265A24;
}

extern template void std::vector<E>::push_back(const E &);

struct Vec_8256CC50 {
    E *first;
    E *last;
    E *cap;
    void push_back(const E &e) { ((std::vector<E> *)this)->push_back(e); }
};

struct Self_8256CC50 {
    char pad[0x48];
    Vec_8256CC50 v1;
    int pad2;
    Vec_8256CC50 v2;
};

extern "C" void fn_8256CC50(Self_8256CC50 *self, void *k1, void *k2, int val)
{
    Ref_8256CC50 b;
    E c;
    E *end = self->v1.last;
    E *it = self->v1.first;
    for (; it != end; it++) {
        if (fn_827D9768((char *)it->ref.ptr + 0x1f8, k1) != 0) break;
    }
    if (it == self->v1.last) {
        c.ref.ptr = 0;
        c.ref.rep = 0;
        b.ptr = 0;
        b.rep = 0;
        fn_8256DE08(&c.ref, 0);
        fn_8256BF70(self, k1, lbl_83265A24, 0, 0, &b, &c.ref, 1);
        if (b.ptr != 0) {
            c.ref.ptr = 0;
            c.ref.rep = 0;
            fn_8256D528(&c.ref, &b);
            c.unk8 = val;
            self->v1.push_back(c);
            if (c.ref.rep != 0) fn_822315A0(c.ref.rep);
        }
        if (b.rep != 0) fn_822315A0(b.rep);
    }
    end = self->v2.last;
    it = self->v2.first;
    for (; it != end; it++) {
        if (fn_827D9768((char *)it->ref.ptr + 0x1f8, k2) != 0) break;
    }
    if (it == self->v2.last) {
        c.ref.ptr = 0;
        c.ref.rep = 0;
        b.ptr = 0;
        b.rep = 0;
        fn_8256DE08(&c.ref, 0);
        fn_8256C100(self, k2, lbl_83265A24, 0, 0, &b, &c.ref, 1);
        if (b.ptr != 0) {
            c.ref.ptr = 0;
            c.ref.rep = 0;
            fn_8256D528(&c.ref, &b);
            c.unk8 = val;
            self->v2.push_back(c);
            if (c.ref.rep != 0) fn_822315A0(c.ref.rep);
        }
        if (b.rep != 0) fn_822315A0(b.rep);
    }
}
