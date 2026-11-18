// Calls a std::tr1::function on every element of a range with std::for_each. The function
// object's _Tidy is the out-of-line (folded) fn_82359C18.
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

struct Entry_824C8258 {
    int key;   /* 0x0 */
    int value; /* 0x4 */
};

typedef std::tr1::function<void(const Entry_824C8258 &)> Visitor;
typedef std::tr1::_Function_impl1<void, const Entry_824C8258 &> VisitorImpl;

extern "C" void fn_82359C18(VisitorImpl *self);

template <> __forceinline void VisitorImpl::_Tidy()
{
    fn_82359C18(this);
}

struct Range_824C8258 {
    Entry_824C8258 *begin; /* 0x0 */
    Entry_824C8258 *end;   /* 0x4 */
};

extern "C" void fn_824C8258(Range_824C8258 *range, const Visitor &visitor)
{
    std::for_each(range->begin, range->end, visitor);
}
