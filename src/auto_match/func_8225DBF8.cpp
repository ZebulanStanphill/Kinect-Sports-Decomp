// Calls a std::tr1::function taken by value on every element of a pointer range with std::for_each.
// The function object's _Tidy is the out-of-line (folded) fn_82359C18.
namespace std
{
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);

namespace tr1
{
extern "C" __declspec(noreturn) void fn_82F63108(void);
}
} // namespace std

#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#define _Xfunc fn_82F63108
#include <algorithm>
#include <functional>
#undef _Xlength_error
#undef _Xout_of_range
#undef _Xfunc

typedef std::tr1::function<void(int)> Visitor;
typedef std::tr1::_Function_impl1<void, int> VisitorImpl;

extern "C" void fn_82359C18(VisitorImpl *self);

template <> __forceinline void VisitorImpl::_Tidy()
{
    fn_82359C18(this);
}

struct Owner_8225DBF8 {
    int unknown[4]; /* 0x0 */
    int *begin;     /* 0x10 */
    int *end;       /* 0x14 */
};

extern "C" void fn_8225DBF8(Owner_8225DBF8 *owner, Visitor visitor)
{
    std::for_each(owner->begin, owner->end, visitor);
}
