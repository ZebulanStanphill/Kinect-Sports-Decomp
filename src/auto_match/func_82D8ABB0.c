extern int fn_82D93708();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8213A16C;
extern unsigned int lbl_8213A1DC;
extern unsigned int lbl_8213A624;
extern unsigned int lbl_8213B28C;
extern unsigned int lbl_8213B304;
extern unsigned int lbl_8213B63C;
extern unsigned int lbl_8213CA2C;
extern unsigned int lbl_8213CD14;
extern unsigned int lbl_821415C4;


unsigned int * fn_82D8ABB0(unsigned int *param_1,int param_2)

{
  unsigned int uVar1;
  unsigned short uVar2;
  unsigned char **ppuVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  
  fn_82D93708();
  *param_1 = &lbl_821415C4;
  param_1[0x2b] = 0;
  *(unsigned short *)(param_1 + 0x2c) = 0;
  *(unsigned short *)((int)param_1 + 0xb2) = 0x8000;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  puVar4 = param_1 + 0x38;
  param_1[0x2f] = 0x80000000;
  param_1[0x30] = 0;
  uVar1 = lbl_82002AE0;
  param_1[0x31] = 0;
  param_1[0x32] = 0x80000000;
  param_1[0x38] = &lbl_8213A16C;
  uVar2 = (unsigned short)((unsigned int)uVar1 >> 0x10);
  if (param_2 != 0) {
    *(unsigned short *)((int)param_1 + 0x1fe) = uVar2;
  }
  *puVar4 = &lbl_8213B63C;
  param_1[0x80] = 0;
  *(unsigned short *)(param_1 + 0x81) = 0;
  *(unsigned short *)((int)param_1 + 0x206) = 0x8000;
  param_1[0x82] = 0;
  *(unsigned short *)(param_1 + 0x83) = 0;
  *(unsigned short *)((int)param_1 + 0x20e) = 0x8000;
  if ((param_2 != 0) && (uVar5 = (unsigned int)*(unsigned char *)(param_1 + 0x3a), uVar5 - 2 < 6)) {
    if (uVar5 == 3) {
      if (puVar4 != (unsigned int *)0x0) {
        *(unsigned short *)((int)param_1 + 0x1fe) = uVar2;
        *puVar4 = &lbl_8213A1DC;
      }
    }
    else {
      if (uVar5 == 4) {
        if (puVar4 == (unsigned int *)0x0) {
          return param_1;
        }
        ppuVar3 = &lbl_8213B28C;
      }
      else if (uVar5 == 5) {
        if (puVar4 == (unsigned int *)0x0) {
          return param_1;
        }
        ppuVar3 = &lbl_8213B304;
      }
      else if (uVar5 == 6) {
        if (puVar4 == (unsigned int *)0x0) {
          return param_1;
        }
        ppuVar3 = &lbl_8213CD14;
      }
      else if (uVar5 == 2) {
        if (puVar4 == (unsigned int *)0x0) {
          return param_1;
        }
        ppuVar3 = &lbl_8213CA2C;
      }
      else {
        if (puVar4 == (unsigned int *)0x0) {
          return param_1;
        }
        ppuVar3 = &lbl_8213A624;
      }
      *(unsigned short *)((int)param_1 + 0x1fe) = uVar2;
      *puVar4 = ppuVar3;
    }
  }
  return param_1;
}

