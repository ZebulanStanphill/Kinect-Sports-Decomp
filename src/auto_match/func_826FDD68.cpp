// Scaleform-style HashSetBase::setRawCapacity (0xc-byte entries), written as a
// member function like func_826C11C0.cpp.
struct Hdr_826FDD68 { unsigned int count; unsigned int mask; };
struct Ent_826FDD68 { int hash; int val[2]; };
struct Tab_826FDD68 { Hdr_826FDD68 h; Ent_826FDD68 e[1]; };
struct Hash_826FDD68;
extern "C" {
void fn_8267BE38(void *);
void *fn_8267BED0(void *, unsigned int, unsigned int *);
void fn_826F8490(void *, int);
void fn_826FDAB8(Hash_826FDD68 *);
void fn_826FEAA8(Hash_826FDD68 *, void *, void *, int);
double fn_82F65E20(float);
extern float lbl_8200561C;
}
// Clear() and the destructor of the temporary table are separate functions in
// the source that the linker folded to one address (the original does not
// cross-jump the two calls), so the destructor gets its own declaration.
namespace dtor { extern "C" void fn_826FDAB8(Hash_826FDD68 *); }
struct Hash_826FDD68 {
  Tab_826FDD68 *t;
  void setRawCapacity(void *heap, unsigned int n);
};
void Hash_826FDD68::setRawCapacity(void *heap, unsigned int n)
{
  Hash_826FDD68 nh;
  unsigned int cap;
  unsigned int tag;
  if (n == 0) {
    fn_826FDAB8(this);
  } else {
    if (n < 8) {
      cap = 8;
    } else {
      double lg = fn_82F65E20((float)(n - 1));
      int sh = (int)((float)lg * lbl_8200561C + 1.0f);
      cap = 1 << sh;
    }
    tag = 0x143;
    nh.t = 0;
    nh.t = (Tab_826FDD68 *)fn_8267BED0(heap, cap * 0xc + 8, &tag);
    nh.t->h.count = 0;
    nh.t->h.mask = cap - 1;
    if (cap != 0) {
      unsigned int i;
      for (i = 0; i < cap; i++) nh.t->e[i].hash = -2;
    }
    if (t != 0) {
      unsigned int i, m;
      for (i = 0, m = t->h.mask; i <= m; i++) {
        Ent_826FDD68 *e = &t->e[i];
        if (e->hash != -2) {
          fn_826FEAA8(&nh, heap, e->val, *(int *)((char *)e->val[0] + 0xc));
          fn_826F8490(e->val, 0);
          e->hash = -2;
        }
      }
      fn_8267BE38(t);
    }
    {
      Tab_826FDD68 *old = nh.t;
      nh.t = 0;
      t = old;
    }
    dtor::fn_826FDAB8(&nh);
  }
}
