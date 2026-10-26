// Destroy a subtree, unlinking each registered value before freeing its node.
#include <new>
#include "game/Allocator_825089A0.h"
extern "C" long _InterlockedCompareExchange(long *, long, long);
extern "C" void __emit(unsigned int);
#define __lwsync() __emit(0x7c2004ac)
struct Link_8289BB08 { Link_8289BB08 *prev, *next; };
struct Spin_8289BB08 { int pad[2]; long value;
 void acquire() { while (_InterlockedCompareExchange(&value, 1, 0)) {} __lwsync(); }
 void release() { __lwsync(); value = 0; }
};
struct Registry_8289BB08 { int pad; Spin_8289BB08 spin; };
struct Element_8289BB08 { int data; Link_8289BB08 link; Registry_8289BB08 *registry; };
struct Node_8289BB08 { Node_8289BB08 *left, *parent, *right; Element_8289BB08 value; char color, isnil; };
extern "C" void fn_8289BB08(void *self, Node_8289BB08 *root) {
 for (Node_8289BB08 *p = root; !p->isnil; root = p) {
  fn_8289BB08(self, p->right);
  p = p->left;
  if (root->value.registry) {
   Spin_8289BB08 *lock = &root->value.registry->spin;
   lock->acquire();
   root->value.link.prev->next = root->value.link.next;
   root->value.link.next->prev = root->value.link.prev;
   lock->release();
  }
  fn_825089A0()->vf28(root);
 }
}
