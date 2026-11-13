unsigned __int64 fn_82951FC8(int param_1,__int64 param_2,__int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  int iVar5;
  
  uVar3 = (unsigned int)param_3;
  uVar2 = (unsigned int)param_2;
  iVar5 = uVar3 * 4;
  uVar1 = *(unsigned int *)(iVar5 + *(int *)(param_1 + 0x18));
  if (uVar3 < uVar2) {
    if (uVar3 < uVar2) {
      param_2 = param_2 - param_3;
      do {
        puVar4 = (unsigned int *)(iVar5 + *(int *)(param_1 + 0x18));
        iVar5 = iVar5 + 4;
        *puVar4 = puVar4[1];
        param_2 = param_2 + -1;
      } while (param_2 != 0);
    }
  }
  else if (uVar2 < uVar3) {
    param_3 = param_3 - param_2;
    do {
      puVar4 = (unsigned int *)(iVar5 + *(int *)(param_1 + 0x18));
      iVar5 = iVar5 + -4;
      *puVar4 = puVar4[-1];
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  *(unsigned int *)(uVar2 * 4 + *(int *)(param_1 + 0x18)) = uVar1;
  return 0;
}

