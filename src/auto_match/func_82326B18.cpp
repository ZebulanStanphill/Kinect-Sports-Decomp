#include "stdext/xmemory.h"

struct String;

extern "C" {
__declspec(noreturn) void fn_82F622A8(const char *message);
void fn_8265CA20(void *p);
String *fn_82240378(String *self, const String *other);
void fn_82230300(String *self, bool built, unsigned int newsize);
}

inline void *operator new(unsigned int, void *p) throw() { return p; }

struct String {
    void *alval;
    union {
        char buf[16];
        char *ptr;
    } bx;
    unsigned int size;
    unsigned int res;
    String(const String &o) { fn_82240378(this, &o); }
};

struct Pair {
    String first;
    String second;
};

static Pair *Allocate(unsigned int count)
{
    void *ptr = 0;
    if (count <= 0)
        count = 0;
    else if (0xffffffff / sizeof(Pair) < count || (ptr = fn_8265C9E0(count * sizeof(Pair))) == 0)
        stdext::bad_alloc(0)._Raise();
    return (Pair *)ptr;
}

struct Vector {
    Pair *first;
    Pair *last;
    Pair *end;
};

extern "C" void fn_82326B18(Vector *self, unsigned int count)
{
    if (0x4924924 < count)
        fn_82F622A8("vector<T> too long");
    else if ((unsigned int)(self->end - self->first) < count) {
        Pair *ptr = Allocate(count);
        Pair *src = self->first;
        Pair *last = self->last;
        Pair *dst = ptr;
        for (; src != last; ++dst, ++src)
            ::new ((void *)dst) Pair(*src);
        unsigned int size = self->last - self->first;
        if (self->first != 0) {
            Pair *p = self->first;
            Pair *e = self->last;
            for (; p != e; ++p) {
                fn_82230300(&p->second, true, 0);
                fn_82230300(&p->first, true, 0);
            }
            fn_8265CA20(self->first);
        }
        self->end = ptr + count;
        self->last = ptr + size;
        self->first = ptr;
    }
}
