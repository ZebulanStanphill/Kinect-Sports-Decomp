#define true 1


unsigned __int64 fn_826D7B50(int *param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = (int)param_3;
  iVar4 = iVar3 * 0x10 + *param_1;
  if ((*(int *)(iVar4 + 8) != -2) && (*(int *)(iVar4 + 0xc) == iVar3)) {
    while( true ) {
      if ((*(int *)(iVar4 + 0xc) == iVar3) &&
         (iVar2 = thunk_FUN_82f65ac0(((unsigned __int64)*(unsigned int *)(iVar4 + 0x10) & 0xfffffffc) + 8,
                                     ((unsigned __int64)*(unsigned int *)*param_2 & 0xfffffffc) + 8), iVar2 == 0))
      {
        return param_3;
      }
      uVar1 = *(unsigned int *)(iVar4 + 8);
      param_3 = (unsigned __int64)uVar1;
      if (uVar1 == 0xffffffff) break;
      iVar4 = uVar1 * 0x10 + *param_1;
    }
  }
  return 0xffffffffffffffff;
}

