// Placeholder for the class destroyed by the function at 0x828E4E68: a base with
// the vtable lbl_820260A8, a std::set of the entries that func_828E48F0 erases,
// and a std::vector. Named after the address of the destructor until the class is
// known; the vector's element type is unknown too (only its storage is freed).

#ifndef GAME_OBJ_828E4E68_H
#define GAME_OBJ_828E4E68_H

#include <memory>
#include <set>
#include <vector>

// The same placeholder as in func_828E48F0.cpp: a 24-byte value ordered by its
// first word, with a std::tr1::shared_ptr at offset 8.
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

typedef std::set<Element_828E48F0> Set_828E48F0;
typedef Set_828E48F0::_Mybase Tree_828E48F0;
typedef std::vector<void *> Items_828E4E68;

extern "C" {
extern char lbl_820260A8[]; // the base class's vtable
void fn_8265CA20(void *ptr); // operator delete
}

// The range erase is the out-of-line member (func_828E48F0.cpp); the allocators
// free through the name C units use for operator delete.
template <> Tree_828E48F0::iterator Tree_828E48F0::erase(const_iterator, const_iterator);
template <> __forceinline void std::allocator<Tree_828E48F0::_Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}
template <> __forceinline void std::allocator<void *>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

struct Base_828E4E68 {
    void *vtbl;
    int unk4;
    ~Base_828E4E68() { vtbl = lbl_820260A8; }
};

struct Obj_828E4E68 : Base_828E4E68 {
    Set_828E48F0 entries;
    Items_828E4E68 items;
    ~Obj_828E4E68();
};

#endif
