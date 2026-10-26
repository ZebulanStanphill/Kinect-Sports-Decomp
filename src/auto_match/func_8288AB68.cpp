// Allocate a red tree node and copy its key and byte value.
#include <set>
#include "game/Allocator_825089A0.h"
struct Element_8288AB68 {
 int key; unsigned char value;
 Element_8288AB68(const Element_8288AB68 &other):key(other.key),value(other.value) {}
};
struct Less_8288AB68 { bool operator()(const Element_8288AB68 &,const Element_8288AB68 &) const; };
typedef std::_Tree_val<std::_Tset_traits<Element_8288AB68, Less_8288AB68, Allocator_825089A0<Element_8288AB68,0>, false> > Tree;
extern "C" Tree::_Nodeptr fn_8288AB68(Tree *self, const Element_8288AB68 *value) {
 return self->_Buynode(*value);
}
