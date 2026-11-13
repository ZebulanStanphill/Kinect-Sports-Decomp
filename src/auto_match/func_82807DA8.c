void fn_82807DA8(int param_1,unsigned int *param_2)

{
  int iVar1;
  int iVar2;
  __int64 lVar3;
  
  iVar2 = 0;
  iVar1 = param_1 - (int)param_2;
  lVar3 = 4;
  do {
    if (*param_2 == 0) {
      *(unsigned int *)(iVar1 + (int)param_2) = 0;
      *(unsigned char *)(param_1 + 0x20 + iVar2) = 0;
    }
    else {
      *(unsigned int *)(iVar1 + (int)param_2) = *param_2 & 0xfffffffc;
      *(unsigned char *)(param_1 + 0x20 + iVar2) = ((unsigned char)*param_2 & 3) << 3;
    }
    iVar2 = iVar2 + 1;
    param_2 = param_2 + 1;
    lVar3 = lVar3 + -1;
  } while (lVar3 != 0);
  return;
}

