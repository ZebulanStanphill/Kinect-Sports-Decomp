extern int fn_82268B68();
extern int fn_8265CA20();
extern int fn_82A1C0F0();
extern int fn_82A1E0B8();


void fn_82537F40(int *param_1,int *param_2)

{
  unsigned int *piVar1;
  
  piVar1 = (int *)*param_1;
  if (param_2 != piVar1) {
    if (piVar1 != (int *)0x0) {
      if (piVar1[7] != -1) {
        if (*piVar1 == 0x3e5) {
          fn_82A1C0F0(piVar1);
        }
        fn_82A1E0B8(piVar1[7]);
      }
      fn_82A1E0B8(piVar1[3]);
      fn_82268B68(piVar1 + 8);
      fn_8265CA20(piVar1);
    }
    *param_1 = (int)param_2;
  }
  return;
}

