// R1::Soundscape occlusion scheduler: allocates an OcclusionTest_c from the
// Soundscape heap (constructor fn_8286CBF0), appends it to the std::list at
// +0x18 (std::list<Element_8286D3A0>::_Insert, func_8286D3A0.cpp) and counts it.

// The headers call std::_Xlength_error directly, so its name is replaced here.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <list>
#undef _Xlength_error

#include "R1/Soundscape/Heap.h"

struct Element_8286D3A0 {
    int data;
};

typedef std::list<Element_8286D3A0> List_8286CD88;

// Out of line in func_8286D3A0.cpp.
template <>
void List_8286CD88::_Insert(const_iterator where, const Element_8286D3A0 &value);

extern "C" void *fn_8286CBF0(void *mem);

struct Scheduler_8286CD88 {
    char pad0[0x10];
    unsigned int count;
    int pad14;
    List_8286CD88 tests;
};

extern "C" void *fn_8286CD88(Scheduler_8286CD88 *self)
{
    unsigned int tag[6];
    void *mem = fn_82811080(lbl_832116F8, 0x5c, fn_82811400(tag, 4));
    void *test = mem ? fn_8286CBF0(mem) : 0;
    Element_8286D3A0 e;
    e.data = (int)test;
    if (test != 0) {
        self->tests.push_back(e);
        self->count++;
        return test;
    }
    return 0;
}
