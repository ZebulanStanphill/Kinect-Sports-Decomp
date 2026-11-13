extern int fn_83066088();
extern int fn_83068650();


unsigned __int64 fn_830663E8(int *param_1)

{
  __int64 lVar1;
  int *piVar3;
  unsigned __int64 uVar2;
  
  piVar3 = (int *)*param_1;
  if (piVar3 == (int *)0x0) {
    lVar1 = (**(int (***)())(*(int *)param_1[3] + 4))((int *)param_1[3],param_1[5]);
    if ((int)lVar1 <= param_1[5]) {
      return 0;
    }
    fn_83066088(param_1,lVar1 - (unsigned __int64)(unsigned int)param_1[5]);
    piVar3 = (int *)*param_1;
    if (piVar3 == (int *)0x0) {
      return 0;
    }
    *param_1 = *piVar3;
  }
  else {
    *param_1 = *piVar3;
  }
  param_1[5] = param_1[5] + 1;
  if (piVar3 == (int *)0x0) {
    return 0;
  }
  uVar2 = fn_83068650();
  return uVar2;
}

