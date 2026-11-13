void fn_828FC4C8(int *param_1,int param_2)

{
  unsigned int iVar1;
  int *piVar2;
  int iVar3;
  __int64 lVar4;
  
  iVar3 = 0;
  lVar4 = 7;
  do {
    iVar1 = *param_1;
    if (iVar1 != 0) {
      piVar2 = (int *)(iVar3 * 4 + param_2 + -4);
      do {
        piVar2 = piVar2 + 1;
        *piVar2 = iVar1;
        iVar3 = iVar3 + 1;
        iVar1 = *(int *)(iVar1 + 0x20);
      } while (iVar1 != 0);
    }
    param_1 = param_1 + 1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  return;
}

