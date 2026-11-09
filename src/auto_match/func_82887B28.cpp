// Returns a pointer to the byte that the std::set<Element_828DF458> (in effect
// a map from an int to a byte) holds for *key, inserting the key with a zero
// byte when it is missing: the shape of std::map::operator[] from Visual C++
// 2010's <map>, with the lower bound inline and the hinted
// _Tree::insert(const_iterator, _Valty&&) inline. Element_828DF458 is a
// placeholder for the game's 8-byte value type; its member-wise copy
// constructor keeps the new value in registers, as in the original.
//
// The node allocation stays a call to fn_8289EE00 (the tree's _Buynode(), which
// the linker folded with other trees' ones), and the hinted
// _Insert(const_iterator, _Nodeptr) is the real member, func_82887928.cpp.
// Converted from the Matching C version so that fn_82887928 can take its member
// name; it keeps its fn_ name, as C units call it.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error

struct Element_828DF458 {
    int key;
    char value;

    Element_828DF458(int k, char v) : key(k), value(v) {}
    Element_828DF458(const Element_828DF458 &o) : key(o.key), value(o.value) {}
};

inline bool operator<(const Element_828DF458 &a, const Element_828DF458 &b)
{
    return a.key < b.key;
}

typedef std::set<Element_828DF458> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;

extern "C" Node *fn_8289EE00(Tree::_Mybase *self);

template <> __forceinline Tree::_Nodeptr Tree::_Mybase::_Buynode()
{
    return fn_8289EE00(this);
}

template <> Tree::iterator Tree::_Insert(const_iterator, _Nodeptr);

extern "C" char *fn_82887B28(Tree *t, int *key)
{
    Node *where = t->_Myhead;
    Node *n = t->_Myhead->_Parent;
    while (!n->_Isnil) {
        if (n->_Myval.key < *key) {
            n = n->_Right;
        } else {
            where = n;
            n = n->_Left;
        }
    }
    Tree::iterator it(where, t);
    if (it == t->end() || *key < it->key) {
        it = t->insert(it, Element_828DF458(*key, 0));
    }
    return &it._Mynode()->_Myval.value;
}
