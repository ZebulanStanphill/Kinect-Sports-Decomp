extern int fn_83065F58();
extern unsigned int lbl_8217E8BC;


int * fn_83066558(int *param_1)

{
  int *piVar1;
  __int64 lVar2;
  
  piVar1 = (int *)*param_1;
  if (piVar1 == (int *)0x0) {
    lVar2 = (**(int (***)())(*(int *)param_1[3] + 4))((int *)param_1[3],param_1[5]);
    if ((int)lVar2 <= param_1[5]) {
      return (int *)0x0;
    }
    fn_83065F58(param_1,lVar2 - (unsigned __int64)(unsigned int)param_1[5]);
    piVar1 = (int *)*param_1;
    if (piVar1 == (int *)0x0) {
      return (int *)0x0;
    }
    *param_1 = *piVar1;
  }
  else {
    *param_1 = *piVar1;
  }
  param_1[5] = param_1[5] + 1;
  if (piVar1 == (int *)0x0) {
    return (int *)0x0;
  }
  piVar1[3] = 0;
  *piVar1 = (int)&lbl_8217E8BC;
  piVar1[1] = 0;
  piVar1[2] = 0;
  piVar1[0xb] = 0;
  piVar1[0xc] = 0;
  piVar1[0xd] = 0;
  piVar1[0xe] = 0;
  piVar1[0xf] = 0;
  piVar1[0x10] = 0;
  piVar1[0x11] = 0;
  piVar1[0x12] = 0;
  piVar1[0x13] = 0;
  piVar1[0x15] = 0;
  piVar1[0x16] = 0;
  piVar1[0x17] = 0;
  piVar1[0x18] = 0;
  piVar1[0x1a] = 0;
  piVar1[0x1c] = 0;
  piVar1[0x1d] = 0;
  return piVar1;
}

