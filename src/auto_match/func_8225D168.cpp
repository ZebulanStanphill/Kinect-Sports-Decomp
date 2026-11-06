namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

struct Element_8225E3E0 {
    unsigned int pad;
    unsigned int key;
    unsigned char data[52];
};

inline bool operator<(const Element_8225E3E0 &a, const Element_8225E3E0 &b)
{
    return a.key < b.key;
}

typedef std::set<Element_8225E3E0> Set;
typedef Set::_Mybase Tree;

template <> Tree::iterator Tree::erase(const_iterator);

struct Obj_8225D168 {
    int pad[13];
    Set set;
};

extern "C" void fn_8225D168(Obj_8225D168 *o, unsigned int key)
{
    Set *s = &o->set;
    Tree::_Nodeptr where = s->_Myhead;
    Tree::_Nodeptr node = s->_Myhead->_Parent;
    while (!node->_Isnil) {
        if (node->_Myval.key < key) {
            node = node->_Right;
        } else {
            where = node;
            node = node->_Left;
        }
    }
    Tree::iterator w(where, s);
    Tree::iterator r = (where == s->_Myhead || key < where->_Myval.key) ? s->end() : w;
    s->erase(r);
}
