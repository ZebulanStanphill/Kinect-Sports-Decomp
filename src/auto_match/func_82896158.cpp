// Allocate a tree node containing an integer key and a nested container.
// Element_82896158 and Inner_82896158 stand in for unidentified game types.
// The inner copy constructs its allocator tag, then copies its contents.
// The VC10 tree helpers are inlined with /O2 /d2inlS1000.
#include <set>
#include "game/Allocator_825089A0.h"
struct Tag_82896158 { Tag_82896158() {} };
struct Inner_82896158;
extern "C" void fn_828A20D0(Inner_82896158 *, Tag_82896158);
extern "C" void fn_82894C90(Inner_82896158 *, const Inner_82896158 *);
struct Inner_82896158 {
    int data[6];
    Inner_82896158(const Inner_82896158 &other) {
        const Tag_82896158 &tag = Tag_82896158(); fn_828A20D0(this, tag);
        fn_82894C90(this, &other);
    }
};
struct Element_82896158 { int key; Inner_82896158 inner; };
typedef Allocator_825089A0<Element_82896158, 1> Allocator;
typedef std::set<Element_82896158, std::less<Element_82896158>, Allocator> Set;
typedef Set::_Mybase Tree;
extern "C" Tree::_Node *fn_82896158(Tree *self, const Element_82896158 *value) {
    return self->_Buynode(*value);
}
