#include "stdext/exception.h"

extern "C" {
void *fn_8265C9E0(unsigned int);
void fn_8265CA20(void *p);
void fn_82BA02A8(const stdext::exception &e);
extern char lbl_82023C2C[];
}

inline void *operator new(unsigned int, void *where) throw() { return where; }

struct CountedImpl {
    const void *vtbl;
    int use_count;
    int weak_count;
    void *px;
    CountedImpl(void *p) : vtbl(lbl_82023C2C), use_count(1), weak_count(1), px(p) {}
};

struct SharedCount {
    CountedImpl *pi;
};

extern "C" SharedCount *fn_8289E318(SharedCount *self, void *p)
{
    self->pi = 0;
    self->pi = ::new (fn_8265C9E0(sizeof(CountedImpl))) CountedImpl(p);
    if (self->pi == 0) {
        fn_8265CA20(p);
        fn_82BA02A8(stdext::bad_alloc());
    }
    return self;
}
