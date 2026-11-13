extern int fn_82555A88();


void fn_826106A0(int param_1,unsigned __int64 param_2,__int64 param_3)

{
  unsigned int iVar1;
  unsigned int uVar2;
  
  iVar1 = *(int *)(**(int **)(param_1 + 0x60) + 0x3e4);
  if (((iVar1 != 0) && (uVar2 = (unsigned __int64)*(unsigned int *)(iVar1 + 0x8c0), uVar2 != 0)) &&
     (iVar1 = fn_82555A88(uVar2 + 0x98,param_3 + 0x10), iVar1 != 0)) {
    *(unsigned int *)(iVar1 + 0x24) = *(unsigned int *)(iVar1 + 0x24) | 0x4000000;
  }
  return;
}

