extern int fn_822315A0();
extern unsigned int lbl_831CD618;
extern unsigned int lbl_831CD61C;
extern unsigned int lbl_831CD620;


double fn_822E0E38(int *param_1)

{
  double dVar1;
  
  if (*(int *)(*param_1 + 0xd8) == 0) {
    if (*(int *)(*param_1 + 0x2184) == 0) {
      dVar1 = (double)lbl_831CD618;
    }
    else {
      dVar1 = (double)lbl_831CD620;
    }
  }
  else {
    dVar1 = (double)lbl_831CD61C;
  }
  if (param_1[1] != 0) {
    fn_822315A0();
  }
  return dVar1;
}

