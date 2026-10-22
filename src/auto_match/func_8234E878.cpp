#include "stdext/xmemory.h"
extern "C" {
void fn_8265CA20(void *ptr);
__declspec(noreturn) void fn_82F622A8(const char *message);
void *memmove(void *dst, const void *src, unsigned int size);
}

struct Vec {
    int *first;
    int *last;
    int *end;
};

struct Item {
    char pad[0x28];
    unsigned short index;
};

class Source {
public:
    virtual unsigned int Count();
    virtual void f4();
    virtual void f8();
    virtual Item *Get(int id);
    virtual void f10();
    virtual int Find(int key);
};

struct Owner {
    char pad[0x1b4];
    Source *src;
};

struct Self {
    char pad[0x60];
    Vec vec;
};

extern "C" {
void fn_8234EB38(Vec *v, int *where, unsigned int count, const int *val);
void fn_8234EAA0(Self *self, Source *src, int key, int value);
}

extern "C" void fn_8234E878(Self *self, Owner *owner)
{
    Source *src = owner->src;
    unsigned int count = src->Count();
    Vec *v = &self->vec;
    if (0x3fffffff < count)
        fn_82F622A8("vector<T> too long");
    else if ((unsigned int)(v->end - v->first) < count) {
        void *p0 = 0;
        unsigned int n = count;
        if (n <= 0)
            n = 0;
        else if ((unsigned int)-1 / sizeof(int) < n
                 || (p0 = fn_8265C9E0(n * sizeof(int))) == 0)
            stdext::bad_alloc(0)._Raise();
        int *ptr = (int *)p0;
        memmove(ptr, v->first, (v->last - v->first) * sizeof(int));
        unsigned int size = v->last - v->first;
        if (v->first != 0)
            fn_8265CA20(v->first);
        v->end = ptr + count;
        v->last = ptr + size;
        v->first = ptr;
    }
    int val = 0;
    fn_8234EB38(v, self->vec.last, count, &val);
    v->first[src->Find(1)] = 1;
    v->first[src->Find(2)] = 2;
    fn_8234EAA0(self, src, 9, 3);
    int id = src->Find(9);
    v->first[src->Get(id)->index] = 3;
    fn_8234EAA0(self, src, 8, 4);
    id = src->Find(8);
    v->first[src->Get(id)->index] = 4;
    fn_8234EAA0(self, src, 3, 5);
}
