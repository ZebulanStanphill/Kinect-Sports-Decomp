extern unsigned int lbl_83265988;


void fn_8228C928(int param_1,int param_2)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned char bVar4;
  
  if (lbl_83265988 == 0) {
    return;
  }
  uVar1 = **(unsigned int **)(param_2 * 4 + -0x7ce31218);
  if (uVar1 != 0) {
    uVar3 = uVar1 >> 3;
    uVar1 = 1 << (uVar1 & 7);
    iVar2 = *(int *)(*(int *)(lbl_83265988 + 0xf0) + 8);
    bVar4 = (unsigned char)uVar1;
    if ((uVar1 & 0xff & (unsigned int)*(unsigned char *)(iVar2 + uVar3)) == 0) {
      bVar4 = *(unsigned char *)(iVar2 + uVar3) | bVar4;
    }
    else {
      bVar4 = *(unsigned char *)(iVar2 + uVar3) & ~bVar4;
    }
    *(unsigned char *)(iVar2 + uVar3) = bVar4;
  }
  *(unsigned int *)(param_1 + 0x16c) = 1;
  return;
}

