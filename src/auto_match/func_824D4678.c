extern void fn_824D4E70(void *, void *, int);
extern void fn_82517CB0(void);
extern void *fn_8265C9E0(unsigned int);
extern unsigned int lbl_821C0F28;
extern unsigned int lbl_821C112C;

void *fn_824D4678(void *a, void *b)
{
  unsigned int *p = (unsigned int *)fn_8265C9E0(0x960);
  if (p != 0) {
    fn_824D4E70(p, b, 0xc);
    p[0] = (unsigned int)&lbl_821C0F28;
    p[0x1a] = (unsigned int)&lbl_821C112C;
    fn_82517CB0();
    return p;
  }
  return 0;
}
