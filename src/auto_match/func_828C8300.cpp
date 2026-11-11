// std::set<Element_8289E128>::insert(const value_type &): buys a node
// (fn_8289E3C8), copies the value into it and links it with the _Linsert of
// func_828C81A0.cpp.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error

struct Element_8289E128 {
    int data[1];
};

typedef std::set<Element_8289E128> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;

template <> Tree::_Pairib Tree::_Linsert(_Nodeptr, bool);

extern "C" Node *fn_8289E3C8(Tree *self);

template struct std::pair<Tree::iterator, bool>;

extern "C" Tree::_Pairib fn_828C8300(Tree *self, const Element_8289E128 *value)
{
    Node *node = fn_8289E3C8(self);
    ::new ((void *)&node->_Myval) Element_8289E128(*value);
    return self->_Linsert(node, false);
}
