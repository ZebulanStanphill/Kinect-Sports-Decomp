extern unsigned int lbl_821AAD20;


void fn_82DFB8F0(int *param_1)

{
  unsigned int uVar1;
  unsigned int *in_r7;
  int iVar2;
  int iVar3;
  
  (**(int (***)())(*param_1 + 0x10))();
  uVar1 = lbl_821AAD20;
  iVar2 = 0;
  if (0 < param_1[5]) {
    iVar3 = 0;
    do {
      if (*(char *)(param_1[4] + iVar2) == '\0') {
        *(unsigned int *)(in_r7[1] + iVar3) = uVar1;
      }
      else {
        *(unsigned int *)(in_r7[1] + iVar3) = *in_r7;
      }
      iVar2 = iVar2 + 1;
      iVar3 = iVar3 + 4;
    } while (iVar2 < param_1[5]);
  }
  return;
}

