extern unsigned int lbl_82131F88;


void fn_82DEB130(int param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int *piVar3;
  int iVar4;
  unsigned int *puVar5;
  
  if ((*(unsigned int *)(param_1 + 0x20) & 0x7fffffff) == 0) {
    *param_2 = 0xffffffff;
    *param_3 = *(unsigned int *)(&lbl_82131F88 + (unsigned int)*(unsigned char *)(param_1 + 0x14) * 4);
    return;
  }
  uVar2 = 0xff;
  iVar4 = 0;
  if (-1 < *(int *)(param_1 + 0x24)) {
    piVar3 = *(int **)(param_1 + 0x1c);
    do {
      if (*piVar3 != -1) break;
      iVar4 = iVar4 + 1;
      piVar3 = piVar3 + 2;
    } while (iVar4 <= *(int *)(param_1 + 0x24));
  }
  if (iVar4 <= *(int *)(param_1 + 0x24)) {
    do {
      puVar5 = (unsigned int *)(iVar4 * 8 + *(int *)(param_1 + 0x1c));
      uVar1 = puVar5[1] & 0xff;
      if (uVar1 < uVar2) {
        *param_2 = *puVar5;
        uVar2 = uVar1;
      }
      iVar4 = iVar4 + 1;
      if (iVar4 <= *(int *)(param_1 + 0x24)) {
        piVar3 = (int *)(iVar4 * 8 + *(int *)(param_1 + 0x1c));
        do {
          if (*piVar3 != -1) break;
          iVar4 = iVar4 + 1;
          piVar3 = piVar3 + 2;
        } while (iVar4 <= *(int *)(param_1 + 0x24));
      }
    } while (iVar4 <= *(int *)(param_1 + 0x24));
  }
  *param_3 = *(unsigned int *)(&lbl_82131F88 + uVar2 * 4);
  return;
}

