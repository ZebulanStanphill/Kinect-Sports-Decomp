// Looks a string key up in the std::set at offset 8 of the owner and erases
// the element it finds. The key string is built by fn_82230110 and destroyed by
// fn_82230300; the lookup stays a call to fn_824A2FC0. The game was built with
// link-time code generation, which knew that the lookup only writes the
// iterator it returns; __declspec(noalias) tells the compiler the same, so that
// iterator and the one erase returns share a stack slot. erase(const_iterator),
// from Visual C++ 2010's <xtree>, is defined by func_824A2C00.cpp.
// Element_824A2C00 is a placeholder for the set's 36-byte value type, which
// begins with a string.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

extern "C" void fn_82230300(void *self, int a, int b);

struct Element_824A2C00 {
    unsigned char data[36];
    ~Element_824A2C00() { fn_82230300(this, 1, 0); }
};

inline bool operator<(const Element_824A2C00 &a, const Element_824A2C00 &b)
{
    return a.data[0] < b.data[0];
}

typedef std::set<Element_824A2C00> Set;
typedef Set::_Mybase Tree;

struct Iter_824A2B88 {
    Tree::_Nodeptr node;
};

extern "C" {
void *fn_82230110(void *key);
__declspec(noalias) Iter_824A2B88 *fn_824A2FC0(Iter_824A2B88 *ret, Tree *tree, void *key);
}

template <> Tree::iterator Tree::erase(const_iterator);

struct Obj_824A2B88 {
    int f0;
    int f4;
    Set set;
};

extern "C" void fn_824A2B88(Obj_824A2B88 *o)
{
    Iter_824A2B88 it;
    char key[32];
    fn_824A2FC0(&it, &o->set, fn_82230110(key));
    fn_82230300(key, 1, 0);
    if (it.node != o->set._Myhead)
        o->set.erase(Tree::const_iterator(it.node, &o->set));
}
