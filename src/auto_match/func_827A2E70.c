extern int fn_827A2DE8();


void fn_827A2E70(int param_1)

{
  unsigned int iVar1;
  
  iVar1 = fn_827A2DE8();
  if (iVar1 != 0) {
    *(short *)(iVar1 + 0x24) = *(short *)(iVar1 + 0x24) + 1;
    iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 8);
    *(unsigned char *)(iVar1 + 0x13f) = *(unsigned char *)(iVar1 + 0x13f) | 1;
  }
  return;
}

