struct Set_8259B1C0 {
  int pad0;
  void *head;               /* 0x04 */
};

struct Self_8259B1C0 {
  char pad0[0x34];
  Set_8259B1C0 set;         /* 0x34 */
  char pad3c[0x24];
  int lock;                 /* 0x60 */
};

extern "C" int fn_82A1BB18(void);
extern "C" void fn_8259C5D8(int *lock, int count, int owner);
extern "C" void fn_8259C738(int *lock);
extern "C" unsigned int fn_827D96A0(void *obj);
extern "C" void fn_8259BB38(void **out, Set_8259B1C0 *set, unsigned int *key);

struct Guard_8259B1C0 {
  int *lock;
  __forceinline Guard_8259B1C0(int *l) : lock(l) { fn_8259C5D8(l, 1, fn_82A1BB18() + 1); }
  __forceinline ~Guard_8259B1C0() { fn_82A1BB18(); fn_8259C738(lock); }
};

extern "C" bool fn_8259B1C0(Self_8259B1C0 *self, void *obj)
{
  Guard_8259B1C0 guard(&self->lock);
  unsigned int key = fn_827D96A0(obj);
  void *it;
  fn_8259BB38(&it, &self->set, &key);
  if (it != self->set.head)
    return true;
  return false;
}
