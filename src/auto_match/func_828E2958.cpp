#include "stdext/exception.h"

extern "C" {
void fn_82BA02A8(void *);
extern char lbl_821AD03C[];
}

struct Fn_828E2958 {
    unsigned int tagged;
    int pad;
    char storage[1];
};

typedef void (*Invoker_828E2958)(void *, int, int);

extern "C" void fn_828E2958(Fn_828E2958 *f, int a, int b)
{
    if (f->tagged == 0) {
        stdext::exception e("call to empty boost::function");
        *(void **)&e = lbl_821AD03C;
        fn_82BA02A8(&e);
    }
    (*(Invoker_828E2958 *)((f->tagged & ~1u) + 4))(f->storage, a, b);
}
