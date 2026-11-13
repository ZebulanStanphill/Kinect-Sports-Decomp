extern int fn_8265CA20();
extern int fn_8265CA20();
extern unsigned int lbl_82002ACC;


unsigned int * fn_82230928(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;

  if ((param_2 & 2) == 0) {
    *param_1 = &lbl_82002ACC;
    puVar1 = param_1;
    if ((param_2 & 1) != 0) {
      fn_8265CA20(param_1);
    }
  }
  else {
    uVar2 = (unsigned __int64)(unsigned int)param_1[-1];
    puVar1 = param_1 + -1;
    param_1 = param_1 + param_1[-1];
    if (-1 < (__int64)(uVar2 - 1)) {
      do {
        param_1 = param_1 + -1;
        *param_1 = &lbl_82002ACC;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
    }
    if ((param_2 & 1) != 0) {
      fn_8265CA20(puVar1);
    }
  }
  return puVar1;
}
