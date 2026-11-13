#define true 1


int fn_826D7AA0(int *param_1,unsigned int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = param_3 * 0x14 + *param_1;
  if ((*(int *)(iVar2 + 8) != -2) && (iVar3 = param_3, *(int *)(iVar2 + 0xc) == param_3)) {
    while( true ) {
      if ((*(int *)(iVar2 + 0xc) == param_3) &&
         (iVar1 = thunk_FUN_82f65ac0(((unsigned __int64)*(unsigned int *)(iVar2 + 0x10) & 0xfffffffc) + 8,
                                     ((unsigned __int64)*(unsigned int *)*param_2 & 0xfffffffc) + 8), iVar1 == 0))
      {
        return iVar3;
      }
      iVar3 = *(int *)(iVar2 + 8);
      if (iVar3 == -1) break;
      iVar2 = iVar3 * 0x14 + *param_1;
    }
  }
  return -1;
}

