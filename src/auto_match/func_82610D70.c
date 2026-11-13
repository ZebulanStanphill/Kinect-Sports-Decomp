extern int fn_827DEA30();
extern unsigned int lbl_821CB8D4;

unsigned int *fn_82610D70(int a, int b, int c, unsigned int *p)
{
  if (p != (unsigned int *)0) {
    fn_827DEA30(p);
    *p = (unsigned int)&lbl_821CB8D4;
    return p;
  }
  return (unsigned int *)0;
}
