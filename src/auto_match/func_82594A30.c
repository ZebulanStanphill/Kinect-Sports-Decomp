extern int fn_8288B760();


void fn_82594A30(int param_1)

{
  unsigned int iVar1;
  unsigned int uVar2;
  
  iVar1 = *(int *)(param_1 + 0x80);
  if (iVar1 != 0) {
    uVar2 = fn_8288B760();
    *(unsigned int *)(iVar1 + 0x24) = uVar2 & 0xff;
  }
  return;
}

