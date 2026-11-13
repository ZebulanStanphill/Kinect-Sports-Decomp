extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;


void fn_827FEEB0(int *param_1,unsigned int *param_2)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  
  uVar4 = lbl_821AAD20;
  uVar3 = lbl_82002AE0;
  iVar1 = *param_1;
  iVar2 = *(int *)(iVar1 + 0x30);
  if ((((*(char *)(iVar2 + 0x1f) == '\0') && (*(char *)(iVar2 + 0x20) == '\0')) &&
      (*(char *)(iVar2 + 0x21) == '\0')) && (*(char *)(iVar2 + 0x22) == '\0')) {
    *param_2 = lbl_821AAD20;
    param_2[1] = uVar4;
    param_2[2] = uVar4;
    param_2[3] = uVar3;
    return;
  }
  *param_2 = *(unsigned int *)(*(int *)(iVar1 + 0x30) + 0xc);
  param_2[1] = *(unsigned int *)(*(int *)(iVar1 + 0x30) + 0x10);
  param_2[2] = *(unsigned int *)(*(int *)(iVar1 + 0x30) + 0x14);
  param_2[3] = *(unsigned int *)(*(int *)(iVar1 + 0x30) + 0x18);
  return;
}

