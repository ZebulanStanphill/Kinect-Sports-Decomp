extern int fn_82C10B28();


unsigned __int64 fn_82C2A538(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  int aiStack_20 [4];
  
  iVar1 = *(int *)(param_1 + 0x2c);
  if (*(int *)(iVar1 + 4) != 0) {
    for (aiStack_20[0] = *(int *)(iVar1 + 8); aiStack_20[0] != 0;
        aiStack_20[0] = *(int *)(aiStack_20[0] + 0x28)) {
      if (aiStack_20[0] == param_2) {
        if (aiStack_20[0] == *(int *)(iVar1 + 8)) {
          *(unsigned int *)(iVar1 + 8) = *(unsigned int *)(aiStack_20[0] + 0x28);
        }
        if (aiStack_20[0] == *(int *)(iVar1 + 4)) {
          iVar2 = *(int *)(*(int *)(iVar1 + 4) + 0x24);
          *(int *)(iVar1 + 4) = iVar2;
          if (iVar2 != 0) {
            *(unsigned int *)(iVar2 + 0x28) = 0;
          }
        }
        else {
          if (*(int *)(aiStack_20[0] + 0x28) != 0) {
            *(unsigned int *)(*(int *)(aiStack_20[0] + 0x28) + 0x24) =
                 *(unsigned int *)(aiStack_20[0] + 0x24);
          }
          if (*(int *)(aiStack_20[0] + 0x24) != 0) {
            *(unsigned int *)(*(int *)(aiStack_20[0] + 0x24) + 0x28) =
                 *(unsigned int *)(aiStack_20[0] + 0x28);
          }
        }
        lVar4 = (unsigned __int64)*(unsigned int *)(iVar1 + 0xc) - 1;
        *(int *)(iVar1 + 0xc) = (int)lVar4;
        if (lVar4 == 0) {
          *(unsigned int *)(iVar1 + 4) = 0;
          *(unsigned int *)(iVar1 + 8) = 0;
        }
        uVar3 = fn_82C10B28(*(unsigned int *)(iVar1 + 0x30),0x1f,aiStack_20[0] + 0x2c);
        if (-1 < (int)uVar3) {
          uVar3 = fn_82C10B28(*(unsigned int *)(iVar1 + 0x30),0x1f,aiStack_20);
        }
        return uVar3;
      }
    }
  }
  return 0xffffffff80500009;
}

