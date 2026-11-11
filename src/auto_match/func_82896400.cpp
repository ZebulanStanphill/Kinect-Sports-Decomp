// std::map<unsigned int, Deque>::operator[] from Visual C++ 2010's <map>. It
// finds the deque stored under a key and inserts an empty one when the key is
// missing. The map allocates through the object fn_825089A0 returns, with
// category 1 (see game/Allocator_825089A0.h).
//
// Deque_82896400 stands in for a std::deque whose members are called out of
// line by their fn_ names: fn_828A20D0 constructs the base from an allocator
// passed by value, fn_82894C90 moves another deque into it and fn_8288C358
// frees its blocks. The move constructor binds the copied allocator to a
// reference, so it shares its stack slot with the default constructor's
// allocator. The tree's _Buynode and _Insert are out of line too.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 lets it inline as much.

namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <deque>
#include <map>
#include <set>
#undef _Xlength_error
#include "game/Allocator_825089A0.h"

// The element type of func_82894E98.cpp's set, whose hinted _Insert this
// map's _Insert is.
struct Item_82892488 {
    char data;
};

struct Element_82892488 {
    unsigned int key;
    std::deque<Item_82892488, Allocator_825089A0<Item_82892488, 0> > items;
};

typedef std::set<Element_82892488, std::less<Element_82892488>, Allocator_825089A0<Element_82892488, 0> > Set;
typedef Set::_Mybase SetTree;

template <> SetTree::iterator SetTree::_Insert(SetTree::const_iterator, _Nodeptr);

struct Deque_82896400;

struct Alloc_82896400 {
    Alloc_82896400() {}
};

extern "C" {
void fn_828A20D0(Deque_82896400 *self, Alloc_82896400 alloc);
void fn_82894C90(Deque_82896400 *self, Deque_82896400 *other);
void fn_8288C358(Deque_82896400 *self);
}

struct Deque_82896400 {
    void *proxy;
    int data[4];
    Alloc_82896400 alval, almap;

    Alloc_82896400 get_allocator() const { return alval; }

    Deque_82896400() { fn_828A20D0(this, Alloc_82896400()); }
    Deque_82896400(Deque_82896400 &&other)
    {
        const Alloc_82896400 &alloc = other.get_allocator();
        fn_828A20D0(this, alloc);
        fn_82894C90(this, &other);
    }
    ~Deque_82896400()
    {
        fn_8288C358(this);
        void *block = proxy;
        fn_825089A0()->vf28(block);
        proxy = 0;
    }
};

typedef std::pair<const unsigned int, Deque_82896400> Value;
typedef std::map<unsigned int, Deque_82896400, std::less<unsigned int>,
    Allocator_825089A0<Value, 1> > Map;
typedef Map::_Mybase Tree;
typedef Tree::_Mybase TreeVal;

extern "C" {
Tree::_Nodeptr fn_82896158(TreeVal *self, const Value *value);
}

template <>
template <>
__forceinline TreeVal::_Nodeptr TreeVal::_Buynode<Value>(Value &&value)
{
    return fn_82896158(this, &value);
}

template <>
__forceinline Tree::iterator Tree::_Insert(const_iterator where, _Nodeptr node)
{
    SetTree *set = reinterpret_cast<SetTree *>(this);
    SetTree::iterator at = set->_Insert(
        SetTree::const_iterator(reinterpret_cast<SetTree::_Nodeptr>(where._Ptr), set),
        reinterpret_cast<SetTree::_Nodeptr>(node));
    return iterator(reinterpret_cast<_Nodeptr>(at._Ptr), this);
}

extern "C" Deque_82896400 *fn_82896400(Map *self, const unsigned int *key)
{
    return &(*self)[*key];
}
