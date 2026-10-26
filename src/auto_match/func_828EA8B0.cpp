// Erase a tree subtree using the system allocator. The value type is a
// placeholder for the game's eight-byte tree value.
#include <set>
#include "game/Allocator_825089A0.h"
struct Element_828EA8B0 { int data[2]; };
typedef std::set<Element_828EA8B0, std::less<Element_828EA8B0>, Allocator_825089A0<Element_828EA8B0,0> > Set;
typedef Set::_Mybase Tree;
extern "C" void fn_828EA8B0(Tree *self, Tree::_Node *node);
template <> __forceinline void Tree::_Erase(_Nodeptr node) { fn_828EA8B0(this,node); }
extern "C" void fn_828EA8B0(Tree *self, Tree::_Node *node) {
 for (Tree::_Node *p = node; !p->_Isnil; node = p) { fn_828EA8B0(self,p->_Right); p = p->_Left; fn_825089A0()->vf28(node); }
}
