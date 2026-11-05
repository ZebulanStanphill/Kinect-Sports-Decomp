extern int fn_82564518(void *, void *, unsigned);
extern void fn_8265CA20(void *);
typedef struct { unsigned short *begin; unsigned short *end; unsigned short *cap; } UShortVec_8234EAA0;
typedef struct Src { struct { void *f[5]; unsigned (*f14)(struct Src *, int); } *vt; } Src;

void fn_8234EAA0(int param_1, Src *param_2, int param_3, int param_4)
{
  UShortVec_8234EAA0 v;
  unsigned short *p;
  unsigned short *e;
  unsigned n = param_2->vt->f14(param_2, param_3);
  v.begin = 0;
  v.end = 0;
  v.cap = 0;
  fn_82564518(&v, param_2, n);
  e = v.end;
  for (p = v.begin; p != e; p++) {
    *(int *)((unsigned)*p * 4 + *(int *)(param_1 + 0x60)) = param_4;
  }
  if (v.begin != 0) fn_8265CA20(v.begin);
}
