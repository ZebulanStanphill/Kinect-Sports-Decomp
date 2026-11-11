// Scaleform-style HashSetBase::setRawCapacity (0x1c-byte entries), written as a
// member function like func_826C11C0.cpp.
typedef unsigned int U32;
struct Hdr_82705A70 { U32 count; U32 mask; };
struct Ent_82705A70 { int hash; int val[6]; };
struct Tab_82705A70 { Hdr_82705A70 h; Ent_82705A70 e[1]; };
struct Hash_82705A70;
extern "C" {
void fn_8267BE38(void *);
void *fn_8267BED0(void *, U32, U32 *);
void fn_82704230(void *, int);
void fn_82704BC0(Hash_82705A70 *);
void fn_827093A8(Hash_82705A70 *, void *, void *, int);
double fn_82F65E20(float);
extern float lbl_8200561C;
}
// Clear() and the destructor of the temporary table are separate functions in
// the source that the linker folded to one address (the original does not
// cross-jump the two calls), so the destructor gets its own declaration.
namespace dtor { extern "C" void fn_82704BC0(Hash_82705A70 *); }
struct Hash_82705A70 {
  Tab_82705A70 *t;
  void setRawCapacity(void *heap, U32 n);
};
void Hash_82705A70::setRawCapacity(void *heap, U32 n)
{
  Hash_82705A70 nh;
  U32 cap;
  U32 tag;
  if (n == 0) {
    fn_82704BC0(this);
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
    nh.t = (Tab_82705A70 *)fn_8267BED0(heap, cap * 0x1c + 8, &tag);
    nh.t->h.count = 0;
    nh.t->h.mask = cap - 1;
    if (cap != 0) {
      U32 i;
      for (i = 0; i < cap; i++) nh.t->e[i].hash = -2;
    }
    if (t != 0) {
      U32 i, m;
      for (i = 0, m = t->h.mask; i <= m; i++) {
        Ent_82705A70 *e = &t->e[i];
        if (e->hash != -2) {
          fn_827093A8(&nh, heap, e->val, *(int *)((char *)e->val[0] + 0xc));
          fn_82704230(e->val, 0);
          e->hash = -2;
        }
      }
      fn_8267BE38(t);
    }
    {
      Tab_82705A70 *old = nh.t;
      nh.t = 0;
      t = old;
    }
    dtor::fn_82704BC0(&nh);
  }
}
