extern unsigned int lbl_821CA460;
extern unsigned int lbl_8327F894;


void fn_825F8A48(int param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  uVar2 = lbl_821CA460;
  if (param_2 != 0) {
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x22c)) {
      piVar4 = (int *)(param_1 + 0x214);
      do {
        if ('\0' < *(char *)((*piVar4 + 1) * 0x2c + param_1)) {
          iVar5 = (*piVar4 + 1) * 0x2c;
          *(char *)(iVar5 + param_1) = *(char *)(iVar5 + param_1) + -1;
          if (*(char *)((*piVar4 + 1) * 0x2c + param_1) == '\0') {
            iVar5 = *piVar4 * 0x2c + param_1;
            uVar1 = *(unsigned int *)(*piVar4 * 0x2c + param_1 + 0x14);
            *(unsigned int *)(iVar5 + 0x24) = uVar2;
            *(unsigned int *)(iVar5 + 0x1c) = uVar1;
            *(unsigned int *)(iVar5 + 0x18) = *(unsigned int *)(iVar5 + 0x10);
            *(unsigned int *)(iVar5 + 0x20) = lbl_8327F894;
          }
        }
        iVar3 = iVar3 + 1;
        piVar4 = piVar4 + 1;
      } while (iVar3 < *(int *)(param_1 + 0x22c));
    }
  }
  if (param_3 == 0) {
    return;
  }
  iVar3 = 0;
  if (*(int *)(param_1 + 0x248) < 1) {
    return;
  }
  piVar4 = (int *)(param_1 + 0x230);
  do {
    if ('\0' < *(char *)((*piVar4 + 1) * 0x2c + param_1)) {
      iVar5 = (*piVar4 + 1) * 0x2c;
      *(char *)(iVar5 + param_1) = *(char *)(iVar5 + param_1) + -1;
      if (*(char *)((*piVar4 + 1) * 0x2c + param_1) == '\0') {
        iVar5 = *piVar4 * 0x2c + param_1;
        *(unsigned int *)(iVar5 + 0x1c) = *(unsigned int *)(*piVar4 * 0x2c + param_1 + 0x14);
        *(unsigned int *)(iVar5 + 0x18) = *(unsigned int *)(iVar5 + 0x10);
        *(unsigned int *)(iVar5 + 0x24) = uVar2;
        *(unsigned int *)(iVar5 + 0x20) = lbl_8327F894;
      }
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 1;
  } while (iVar3 < *(int *)(param_1 + 0x248));
  return;
}

