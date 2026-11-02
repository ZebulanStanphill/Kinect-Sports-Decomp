// Adds an object to the std::set at offset 0x22c of the owner, keyed by the
// object's word at offset 0xc. The set's insert(value_type &&) from Visual
// C++ 2010's <xtree> allocates a node and links it in with _Linsert (defined by
// func_82880A10.cpp). Element_82880A10 is a placeholder for the set's 8-byte
// value type: the key and the object. Its member-wise copy lets the compiler
// keep the temporary in registers, as the original does.
//
// _Buynode() stays a call to fn_8289EE00, which the linker folded with other
// trees' node allocation.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error

struct Element_82880A10 {
    unsigned int key;
    void *object;
    Element_82880A10(unsigned int k, void *o) : key(k), object(o) {}
    Element_82880A10(const Element_82880A10 &o) : key(o.key), object(o.object) {}
};

inline bool operator<(const Element_82880A10 &a, const Element_82880A10 &b)
{
    return a.key < b.key;
}

typedef std::set<Element_82880A10> Set;
typedef Set::_Mybase Tree;

typedef Tree::_Mybase Val;

extern "C" Tree::_Nodeptr fn_8289EE00(Val *self);

template <> __forceinline Val::_Nodeptr Val::_Buynode()
{
    return fn_8289EE00(this);
}

template <> Tree::_Pairib Tree::_Linsert(_Nodeptr, bool);

struct Object_8289F6C0 {
    int unk0[3];
    unsigned int key;
};

extern "C" void fn_8289F6C0(char *self, Object_8289F6C0 *object)
{
    ((Set *)(self + 0x22c))->insert(Element_82880A10(object->key, object));
}
