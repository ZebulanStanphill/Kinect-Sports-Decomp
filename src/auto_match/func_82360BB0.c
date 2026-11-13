extern unsigned int lbl_82192604;


unsigned char fn_82360BB0(int param_1)

{
  int iVar1;
  int iVar2;
  unsigned char uVar3;
  
  iVar1 = *(int *)(param_1 + 0x194);
  if ((*(int *)(iVar1 + 0x200) != 5) && (lbl_82192604 < *(float *)(iVar1 + 0x20c))) {
    return 1;
  }
  iVar2 = *(int *)(iVar1 + 0x200);
  if (iVar2 == 5) {
    uVar3 = 0;
  }
  else if (((iVar2 == 2) || (iVar2 == 3)) || (uVar3 = 1, iVar2 == 1)) {
    uVar3 = *(unsigned char *)(iVar1 + 0x1fc);
  }
  return uVar3;
}

