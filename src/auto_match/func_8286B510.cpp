// std::_Tree<Traits>::insert(_Valty&&) from Visual C++ 2010's <xtree>, for the
// std::set whose _Linsert is func_8286AB68.cpp and _Insert func_8286A528.cpp:
// builds a node for the value and links it in with _Linsert(node, false).
// Converted from the Matching extern "C" version so that fn_8286AB68 can take
// its member name; fn_8286B510 takes the insert name (its only caller,
// func_82867AF8, is NonMatching C). The node builder stays the Matching C
// function fn_8286B310, reached through a _Buynode specialisation.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error

extern "C" {
void fn_82864898(void *self);
void fn_8265CA20(void *ptr);
}

struct Element_8286A528 {
    unsigned int unk0;
    struct Unk4 {
        ~Unk4() { fn_82864898(this); }
        int data[9];
    } unk4;
};

inline bool operator<(const Element_8286A528 &a, const Element_8286A528 &b)
{
    return a.unk0 < b.unk0;
}

typedef std::set<Element_8286A528> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;

// fn_8286B310 (a Matching C unit) is the node builder _Tree_val::_Buynode.
extern "C" Node *fn_8286B310(Tree::_Mybase *self, const Element_8286A528 *value);

template <> template <> __forceinline Tree::_Mybase::_Nodeptr
Tree::_Mybase::_Buynode<Element_8286A528>(Element_8286A528 &&value)
{
    return fn_8286B310(this, &value);
}

template Tree::_Pairib Tree::insert<Element_8286A528>(Element_8286A528 &&);
