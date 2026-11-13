extern int fn_82262440();


void fn_82428820(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned char uVar4;
  unsigned int uVar5;
  
  iVar1 = *(int *)(param_1 + 4);
  iVar2 = *(int *)(iVar1 + 8);
  if ((unsigned int)((*(int *)(iVar1 + 0xc) - iVar2) / 0x1ac) < 2) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(unsigned int *)(iVar2 + 0x1dc);
  }
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 0xa0);
  if ((iVar3 == 0) || (uVar4 = 1, *(int *)(iVar3 + 0x40) != 1)) {
    uVar4 = 0;
  }
  fn_82262440(*(unsigned int *)(iVar1 + 0x408),uVar4,*(unsigned int *)(iVar2 + 0x30),
                  *(unsigned int *)(iVar2 + 0x19c),
                  (unsigned __int64)*(unsigned int *)(iVar2 + 0x1a0) + (unsigned __int64)*(unsigned int *)(iVar2 + 0x1a4),
                  (unsigned __int64)*(unsigned int *)(iVar2 + 0x1a0),(unsigned __int64)*(unsigned int *)(iVar2 + 0x1a4),uVar5);
  return;
}

