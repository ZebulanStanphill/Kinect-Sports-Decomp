#include "stdext/exception.h"

extern "C" {
void *fn_8265C9E0(unsigned int);
void fn_8265CA20(void *);
void fn_8289DF30(void *);
void fn_82BA02A8(const stdext::exception &e);
extern char lbl_82023C1C[];
}

inline void *operator new(unsigned int, void *where) throw() { return where; }

struct Object {
    void *unk0;
    void *b;
    void *unk8;
    void *c;
};

struct CountedImpl {
    const void *vtbl;
    int use_count;
    int weak_count;
    Object *px;
    CountedImpl(Object *p) : vtbl(lbl_82023C1C), use_count(1), weak_count(1), px(p) {}
};

struct SharedCount {
    CountedImpl *pi;
};

extern "C" SharedCount *fn_8289F5F8(SharedCount *self, Object *p)
{
    self->pi = 0;
    self->pi = ::new (fn_8265C9E0(sizeof(CountedImpl))) CountedImpl(p);
    if (self->pi == 0) {
        if (p != 0) {
            if (p->b != 0)
                fn_8289DF30(p->b);
            fn_8265CA20(p);
        }
        fn_82BA02A8(stdext::bad_alloc());
    }
    return self;
}
