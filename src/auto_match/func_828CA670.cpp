// std::_Tree<Traits>::erase(const_iterator, const_iterator) from <xtree>: erases a
// range of a std::set<Element_828CA670>, clearing the whole tree when the range covers it.
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

struct Element_828CA670 {
    unsigned key;
};

inline bool operator<(const Element_828CA670 &a, const Element_828CA670 &b)
{
    return a.key < b.key;
}

typedef std::set<Element_828CA670> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

struct Iter_828CA670 {
    Tree::_Nodeptr node;
};

extern "C" {
__declspec(noalias) Unchecked *fn_828C8C90(Unchecked *self);
void fn_828CA618(Tree *self);
Iter_828CA670 *fn_828C9FD8(Iter_828CA670 *out, Tree *self, Tree::_Nodeptr node);
}

template <> __forceinline Unchecked &Unchecked::operator++()
{
    return *fn_828C8C90(this);
}

template <> __forceinline void Tree::clear()
{
    fn_828CA618(this);
}

template <> __forceinline Tree::iterator Tree::erase(const_iterator where)
{
    Iter_828CA670 out;
    Iter_828CA670 *r = fn_828C9FD8(&out, this, where._Ptr);
    return iterator(r->node, this);
}

template Tree::iterator Tree::erase(const_iterator, const_iterator);
