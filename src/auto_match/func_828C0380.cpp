// Releases a tree subtree through the system allocator. Nodes contain a
// placeholder 20-byte value; the left spine is traversed iteratively.
#include <new>
#include "game/Allocator_825089A0.h"
struct Node_828C0380 { Node_828C0380 *left, *parent, *right; int value[5]; unsigned char color, nil; };
extern "C" void fn_828C0380(void *self, Node_828C0380 *root) {
    for (Node_828C0380 *node=root; !node->nil; root=node) {
        fn_828C0380(self,node->right);
        node=node->left;
        fn_825089A0()->vf28(root);
    }
}
