// Set the mapped flag for keys 0 through 26. The map uses the system
// allocator with category 0. Its hinted insertion is out of line:
// func_8288A9B8.cpp, which carries the name of the
// std::set<Element_8288A658>::_Insert over the same node layout.
namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
}
#define _Xlength_error fn_82F622A8
#include <map>
#include <set>
#undef _Xlength_error
#include "game/Allocator_825089A0.h"

struct Element_8288A658 {
    unsigned int data[2];
};

typedef std::set<Element_8288A658, std::less<Element_8288A658>, Allocator_825089A0<Element_8288A658, 0> > Set;
typedef Set::_Mybase SetTree;

template <> SetTree::iterator SetTree::_Insert(SetTree::const_iterator, _Nodeptr);

typedef std::pair<const unsigned int, bool> Value_8288B060;
typedef std::map<unsigned int, bool, std::less<unsigned int>,
    Allocator_825089A0<Value_8288B060, 0> > Map;
typedef Map::_Mybase Tree;
template <> __forceinline Tree::iterator Tree::_Insert(const_iterator where, _Nodeptr node) {
    SetTree *set = reinterpret_cast<SetTree *>(this);
    SetTree::iterator at = set->_Insert(
        SetTree::const_iterator(reinterpret_cast<SetTree::_Nodeptr>(where._Ptr), set),
        reinterpret_cast<SetTree::_Nodeptr>(node));
    return iterator(reinterpret_cast<_Nodeptr>(at._Ptr), this);
}
struct Object_8288B060 { char pad[0x124]; Map flags; };
extern "C" void fn_8288B060(Object_8288B060 *self, bool value) {
    for (unsigned int i = 0; i < 27; ++i) self->flags[i] = value;
}
