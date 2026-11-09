// Create a player profile through the system service, then index the result
// in both profile registries. Descriptor_828EB920 preserves the by-value ABI.
// Each registry is a std::set<Element_828EA970> ({key, profile}); the new
// node comes from fn_828EB1E8 and is linked in by the real
// _Tree::_Linsert(_Nodeptr, false) member, func_828EAFD8.cpp, whose returned
// pair lands in the value's stack slot. Converted so that fn_828EAFD8 can take
// its member name.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error
#include "game/Allocator_825089A0.h"

struct Element_828EA970 {
    unsigned int key;
    unsigned int value;
};

inline bool operator<(const Element_828EA970 &a, const Element_828EA970 &b)
{
    return a.key < b.key;
}

typedef std::set<Element_828EA970, std::less<Element_828EA970>, Allocator_825089A0<Element_828EA970, 0> > Set;
typedef Set::_Mybase Tree;

template <> Tree::_Pairib Tree::_Linsert(_Nodeptr, bool);

struct Descriptor_828EB920 { unsigned int words[9]; };
struct Profile_828EB920 { char pad[0x54]; unsigned int key; };
struct Pair_828EB920 { unsigned int key; Profile_828EB920 *value; };
// The service object fn_825089A0 returns, with the slots after vf28 that this
// function needs.
struct System_828EB920 : System_825089A0 {
    virtual void vf2C();
    virtual void vf30(); virtual void vf34(); virtual void vf38();
    virtual Profile_828EB920 *vf3C(int, int, int, unsigned __int64,
        Descriptor_828EB920, void *, int, bool, int, int, int, int, bool, bool);
};
extern "C" {
void fn_8251C390(void *, const char *, int);
void fn_829E53B0(void *);
Tree *fn_828EB278(); Tree *fn_828EB7C8();
Tree::_Nodeptr fn_828EB1E8(Tree *, Pair_828EB920 *);
Profile_828EB920 *fn_828EB920(int a, void *name, unsigned __int64 b,
    Descriptor_828EB920 desc, int c, bool d, int e, int f, int g, int h, bool i)
{
    char scope[16];
    fn_8251C390(scope, "D:\\Work\\R1SDK\\Olympus_testing\\NetworkLibrary\\NetworkLibrary\\PlayerProfile\\PlayerProfile.cpp", 0x246);
    Profile_828EB920 *profile = static_cast<System_828EB920 *>(fn_825089A0())->vf3C(1, 0, a, b, desc, name,
        c, d, e, f, g, h, false, i);
    Tree *registry = fn_828EB278();
    Pair_828EB920 value;
    value.key = profile->key;
    value.value = profile;
    new (&value) Tree::_Pairib(registry->_Linsert(fn_828EB1E8(registry, &value), false));
    registry = fn_828EB7C8();
    value.key = profile->key;
    value.value = profile;
    new (&value) Tree::_Pairib(registry->_Linsert(fn_828EB1E8(registry, &value), false));
    fn_829E53B0(scope);
    return profile;
}
}
