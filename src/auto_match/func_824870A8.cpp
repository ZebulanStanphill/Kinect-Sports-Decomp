// Calls a std::tr1::function predicate on every element of a std::map until it returns false.
// The set iterator ++ is the original's out-of-line (folded) fn_82248B90.
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
#include <map>
#include <functional>
#undef _Xlength_error
#undef _Xout_of_range
#undef _Xfunc

struct Item_824870A8;

typedef std::map<int, Item_824870A8 *> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" {
__declspec(noalias) void fn_82248B90(Unchecked *it);
}

template <> __forceinline Unchecked &Unchecked::operator++()
{
    fn_82248B90(this);
    return *this;
}

struct Matcher_824870A8 {
    Matcher_824870A8(int id, float value) : id(id), value(value)
    {
    }

    int operator()(Item_824870A8 *const &item) const;
    int id;
    float value;
};

struct Owner_824870A8 {
    int pad0;
    Set items; /* 0x04 */
    int id;    /* 0x14 */
};

extern "C" void fn_824870A8(Owner_824870A8 *self, float value)
{
    std::tr1::function<int(Item_824870A8 *const &)> match = Matcher_824870A8(self->id, value);
    Set::iterator end = self->items.end();
    for (Set::iterator it = self->items.begin(); it != end; ++it) {
        if (!match(it->second)) {
            break;
        }
    }
}
