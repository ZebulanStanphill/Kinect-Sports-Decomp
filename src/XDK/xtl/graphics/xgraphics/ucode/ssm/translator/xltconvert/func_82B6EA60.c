extern int fn_82AB15D0();


unsigned int fn_82B6EA60(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  uVar5 = 0;
  iVar2 = *(int *)(iVar1 + 0x5aa0);
  *(int *)(iVar1 + 0x5aa0) = iVar2 + 1;
  do {
    uVar4 = uVar5 + iVar2 & 0x3f;
    iVar3 = (uVar4 + 0x1168) * 4;
    if (*(int *)(iVar3 + iVar1) == -1) {
      *(int *)(iVar3 + iVar1) = iVar2;
      return uVar4;
    }
    uVar5 = uVar5 + 1;
  } while (uVar5 < 0x40);
  fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff821b597c,0xffffffff820da3b8,0x25a);
  return 0;
}

