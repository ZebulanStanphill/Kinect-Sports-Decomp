#include "havok/hkClass.h"

extern "C" int fn_82CEA280(void *ctx, const hkClass *node, int a);
extern "C" void fn_82CEA160(void *ctx, hkMemoryAllocator *heap, const hkClass *node, int flags);
extern "C" const hkClass *fn_82CEAC30(const hkClass *node);

extern "C" void fn_83082980(const hkClass *node, void *ctx, int mask, void (*cb)(const hkClassMember *))
{
  int flags;
  int i;
  const hkClassMember *child;
  const hkClass *sub;
  flags = fn_82CEA280(ctx, node, 0);
  if ((flags & mask) != 0)
    return;
  fn_82CEA160(ctx, &hkMemoryRouter::getInstance().heap(), node, flags | mask);
  for (i = 0; i < node->getNumDeclaredMembers(); i++) {
    child = &node->getDeclaredMember(i);
    sub = child->getClass();
    if (sub != 0)
      fn_83082980(sub, ctx, mask, cb);
    cb(child);
  }
  if (fn_82CEAC30(node) != 0)
    fn_83082980(fn_82CEAC30(node), ctx, mask, cb);
}
