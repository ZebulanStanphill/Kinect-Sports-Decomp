extern void fn_824CD480(void *);
extern int fn_824CD4E8(void *);
extern void fn_82517CB0(void);
extern void fn_82517DC8(void *, void *);
extern void *fn_8265C9E0(unsigned int);
extern unsigned int lbl_821C0BE0;
extern unsigned int lbl_821C0C24;

void *fn_82252D78(void *param_1)
{
  unsigned int *p;
  unsigned int *e;
  void *m;
  int i;
  int v;

  p = (unsigned int *)fn_8265C9E0(0x960);
  if (p != 0) {
    fn_82517DC8(p, param_1);
    p[0x20] = 0;
    p[0] = (unsigned int)&lbl_821C0BE0;
    e = p + 0x28;
    p[0x1a] = (unsigned int)&lbl_821C0C24;
    p[0x24] = 0;
    for (i = 0x13; i >= 0; i--) {
      fn_824CD480(e);
      e += 0x1c;
    }
    *(unsigned __int64 *)(p + 0x22) = 0;
    m = fn_8265C9E0(0x220);
    v = m ? fn_824CD4E8(m) : 0;
    p[0x25] = v;
    fn_82517CB0();
    return p;
  }
  return 0;
}
