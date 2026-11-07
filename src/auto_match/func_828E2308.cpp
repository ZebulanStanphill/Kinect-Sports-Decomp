// std::_Uninitialized_move from Visual C++ 2010's <memory> for the vector
// element of fn_828E2360 (an int and a std::deque). The deque copy
// constructor stays a call to fn_828D7660; Deque_828E2308 stands in for the
// deque so that only that call is generated. Needs /d2inlS1000 (LTCG inlining).
#include <memory>
struct Deque_828E2308;
extern "C" void fn_828D7660(Deque_828E2308 *self, const Deque_828E2308 *other);
struct Deque_828E2308 {
    int data[6];
    Deque_828E2308(const Deque_828E2308 &other) { fn_828D7660(this, &other); }
};
struct Element_828E2308 { int unk0; Deque_828E2308 unk4; };
typedef Element_828E2308 T;
extern "C" T *fn_828E2308(T *first, T *last, T *dest, std::allocator<T> *al)
{
    return std::_Uninitialized_move(first, last, dest, *al);
}
