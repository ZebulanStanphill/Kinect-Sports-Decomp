// Erases every element whose unsigned key (the value's first word) equals
// *keyp from the global std::set<Element_82825AD0> that lbl_83276564 points
// to, and returns how many it erased: the equal range is found inline, counted
// with the folded iterator increment fn_82381BC0, and erased by the real
// _Tree::erase(const_iterator, const_iterator) member, func_82386910.cpp,
// whose returned iterator lands in the counting iterator's stack slot.
// Converted from the Matching C version so that fn_82386910 can take its
// member name; it keeps its fn_ name, as C units call it.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

struct Element_82825AD0 {
    int data[2];
};

inline bool operator<(const Element_82825AD0 &a, const Element_82825AD0 &b)
{
    return a.data[0] < b.data[0];
}

typedef std::set<Element_82825AD0> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;

template <> Tree::iterator Tree::erase(const_iterator, const_iterator);

typedef struct It_823866C0 {
    Node *p;
} It_823866C0;

extern "C" {
void fn_82381BC0(It_823866C0 *it);
extern Tree *lbl_83276564;
}

static __forceinline unsigned int key(Node *n)
{
    return (unsigned int)n->_Myval.data[0];
}

extern "C" int fn_823866C0(unsigned int *keyp)
{
    Tree *tree = lbl_83276564;
    Node *lo = tree->_Myhead;
    Node *hi = tree->_Myhead;
    Node *n = lo->_Parent;
    It_823866C0 it;
    int count;
    while (!n->_Isnil) {
        if (key(n) < *keyp) {
            n = n->_Right;
        } else {
            if (hi->_Isnil && *keyp < key(n)) {
                hi = n;
            }
            lo = n;
            n = n->_Left;
        }
    }
    n = hi->_Isnil ? tree->_Myhead->_Parent : hi->_Left;
    while (!n->_Isnil) {
        if (*keyp < key(n)) {
            hi = n;
            n = n->_Left;
        } else {
            n = n->_Right;
        }
    }
    count = 0;
    it.p = lo;
    while (it.p != hi) {
        count++;
        fn_82381BC0(&it);
    }
    new (&it) Tree::iterator(tree->erase(Tree::const_iterator(lo, tree), Tree::const_iterator(hi, tree)));
    return count;
}
