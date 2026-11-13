unsigned __int64 fn_82CAAF50(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  
  piVar1 = (int *)param_1[3];
  if (((piVar1 != (int *)0x0) && (param_2 != 0)) && (-1 < piVar1[4])) {
    piVar2 = (int *)piVar1[2];
    iVar3 = *piVar2;
    piVar1[2] = iVar3;
    if (iVar3 == 0) {
      piVar1[3] = 0;
    }
    piVar2[1] = param_2;
    *piVar2 = *piVar1;
    *piVar1 = (int)piVar2;
    if (piVar1[1] == 0) {
      piVar1[1] = (int)piVar2;
    }
    piVar1[4] = piVar1[4] + 1;
    *param_1 = *param_1 + 1;
    return 0;
  }
  return 0xffffffffffffff9c;
}

