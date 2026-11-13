// Scaleform-style HashSetBase::setRawCapacity (0x10-byte entries), written as a
// member function like func_826AA728.cpp: the order of `add off, table` in the
// re-add loop comes from `this` being numbered after the explicit parameters,
// so the extern "C" version stops at 99.89%. Hash_8273F198 is a placeholder for
// the unknown template class.
struct Hdr_8273F198 { unsigned int count; unsigned int mask; };
struct Key_8273F198 { int pad[3]; unsigned int h; };
struct Ent_8273F198 { int hash; Key_8273F198 *key; int val[2]; };
struct Tab_8273F198 { Hdr_8273F198 h; Ent_8273F198 e[1]; };
struct Hash_8273F198;
extern "C" {
void fn_8267BE38(void *);
void *fn_8267BED0(void *, unsigned int, unsigned int *);
void fn_8273E620(void *);
void fn_8273F300(Hash_8273F198 *, void *, void *, unsigned int);
void fn_8273CEF0(Hash_8273F198 *);
void fn_8273E988(Hash_8273F198 *);
double fn_82F65E20(float);
extern float lbl_8200561C;
}
struct Hash_8273F198 {
  Tab_8273F198 *t;
  void setRawCapacity(void *heap, unsigned int n);
};
void Hash_8273F198::setRawCapacity(void *heap, unsigned int n)
{
  Hash_8273F198 nh;
  unsigned int cap;
  unsigned int tag;
  if (n == 0) {
    fn_8273E988(this);
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
    nh.t = (Tab_8273F198 *)fn_8267BED0(heap, cap * 0x10 + 8, &tag);
    nh.t->h.count = 0;
    nh.t->h.mask = cap - 1;
    if (cap != 0) {
      unsigned int i;
      for (i = 0; i < cap; i++) nh.t->e[i].hash = -2;
    }
    if (t != 0) {
      unsigned int i, m;
      for (i = 0, m = t->h.mask; i <= m; i++) {
        Ent_8273F198 *e = &t->e[i];
        if (e->hash != -2) {
          Key_8273F198 **pk = &e->key;
          fn_8273F300(&nh, heap, pk, (*pk)->h);
          fn_8273E620(pk);
          e->hash = -2;
        }
      }
      fn_8267BE38(t);
    }
    {
      Tab_8273F198 *old = nh.t;
      nh.t = 0;
      t = old;
    }
    fn_8273CEF0(&nh);
  }
}
