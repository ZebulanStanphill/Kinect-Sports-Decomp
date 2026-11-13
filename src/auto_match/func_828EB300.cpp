// Returns a function-local static std::set, constructed on first use. The
// compiler's guard bit is lbl_83214528; fn_83141900 destroys the set at exit.
// Element_8288A5D8 is the placeholder value type func_8288A5D8.cpp defines.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error
#include "game/Allocator_825089A0.h"

struct Element_8288A5D8 {
    int data[2];
};

typedef std::set<Element_8288A5D8, std::less<Element_8288A5D8>, Allocator_825089A0<Element_8288A5D8, 0> > Set;
extern "C" {
int atexit(void (*function)(void));
void fn_83141900(void);
extern unsigned int lbl_83214528;
extern char lbl_83214518[];

Set *fn_828EB300(void)
{
    if ((lbl_83214528 & 1) == 0) {
        lbl_83214528 |= 1;
        ::new ((void *)lbl_83214518) Set();
        atexit(fn_83141900);
    }
    return (Set *)lbl_83214518;
}
}
