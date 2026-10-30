struct Node { int f0; void *x4; int f8; unsigned int hash; };
struct Handle_826A65E8 {
    Node *node;
    bool equals(const Handle_826A65E8 &o) const;
};
struct Table { int count; unsigned int mask; };
static inline Handle_826A65E8 *KeyOf(unsigned int *p) { return (Handle_826A65E8 *)(p + 2); }

extern "C" unsigned int fn_826BE408(Table **param_1, Handle_826A65E8 **param_2, unsigned int h)
{
  Table *t = *param_1;
  unsigned int *p = (unsigned int *)((char *)t + h * 0x30 + 8);
  unsigned int cur = h;
  if (*p != 0xfffffffe && (KeyOf(p)->node->hash & t->mask) == h) {
    for (;;) {
      if ((t->mask & KeyOf(p)->node->hash) == h && (*param_2)->equals(*KeyOf(p))) return cur;
      cur = *p;
      if (cur == 0xffffffff) break;
      t = *param_1;
      p = (unsigned int *)((char *)t + cur * 0x30 + 8);
    }
  }
  return 0xffffffff;
}
