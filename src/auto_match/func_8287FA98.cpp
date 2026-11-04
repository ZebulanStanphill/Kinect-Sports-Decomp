// std::_Tree<Traits>::erase(const_iterator, const_iterator) from Visual C++
// 2010's <xtree>: erases a range of a std::set, clearing the whole tree when the
// range covers it. Element_8287EFA0 is a placeholder for the game's 240-byte
// value type (see func_8287F8E8.cpp).
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

struct __declspec(align(8)) Element_8287EFA0 {
    unsigned key;
    int data[59];
};

inline bool operator<(const Element_8287EFA0 &a, const Element_8287EFA0 &b)
{
    return a.key < b.key;
}

typedef std::set<Element_8287EFA0> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

struct Iter_8287FA98 {
    Tree::_Nodeptr node;
};

extern "C" {
void fn_8287F890(Tree *self);
Iter_8287FA98 *fn_8287F198(Iter_8287FA98 *out, Tree *self, Tree::_Nodeptr node);
}

template <> __declspec(noalias) Unchecked &Unchecked::operator++();

template <> __forceinline void Tree::clear()
{
    fn_8287F890(this);
}

template <> __forceinline Tree::iterator Tree::erase(const_iterator where)
{
    Iter_8287FA98 out;
    Iter_8287FA98 *r = fn_8287F198(&out, this, where._Ptr);
    return iterator(r->node, this);
}

template Tree::iterator Tree::erase(const_iterator, const_iterator);
