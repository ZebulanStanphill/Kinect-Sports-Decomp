// The constructor of std::_Tree_val<Traits> from Visual C++ 2010's <xtree>,
// which std::set and std::map share. It allocates the tree's head node.
// Element_8288BEC0 is a placeholder for the game's 28-byte value type. The
// container allocates through the object fn_825089A0 returns (see
// game/Allocator_825089A0.h), passing it 1. Other units call this function by
// its fn_ name, so it is a wrapper around the member.
//
// The game was built with link-time code generation, which inlined more than
// the compiler does by itself; /d2inlS1000 (in objects.json) lets it inline as
// much. std::_Xlength_error keeps the name that C units use.

// The headers call std::_Xlength_error directly, so its name is replaced here.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <set>
#undef _Xlength_error
#include "game/Allocator_825089A0.h"

struct Element_8288BEC0 {
    int data[7];
};

typedef std::set<Element_8288BEC0, std::less<Element_8288BEC0>, Allocator_825089A0<Element_8288BEC0, 1> > Set;
typedef Set::_Mybase Tree;

typedef std::_Tree_val<std::_Tset_traits<Element_8288BEC0, std::less<Element_8288BEC0>, Allocator_825089A0<Element_8288BEC0, 1>, false> > TreeVal;

extern "C" TreeVal *fn_8288BEC0(TreeVal *self, const TreeVal::key_compare *comp, TreeVal::allocator_type alloc)
{
    // Visual C++ allows calling a constructor on an object like a member function
    self->TreeVal::_Tree_val(*comp, alloc);
    return self;
}
