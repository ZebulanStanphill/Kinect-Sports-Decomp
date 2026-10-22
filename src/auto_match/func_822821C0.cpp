#include "stdext/xmemory.h"

struct Rep;

extern "C" {
void fn_822315A0(Rep *rep);
bool fn_8223AAC0(Rep *rep);
__declspec(noreturn) void fn_82F622A8(const char *msg);
void fn_8265CA20(void *p);
}

struct SP {
    void *ptr;
    Rep *rep;
    ~SP() { if (rep != 0) fn_822315A0(rep); }
};

struct Elem {
    int key;
    SP sp;
};

struct Vec {
    Elem *first;
    Elem *last;
    Elem *end;
};

extern "C" void fn_822821C0(Vec *self, unsigned int count)
{
    if (0x15555555 < count)
        fn_82F622A8("vector<T> too long");
    else if ((unsigned int)(self->end - self->first) < count) {
        Elem *ptr = 0;
        unsigned int n = count;
        if (n <= 0)
            n = 0;
        else if ((unsigned int)-1 / sizeof(Elem) < n
                 || (ptr = (Elem *)fn_8265C9E0(n * sizeof(Elem))) == 0)
            stdext::bad_alloc(0)._Raise();
        Elem *src = self->first;
        Elem *last = self->last;
        Elem *dest = ptr;
        for (; src != last; ++dest, ++src) {
            void *pv = dest;
            if (pv != 0) {
                SP *s = &dest->sp;
                dest->key = src->key;
                s->ptr = 0;
                s->rep = 0;
                Rep *orep = src->sp.rep;
                void *optr = src->sp.ptr;
                if (orep && fn_8223AAC0(orep)) {
                    if (s->rep != 0)
                        fn_822315A0(s->rep);
                    s->rep = orep;
                    s->ptr = optr;
                }
            }
        }
        unsigned int size = self->last - self->first;
        if (self->first != 0) {
            Elem *p = self->first;
            Elem *e = self->last;
            for (; p != e; ++p)
                p->sp.~SP();
            fn_8265CA20(self->first);
        }
        self->end = ptr + count;
        self->last = ptr + size;
        self->first = ptr;
    }
}
