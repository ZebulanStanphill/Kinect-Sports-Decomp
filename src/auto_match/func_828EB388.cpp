// Returns a function-local static std::set, constructed on first use. The
// compiler's guard bit is lbl_8321453C; fn_83141960 destroys the set at exit.
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
void fn_83141960(void);
extern unsigned int lbl_8321453C;
extern char lbl_8321452C[];

Set *fn_828EB388(void)
{
    if ((lbl_8321453C & 1) == 0) {
        lbl_8321453C |= 1;
        ::new ((void *)lbl_8321452C) Set();
        atexit(fn_83141960);
    }
    return (Set *)lbl_8321452C;
}
}
