extern int fn_82C10B28();


unsigned __int64 fn_82C27898(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  int aiStack_10;
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (*(int *)(iVar1 + 4) != 0) {
    for (aiStack_10 = *(int *)(iVar1 + 8); aiStack_10 != 0;
        aiStack_10 = *(int *)(aiStack_10 + 0x28)) {
      if (aiStack_10 == param_2) {
        if (aiStack_10 == *(int *)(iVar1 + 8)) {
          *(unsigned int *)(iVar1 + 8) = *(unsigned int *)(aiStack_10 + 0x28);
        }
        if (aiStack_10 == *(int *)(iVar1 + 4)) {
          iVar2 = *(int *)(*(int *)(iVar1 + 4) + 0x24);
          *(int *)(iVar1 + 4) = iVar2;
          if (iVar2 != 0) {
            *(unsigned int *)(iVar2 + 0x28) = 0;
          }
        }
        else {
          if (*(int *)(aiStack_10 + 0x28) != 0) {
            *(unsigned int *)(*(int *)(aiStack_10 + 0x28) + 0x24) =
                 *(unsigned int *)(aiStack_10 + 0x24);
          }
          if (*(int *)(aiStack_10 + 0x24) != 0) {
            *(unsigned int *)(*(int *)(aiStack_10 + 0x24) + 0x28) =
                 *(unsigned int *)(aiStack_10 + 0x28);
          }
        }
        lVar4 = (unsigned __int64)*(unsigned int *)(iVar1 + 0xc) - 1;
        *(int *)(iVar1 + 0xc) = (int)lVar4;
        if (lVar4 == 0) {
          *(unsigned int *)(iVar1 + 4) = 0;
          *(unsigned int *)(iVar1 + 8) = 0;
        }
        uVar3 = fn_82C10B28(*(unsigned int *)(iVar1 + 0x48),0x1d,&aiStack_10);
        return uVar3;
      }
    }
  }
  return 0xffffffff80500009;
}

