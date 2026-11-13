extern int fn_82CE4040();
extern int fn_82CE4118();


void fn_82DEDCE0(int param_1,int param_2,__int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  piVar4 = (int *)(param_2 * 0xc + *(int *)(param_1 + 8));
  iVar3 = 0;
  if (0 < piVar4[1]) {
    do {
      iVar2 = (*piVar4 + iVar3) * 8;
      iVar5 = iVar2 + *(int *)(param_1 + 0x14);
      iVar2 = *(int *)(iVar2 + *(int *)(param_1 + 0x14));
      uVar1 = *(unsigned int *)(iVar5 + 4);
      if (*(int *)((int)((((unsigned __int64)uVar1 + ((unsigned __int64)uVar1 & 0x3fffffff) * 4 & 0x3fffffff) * 4
                          + param_3 + 0x10 & 0xffffffff) << 2) + *(int *)(iVar2 + 0x18)) != 0) {
        fn_82CE4118();
      }
      uVar1 = *(unsigned int *)(iVar5 + 4);
      *(int *)((int)((((unsigned __int64)uVar1 + ((unsigned __int64)uVar1 & 0x3fffffff) * 4 & 0x3fffffff) * 4 +
                      param_3 + 0x10 & 0xffffffff) << 2) + *(int *)(iVar2 + 0x18)) = (int)param_4;
      if ((param_4 & 0xffffffff) != 0) {
        fn_82CE4040(param_4);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < piVar4[1]);
  }
  return;
}

