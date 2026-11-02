// Destructor body of an object that owns a heap object at 0x3c, a string at
// 0x1c and a std::set at 0x4. The set's destructor from Visual C++ 2010's
// <xtree> erases every element with erase(const_iterator, const_iterator)
// (defined by func_82365580.cpp) and frees the head node. Element_823656A8 is a
// placeholder for the set's 8-byte value type.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

struct Element_823656A8 {
    unsigned char data[8];
};

inline bool operator<(const Element_823656A8 &a, const Element_823656A8 &b)
{
    return a.data[0] < b.data[0];
}

typedef std::set<Element_823656A8> Set;
typedef Set::_Mybase Tree;

extern "C" {
void fn_82230300(void *p, int a, int b);
void fn_822B1B28(void *p);
void fn_82359C18(void *p);
void fn_8265CA20(void *p);
extern char lbl_821B9368[];
}

template <> __forceinline void std::allocator<Tree::_Node>::deallocate(pointer ptr, size_type)
{
    fn_8265CA20(ptr);
}

template <> Tree::iterator Tree::erase(const_iterator, const_iterator);

struct Obj_82437DA8 {
    void *vtbl;
    Set set;
    int pad14[2];
    char m1c[0x3c - 0x1c];
    char *m3c;
};

extern "C" void fn_82437DA8(Obj_82437DA8 *self)
{
    char *p = self->m3c;
    self->vtbl = lbl_821B9368;
    if (p != 0) {
        fn_82359C18(p + 0x10);
        fn_822B1B28(p);
        fn_8265CA20(p);
    }
    fn_82230300(self->m1c, 1, 0);
    self->set.~Set();
}
