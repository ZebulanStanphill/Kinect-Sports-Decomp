int fn_82D4B1C8(int param_1,unsigned int param_2)

{
  unsigned int iVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  
  iVar4 = (param_2 >> (0x20 - *(unsigned int *)(param_1 + 0x30))) * 0x38 + *(int *)(param_1 + 0x34);
  iVar1 = *(int *)(iVar4 + 0x20);
  if (iVar1 != 0) {
    iVar2 = (0xffffffffU >> (*(unsigned int *)(param_1 + 0x30)) & param_2) * *(int *)(iVar4 + 0x24);
    if (*(char *)(iVar4 + 0x11) == '\x01') {
      uVar3 = (unsigned int)*(unsigned char *)(iVar2 + iVar1);
    }
    else {
      uVar3 = (unsigned int)*(unsigned short *)(iVar2 + iVar1);
    }
    if (uVar3 != 0xffffffff) {
      return *(int *)(iVar4 + 0x2c) * uVar3 +
             *(unsigned int *)(iVar4 + 0x28);
    }
  }
  return 0;
}

