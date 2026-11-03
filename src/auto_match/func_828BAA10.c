typedef struct W_828BAA10 { union { unsigned short *ptr; unsigned short buf[8]; } u; unsigned len; unsigned cap; } W_828BAA10;
typedef struct S_828BAA10 { void *vt; int pad4[3]; unsigned len; unsigned short *buf; int cap0; } S_828BAA10;
extern char lbl_82025404[];
extern unsigned short *fn_8265CA60(unsigned);
extern void fn_82F64840(void *, unsigned, void *, unsigned);
static __forceinline unsigned Sz(unsigned n) { if (n <= 0x7fffffff) return n * 2; return 0xffffffff; }
S_828BAA10 *fn_828BAA10(S_828BAA10 *self, W_828BAA10 *src)
{
  unsigned n;
  void *from;
  self->cap0 = 4;
  self->vt = lbl_82025404;
  n = src->len + 1;
  self->buf = fn_8265CA60(Sz(n));
  from = (src->cap >= 8) ? (void *)src->u.ptr : (void *)src;
  fn_82F64840(self->buf, n, from, n - 1);
  self->buf[n - 1] = 0;
  self->len = n;
  return self;
}
