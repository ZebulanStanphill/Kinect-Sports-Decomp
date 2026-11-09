// Scaleform-style HashSetBase::setRawCapacity (0x30-byte entries), written as a
// member function like func_826AA728.cpp: the order of `add off, table` in the
// re-add loop comes from `this` being numbered after the explicit parameters,
// so the extern "C" version stops at 99.89%. Hash_826C11C0 is a placeholder for
// the unknown template class.
typedef unsigned int U32;
struct Hdr_826C11C0 { U32 count; U32 mask; };
struct Ent_826C11C0 { int hash; int pad; int val[10]; };
struct Tab_826C11C0 { Hdr_826C11C0 h; Ent_826C11C0 e[1]; };
struct Hash_826C11C0;
extern "C" {
void fn_8267BE38(void *);
void *fn_8267BED0(void *, U32, U32 *);
void fn_826C0018(void *, int);
void fn_826C0840(Hash_826C11C0 *);
void fn_826C1980(Hash_826C11C0 *, void *, void *, int);
void fn_826BE288(Hash_826C11C0 *);
double fn_82F65E20(float);
extern float lbl_8200561C;
}
struct Hash_826C11C0 {
  Tab_826C11C0 *t;
  void setRawCapacity(void *heap, U32 n);
};
void Hash_826C11C0::setRawCapacity(void *heap, U32 n)
{
  Hash_826C11C0 nh;
  U32 cap;
  U32 tag;
  if (n == 0) {
    fn_826C0840(this);
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
    nh.t = (Tab_826C11C0 *)fn_8267BED0(heap, cap * 0x30 + 8, &tag);
    nh.t->h.count = 0;
    nh.t->h.mask = cap - 1;
    if (cap != 0) {
      U32 i;
      for (i = 0; i < cap; i++) nh.t->e[i].hash = -2;
    }
    if (t != 0) {
      U32 i, m;
      for (i = 0, m = t->h.mask; i <= m; i++) {
        Ent_826C11C0 *e = &t->e[i];
        if (e->hash != -2) {
          fn_826C1980(&nh, heap, e->val, *(int *)((char *)e->val[0] + 0xc));
          fn_826C0018(e->val, 0);
          e->hash = -2;
        }
      }
      fn_8267BE38(t);
    }
    {
      Tab_826C11C0 *old = nh.t;
      nh.t = 0;
      t = old;
    }
    fn_826BE288(&nh);
  }
}
