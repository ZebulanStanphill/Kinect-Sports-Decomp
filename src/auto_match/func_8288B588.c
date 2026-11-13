void fn_8288B588(int param_1,unsigned int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  __int64 lVar3;
  
  if (param_3 == -1) {
    iVar2 = 0;
    piVar1 = (int *)(param_1 + 0x14);
    lVar3 = 4;
    do {
      *piVar1 = param_2;
      if (param_2 == 0) {
        *(unsigned char *)(iVar2 + param_1 + 0x34) = 1;
      }
      iVar2 = iVar2 + 1;
      piVar1 = piVar1 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
    return;
  }
  *(int *)((param_3 + 5) * 4 + param_1) = param_2;
  return;
}

