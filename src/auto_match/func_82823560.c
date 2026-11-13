extern void fn_8281B530(unsigned int, int);
extern void fn_8281B558(int, unsigned int, int);
extern void fn_82822510(void *, void *, unsigned int, int *);
extern void fn_82823440(void);
extern unsigned int lbl_8320A5E8;
extern unsigned int lbl_8320A764;
extern char lbl_8320A5DC[];

void fn_82823560(unsigned int param_1, int param_2)
{
  int out;

  if (param_1 != 0) {
    fn_82822510(lbl_8320A5DC, (void *)fn_82823440, param_1, &out);
    fn_8281B558(out, param_1, param_2);
  }
  else {
    lbl_8320A764 = lbl_8320A764 + 1;
    fn_8281B530(lbl_8320A5E8, param_2);
  }
}
