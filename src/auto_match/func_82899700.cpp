// The constructor of std::_Tree_val<Traits> from Visual C++ 2010's <xtree>,
// which std::set and std::map share. It allocates the tree's head node.
// Element_82899700 is a placeholder for the game's 16-byte value type. The
// container allocates through the object fn_825089A0 returns (see
// game/Allocator_825089A0.h), passing it 1.
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

struct Element_82899700 {
    int data[4];
};

typedef std::set<Element_82899700, std::less<Element_82899700>, Allocator_825089A0<Element_82899700, 1> > Set;
typedef Set::_Mybase Tree;

typedef std::_Tree_val<std::_Tset_traits<Element_82899700, std::less<Element_82899700>, Allocator_825089A0<Element_82899700, 1>, false> > TreeVal;

template TreeVal::_Tree_val(const key_compare &, allocator_type);
