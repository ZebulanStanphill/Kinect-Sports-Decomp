// Recursively releases a tree subtree using the system allocator.
#include <new>
#include "game/Allocator_825089A0.h"
struct Node_82231648 { Node_82231648 *left,*parent,*right; int value[2]; unsigned char color,isnil; };
extern "C" void fn_82231648(void *self,Node_82231648 *root) {
 for (Node_82231648 *node=root; !node->isnil; root=node) {
  fn_82231648(self,node->right); node=node->left; fn_825089A0()->vf28(root);
 }
}
