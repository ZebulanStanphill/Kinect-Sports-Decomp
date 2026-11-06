// std::map<std::string, std::set<Element_828A61C8> >::operator[]: lower_bound, then build a
// (key, empty set) pair, copy it into a new node and insert that before the hint when the key
// is missing. Helpers are the out-of-line pieces of that instantiation (extern "C" names).
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#include <string>
#undef _Xlength_error
#undef _Xout_of_range

#include "game/Element_828A61C8.h"

extern "C" int fn_8260D428(const std::string *self, unsigned int off, unsigned int n0, const char *ptr,
                           unsigned int count);

template <> __forceinline int std::string::compare(std::string::size_type off, std::string::size_type n0,
                                                   const char *ptr, std::string::size_type count) const
{
    return fn_8260D428(this, off, n0, ptr, count);
}

typedef std::set<Element_828A61C8> Set;
typedef Set::_Mybase SetTree;

template <> SetTree::iterator SetTree::erase(const_iterator, const_iterator);

// Raw layouts (no constructors) of std::string (0x1c bytes) and the set (0x10 bytes).
struct String_828C35A0 {
    char buf[16];
    unsigned int size;
    unsigned int res;
    int pad18;
};

struct SetRaw_828C35A0 {
    int alloc;
    void *head;
    unsigned int size;
    int padC;
};

struct Pair_828C35A0 {
    String_828C35A0 key;
    SetRaw_828C35A0 value;
};

struct Node_828C35A0 {
    Node_828C35A0 *left;
    Node_828C35A0 *parent;
    Node_828C35A0 *right;
    Pair_828C35A0 value;
};

struct Map_828C35A0 {
    int alloc;
    Node_828C35A0 *head;
    unsigned int size;
};

struct Empty_828C35A0 {
    char c;
};

extern "C" {
void fn_8265CA20(void *p);
Node_828C35A0 *fn_828C2110(Map_828C35A0 *m, const std::string *key);
SetRaw_828C35A0 *fn_828A2348(SetRaw_828C35A0 *self, const Empty_828C35A0 *comp, const Empty_828C35A0 *al);
void fn_82230218(String_828C35A0 *self, const std::string *right, unsigned int off, unsigned int count);
void fn_828C2E18(SetRaw_828C35A0 *self, SetRaw_828C35A0 *right);
Node_828C35A0 *fn_828C2018(Map_828C35A0 *m);
void fn_828C2E90(Pair_828C35A0 *self, Pair_828C35A0 *right);
void fn_828C32C0(Node_828C35A0 **ret, Map_828C35A0 *m, Node_828C35A0 *where, Node_828C35A0 *node);
void fn_828A6F20(Pair_828C35A0 *p);
}

static __forceinline Node_828C35A0 *Insert_828C35A0(Map_828C35A0 *m, Node_828C35A0 *where, Node_828C35A0 *node)
{
    Node_828C35A0 *r;

    fn_828C32C0(&r, m, where, node);
    return r;
}

extern "C" SetRaw_828C35A0 *fn_828C35A0(Map_828C35A0 *m, const std::string *key)
{
    Node_828C35A0 *where;
    Node_828C35A0 *node;
    Empty_828C35A0 comp;
    SetRaw_828C35A0 empty;
    Pair_828C35A0 val;

    where = fn_828C2110(m, key);
    if (where == m->head || *key < *(const std::string *)&where->value.key) {
        fn_828A2348(&empty, &comp, &comp);
        val.key.size = 0;
        val.key.res = 15;
        val.key.buf[0] = 0;
        fn_82230218(&val.key, key, 0, (unsigned int)-1);
        fn_828C2E18(&val.value, &empty);
        node = fn_828C2018(m);
        if (&node->value != 0) {
            fn_828C2E90(&node->value, &val);
        }
        where = Insert_828C35A0(m, where, node);
        fn_828A6F20(&val);
        ((Set *)&empty)->erase(((Set *)&empty)->begin(), ((Set *)&empty)->end());
        fn_8265CA20(empty.head);
    }
    return &where->value.value;
}
