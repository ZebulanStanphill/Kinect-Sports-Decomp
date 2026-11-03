typedef struct { int a, b, c, d, e, f; } O;
extern void *fn_8265C9E0(int);
extern void fn_826286B0(void *, int);
extern O *lbl_83298F6C;
extern unsigned int lbl_83298F70;
static __forceinline O *ctor(O *m)
{
  m->a = 0; m->b = 0; m->c = 0; m->e = -1; m->f = 0;
  fn_826286B0(m, 4);
  return m;
}
O *fn_8225BD88(void)
{
  O *m;
  if ((lbl_83298F70 & 1) == 0) {
    lbl_83298F70 = lbl_83298F70 | 1;
    m = fn_8265C9E0(0x18);
    lbl_83298F6C = m ? ctor(m) : 0;
  }
  return lbl_83298F6C;
}
