// Allocate a tree node and construct its 16-byte value through the allocator.
// Element_8289BD20 stands in for the unidentified value type. Its allocator
// construct helper stays a call to fn_8289B1F8. The VC10 tree helpers are
// inlined with /O2 /d2inlS1000.
#include <set>
#include "game/Allocator_825089A0.h"
struct Element_8289BD20 { int data[4]; };
typedef Allocator_825089A0<Element_8289BD20, 1> Allocator;
typedef std::set<Element_8289BD20, std::less<Element_8289BD20>, Allocator> Set;
typedef Set::_Mybase Tree;
typedef Tree::_Node Node;
extern "C" void fn_8289B1F8(Allocator *, Element_8289BD20 *, const Element_8289BD20 *);
template <> __forceinline void Allocator::construct(Element_8289BD20 *ptr, const Element_8289BD20 &value) {
    fn_8289B1F8(this, ptr, &value);
}
extern "C" Node *fn_8289BD20(Tree *self, const Element_8289BD20 *value) {
    return self->_Buynode(*value);
}
