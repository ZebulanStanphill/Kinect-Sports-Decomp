extern int (*lbl_8320A4E8[])();


void fn_82814B70(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (lbl_8320A4E8[5] != (int (**)())0x0) {
    uVar2 = (*lbl_8320A4E8[5])(*(unsigned int *)(param_1 + 0x18),*(unsigned int *)(iVar1 + 0x5c),
                            *(unsigned int *)(iVar1 + 0x58),4);
    *(unsigned int *)(iVar1 + 0x5c) = uVar2;
  }
  if (*(unsigned int *)(iVar1 + 0x5c) == 0) {
    *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(param_1 + 0xc) | 8;
  }
  return;
}

