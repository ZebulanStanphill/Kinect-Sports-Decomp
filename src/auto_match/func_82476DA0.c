extern int fn_82547C80();
extern int fn_82555A88();


void fn_82476DA0(int param_1,int param_2)

{
  int iVar1;
  unsigned int *puVar3;
  __int64 lVar2;
  unsigned int uVar4;
  
  iVar1 = *(int *)(*(int *)(param_1 + 0x15c) + 0x3e4);
  if ((iVar1 != 0) &&
     (puVar3 = (unsigned int *)fn_82555A88((unsigned __int64)*(unsigned int *)(iVar1 + 0x8c0) + 0x98,
                                         0xffffffff821bcf40), puVar3 != (unsigned int *)0x0)) {
    uVar4 = 0;
    lVar2 = (unsigned __int64)*puVar3 + 0xd0;
    do {
      lVar2 = fn_82547C80(lVar2,uVar4 & 0xff,(int)uVar4 < param_2);
      uVar4 = uVar4 + 1;
    } while ((int)uVar4 < 8);
  }
  return;
}

