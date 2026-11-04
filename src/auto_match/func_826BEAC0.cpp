// Scaleform-style HashSetBase::setRawCapacity (clone of func_826AA728.cpp, re-add
// through fn_826BF3C8): resizes an open-addressing hash
// table to a power of two at least n (8 at least), re-adding every entry
// through fn_826BF3C8, or frees the table when n is 0. Written as a member
// function, as the game's was; the extern "C" version of the same body stops at
// 99.9%. Hash_826BEAC0 is a placeholder for the unknown template class.
typedef unsigned int U32;
struct Hdr_826BEAC0 { U32 count; U32 mask; };
struct Ent_826BEAC0 { int hash; int pad; int val[2]; int pad2[4]; };
struct Tab_826BEAC0 { Hdr_826BEAC0 h; Ent_826BEAC0 e[1]; };
struct Hash_826BEAC0;
extern "C" {
void fn_8267BE38(void *);
void *fn_8267BED0(void *, U32, U32 *);
void fn_826A7918(void *, int);
void fn_826A9040(Hash_826BEAC0 *);
void fn_826BE4B8(Hash_826BEAC0 *);
void fn_826BF3C8(Hash_826BEAC0 *, void *, void *, int);
double fn_82F65E20(float);
extern float lbl_82002AE0;
extern float lbl_8200561C;
}
struct Hash_826BEAC0 {
  Tab_826BEAC0 *t;
  void setRawCapacity(void *heap, U32 n);
};
/* Scaleform HashSetBase<...>::setRawCapacity; the real template type is
   unknown, Hash_826BEAC0 is a placeholder name. */
void Hash_826BEAC0::setRawCapacity(void *heap, U32 n)
{
  {
    Hash_826BEAC0 nh;
    U32 cap;
    U32 tag;
    if (n == 0) {
      fn_826BE4B8(this);
    } else {
      if (n < 8) {
        cap = 8;
      } else {
        double lg = fn_82F65E20((float)(n - 1));
        int sh = (int)((float)lg * lbl_8200561C + lbl_82002AE0);
        cap = 1 << sh;
      }
      tag = 0x143;
      nh.t = 0;
      nh.t = (Tab_826BEAC0 *)fn_8267BED0(heap, cap * 0x20 + 8, &tag);
      nh.t->h.count = 0;
      nh.t->h.mask = cap - 1;
      if (cap != 0) {
        U32 i;
        for (i = 0; i < cap; i++) nh.t->e[i].hash = -2;
      }
      if (t != 0) {
        U32 i, m;
        for (i = 0, m = t->h.mask; i <= m; i++) {
          Ent_826BEAC0 *e = &t->e[i];
          if (e->hash != -2) {
            fn_826BF3C8(&nh, heap, e->val, *(int *)((char *)e->val[0] + 0xc));
            fn_826A7918(e->val, 0);
            e->hash = -2;
          }
        }
        fn_8267BE38(t);
      }
      {
        Tab_826BEAC0 *old = nh.t;
        nh.t = 0;
        t = old;
      }
      fn_826A9040(&nh);
    }
  }
}
