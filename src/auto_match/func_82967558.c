extern int fn_82964628();


int fn_82967558(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  
  iVar2 = fn_82964628(*(unsigned __int64 *)(*(int *)(param_4 * 4 + *(int *)(param_1 + 0x14)) + 0x20),
                        param_1,*(unsigned int *)(param_1 + 0x78),param_2,param_3);
  if (iVar2 == -1) {
    iVar2 = -1;
  }
  else {
    iVar1 = *(int *)(*(int *)(param_1 + 0x14) + iVar2 * 4);
    *(unsigned int *)(iVar1 + 0x3c) = *(unsigned int *)(iVar1 + 0x3c) | 0x80000;
    *(int *)(*(int *)(*(int *)(param_1 + 0x14) + iVar2 * 4) + 0x38) = param_4;
  }
  return iVar2;
}

