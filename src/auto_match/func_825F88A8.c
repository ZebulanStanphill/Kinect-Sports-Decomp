extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8327F894;


void fn_825F88A8(int param_1,int param_2,int param_3,int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  
  uVar2 = ltcg_pool_0_0f;
  uVar1 = lbl_821CA460;
  if (param_2 == 0) {
    iVar3 = param_4 * 0x2c + param_1;
    *(unsigned char *)(iVar3 + 0x2a) = 0;
  }
  else {
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x22c)) {
      piVar5 = (int *)(param_1 + 0x210);
      do {
        if (*(char *)((piVar5[1] + 1) * 0x2c + param_1) == '\0') {
          iVar4 = piVar5[1] * 0x2c + param_1;
          *(unsigned int *)(iVar4 + 0x14) = *(unsigned int *)(iVar4 + 0x10);
          iVar4 = piVar5[1] * 0x2c + param_1;
          *(unsigned int *)(iVar4 + 0x18) = *(unsigned int *)(iVar4 + 0x10);
          *(unsigned int *)(iVar4 + 0x24) = uVar1;
          *(unsigned int *)(iVar4 + 0x1c) = uVar2;
          *(unsigned int *)(iVar4 + 0x20) = lbl_8327F894;
        }
        piVar5 = piVar5 + 1;
        iVar3 = iVar3 + 1;
        iVar4 = (*piVar5 + 1) * 0x2c;
        *(char *)(iVar4 + param_1) = *(char *)(iVar4 + param_1) + '\x01';
      } while (iVar3 < *(int *)(param_1 + 0x22c));
    }
    iVar3 = param_4 * 0x2c + param_1;
    *(unsigned char *)(iVar3 + 0x2a) = 1;
  }
  if (param_3 == 0) {
    *(unsigned char *)(iVar3 + 0x2b) = 0;
  }
  else {
    iVar4 = 0;
    if (0 < *(int *)(param_1 + 0x248)) {
      piVar5 = (int *)(param_1 + 0x22c);
      do {
        if (*(char *)((piVar5[1] + 1) * 0x2c + param_1) == '\0') {
          iVar6 = piVar5[1] * 0x2c + param_1;
          if (*(float *)(iVar6 + 0x24) <= *(float *)(iVar6 + 0x20)) {
            iVar6 = piVar5[1] * 0x2c + param_1;
            *(unsigned int *)(iVar6 + 0x14) = *(unsigned int *)(iVar6 + 0x10);
          }
          iVar6 = piVar5[1] * 0x2c + param_1;
          *(unsigned int *)(iVar6 + 0x24) = uVar1;
          *(unsigned int *)(iVar6 + 0x1c) = uVar2;
          *(unsigned int *)(iVar6 + 0x18) = *(unsigned int *)(iVar6 + 0x10);
          *(unsigned int *)(iVar6 + 0x20) = lbl_8327F894;
        }
        piVar5 = piVar5 + 1;
        iVar4 = iVar4 + 1;
        iVar6 = (*piVar5 + 1) * 0x2c;
        *(char *)(iVar6 + param_1) = *(char *)(iVar6 + param_1) + '\x01';
      } while (iVar4 < *(int *)(param_1 + 0x248));
    }
    *(unsigned char *)(iVar3 + 0x2b) = 1;
  }
  return;
}

