// std::_Tree<Traits>::erase(const_iterator, const_iterator) from <xtree>: erases a
// range of a std::set<Element_8289F560>, clearing the whole tree when the range covers it.
// clear, iterator ++ and erase(const_iterator) are the original's out-of-line helpers.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

struct Element_8289F560 {
    unsigned key;
};

inline bool operator<(const Element_8289F560 &a, const Element_8289F560 &b)
{
    return a.key < b.key;
}

typedef std::set<Element_8289F560> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

struct Iter_8289F560 {
    Tree::_Nodeptr node;
};

extern "C" {
__declspec(noalias) Unchecked *fn_828A0E20(Unchecked *self);
void fn_828A2CF8(Tree *self);
Iter_8289F560 *fn_8289E800(Iter_8289F560 *out, Tree *self, Tree::_Nodeptr node);
}

template <> __forceinline Unchecked &Unchecked::operator++()
{
    return *fn_828A0E20(this);
}

template <> __forceinline void Tree::clear()
{
    fn_828A2CF8(this);
}

template <> __forceinline Tree::iterator Tree::erase(const_iterator where)
{
    Iter_8289F560 out;
    Iter_8289F560 *r = fn_8289E800(&out, this, where._Ptr);
    return iterator(r->node, this);
}

template Tree::iterator Tree::erase(const_iterator, const_iterator);
