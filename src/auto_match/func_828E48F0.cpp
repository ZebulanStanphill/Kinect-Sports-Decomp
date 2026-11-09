// std::_Tree<Traits>::erase(const_iterator, const_iterator) from <xtree>: erases a
// range of a std::set<Element_828E48F0>, clearing the whole tree when the range covers it.
// clear and iterator ++ are the original's out-of-line helpers; erase(const_iterator)
// is the real member, func_828E4160.cpp.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <memory>
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

// Element_828E48F0 is a placeholder for the game's 24-byte value type, ordered
// by its first word, with a std::tr1::shared_ptr at offset 8.
struct Element_828E48F0 {
    struct Object;
    unsigned key;
    int unk4;
    std::tr1::shared_ptr<Object> unk8;
    int unk10;
    int unk14;
};

inline bool operator<(const Element_828E48F0 &a, const Element_828E48F0 &b)
{
    return a.key < b.key;
}

typedef std::set<Element_828E48F0> Set;
typedef Set::_Mybase Tree;
typedef std::_Tree_unchecked_const_iterator<Tree::_Mybase> Unchecked;

extern "C" {
__declspec(noalias) Unchecked *fn_828E26F0(Unchecked *self);
void fn_828E4710(Tree *self);
}

template <> __forceinline Unchecked &Unchecked::operator++()
{
    return *fn_828E26F0(this);
}

template <> __forceinline void Tree::clear()
{
    fn_828E4710(this);
}

template <> Tree::iterator Tree::erase(const_iterator where);

template Tree::iterator Tree::erase(const_iterator, const_iterator);
