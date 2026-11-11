// std::_Tree_unchecked_const_iterator::operator-- from Visual C++ 2010's <xtree> for
// a std::set<Element_828EF040>; the element is 0x3d bytes (node colour at 0x49).
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error

struct Element_828EF040 {
    unsigned char data[0x3d];
};

inline bool operator<(const Element_828EF040 &a, const Element_828EF040 &b)
{
    return a.data[0] < b.data[0];
}

typedef std::set<Element_828EF040> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

template Unchecked &Unchecked::operator--();
