extern int fn_82CE5458();
extern int fn_82CEA280();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82131F88;


void fn_82DEAB48(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned char abStack_30 [4];
  float afStack_2c;
  
  iVar1 = *param_2;
  iVar2 = iVar1;
  for (iVar3 = *(int *)(iVar1 + 0xc); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
    iVar1 = iVar2;
    iVar2 = iVar3;
  }
  iVar1 = *(int *)(iVar1 + 4);
  if (*(int *)(param_1 + 8) + 0x10 != iVar2) {
    iVar1 = param_2[1];
    iVar2 = iVar1;
    for (iVar3 = *(int *)(iVar1 + 0xc); iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
      iVar1 = iVar2;
      iVar2 = iVar3;
    }
    iVar1 = *(int *)(iVar1 + 4);
  }
  uVar4 = 0;
  abStack_30[0] = 0;
  if (iVar1 != -1) {
    abStack_30[0] = fn_82CEA280(param_1 + 0x14,iVar1,0);
    uVar4 = (unsigned int)abStack_30[0];
  }
  if (uVar4 == 0) {
    abStack_30[0] = *(unsigned char *)(param_1 + 0xc);
    uVar4 = (unsigned int)abStack_30[0];
    if (uVar4 == 0xff) {
      return;
    }
  }
  if (uVar4 != 0) {
    iVar1 = param_2[9];
    afStack_2c =
         *(float *)((*(unsigned int *)(iVar1 + 0x5c) ^ *(unsigned int *)(iVar1 + 0x58) ^ *(unsigned int *)(param_1 + 8)) +
                   0x9c);
    if (afStack_2c != lbl_82002AE0) {
      afStack_2c = *(float *)(&lbl_82131F88 + uVar4 * 4) / afStack_2c;
      fn_82CE5458(abStack_30,&afStack_2c);
      uVar4 = (unsigned int)abStack_30[0];
      if (uVar4 == 0) {
        uVar4 = 1;
      }
    }
    iVar2 = param_2[6];
    if ((*(unsigned char *)(iVar2 + 0xe) == 0) || (uVar4 < *(unsigned char *)(iVar2 + 0xe))) {
      *(char *)(iVar2 + 0xe) = (char)uVar4;
      *(unsigned char *)(iVar2 + 0xf) = *(unsigned char *)(iVar2 + 0xf) & 0xfd;
      iVar2 = param_2[6];
      if (*(int *)(iVar1 + 0x58) == *(int *)(param_1 + 8)) {
        *(unsigned char *)(iVar2 + 0xf) = *(unsigned char *)(iVar2 + 0xf) & 0xfb;
      }
      else {
        *(unsigned char *)(iVar2 + 0xf) = *(unsigned char *)(iVar2 + 0xf) | 4;
      }
    }
  }
  return;
}

