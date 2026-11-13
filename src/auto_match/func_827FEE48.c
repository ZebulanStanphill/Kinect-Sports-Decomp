extern unsigned int lbl_821AAD20;


void fn_827FEE48(int *param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  int iVar2;
  
  uVar1 = lbl_821AAD20;
  iVar2 = *param_1;
  if (*(char *)(*(int *)(iVar2 + 0x30) + 0x1f) == '\0') {
    *param_2 = lbl_821AAD20;
  }
  else {
    *param_2 = *(unsigned int *)(*(int *)(iVar2 + 0x30) + 0xc);
  }
  if (*(char *)(*(int *)(iVar2 + 0x30) + 0x20) == '\0') {
    *param_3 = uVar1;
  }
  else {
    *param_3 = *(unsigned int *)(*(int *)(iVar2 + 0x30) + 0x10);
  }
  if (*(char *)(*(int *)(iVar2 + 0x30) + 0x21) != '\0') {
    uVar1 = *(unsigned int *)(*(int *)(iVar2 + 0x30) + 0x14);
  }
  *param_4 = uVar1;
  return;
}

