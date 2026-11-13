extern int fn_82D44CE0();


unsigned __int64 fn_82D45390(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int aiStack_20 [2];
  
  uVar3 = *(unsigned int *)(param_1 + 0x20) & param_2;
  uVar4 = (unsigned __int64)((unsigned int)param_2 >> (*(unsigned int *)(param_1 + 0x1c) & 0x3f));
  iVar1 = (int)uVar3 >> (*(unsigned int *)(param_1 + 0x18) & 0x3f);
  uVar3 = *(unsigned int *)(param_1 + 0x24) & uVar3;
  if (uVar4 == 0) {
    if (iVar1 != 0) {
      return 1;
    }
  }
  else {
    uVar4 = uVar4 - 1;
    if (*(int *)(param_1 + 0x7c) <= (int)uVar4) {
      return 2;
    }
    iVar2 = fn_82D44CE0((unsigned __int64)*(unsigned int *)(param_1 + 0x78) +
                          (uVar4 + (uVar4 & 0x3fffffff) * 4 & 0xfffffff) * 0x10,uVar3 - 1,aiStack_20
                         );
    if (iVar2 != (int)uVar3) {
      return 3;
    }
    if (aiStack_20[0] != iVar1) {
      return 4;
    }
  }
  return 0;
}

