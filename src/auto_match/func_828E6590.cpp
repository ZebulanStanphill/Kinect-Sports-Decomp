#include "stdext/exception.h"

extern "C" {
void *fn_8265C9E0(unsigned int);
void fn_82BA02A8(const stdext::exception &e);
extern char lbl_82027444[];
}

inline void *operator new(unsigned int, void *where) throw() { return where; }

struct Object {
    virtual ~Object();
};

struct CountedImpl {
    const void *vtbl;
    int use_count;
    int weak_count;
    Object *px;
    CountedImpl(Object *p) : vtbl(lbl_82027444), use_count(1), weak_count(1), px(p) {}
};

struct SharedCount {
    CountedImpl *pi;
};

extern "C" SharedCount *fn_828E6590(SharedCount *self, Object *p)
{
    self->pi = 0;
    self->pi = ::new (fn_8265C9E0(sizeof(CountedImpl))) CountedImpl(p);
    if (self->pi == 0) {
        delete p;
        fn_82BA02A8(stdext::bad_alloc());
    }
    return self;
}
