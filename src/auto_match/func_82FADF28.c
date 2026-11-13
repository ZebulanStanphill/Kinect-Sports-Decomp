extern int _blkmov();


void fn_82FADF28(int param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  
  for (iVar4 = *(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0); 2 < (unsigned int)(iVar4 >> 3);
      iVar4 = iVar4 - *(unsigned int *)(param_1 + 0xa0)) {
    uVar2 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa0);
    uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0xa4) - 8;
    uVar1 = uVar2 + 8;
    if ((uVar1 & 0xffffffff) < (uVar3 & 0xffffffff)) {
      _blkmov(uVar1,uVar2 + 0x10,
                   ((((uVar3 - uVar1) - 1 & 0xffffffff) >> 3) + 1) * 8 & 0xfffffff8);
    }
    iVar4 = *(int *)(param_1 + 0xa4) + -8;
    *(int *)(param_1 + 0xa4) = iVar4;
  }
  return;
}

