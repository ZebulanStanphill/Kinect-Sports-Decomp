typedef int (*code)();
extern int atexit();
extern unsigned int lbl_8200DB04;
extern unsigned int *lbl_831F12D0;
extern unsigned int lbl_831F12D4;

extern int fn_8313FDA0();

unsigned int * fn_826F3E98(unsigned int *param_1,unsigned int param_2)
{
  if ((lbl_831F12D4 & 1) == 0) {
    lbl_831F12D4 = lbl_831F12D4 | 1;
    lbl_831F12D0 = &lbl_8200DB04;
    atexit(fn_8313FDA0);
  }
  if (param_2 != 0) {
    ((code)lbl_831F12D0[1])(&lbl_831F12D0,param_2);
    param_1[1] = param_2;
    *param_1 = (unsigned int)&lbl_831F12D0;
  }
  else {
    param_1[0] = 0;
    param_1[1] = 0;
  }
  return param_1;
}
