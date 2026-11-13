typedef unsigned char bool;
extern unsigned int lbl_831AE520;
extern unsigned int lbl_831AE620;
extern unsigned int lbl_831AE660;
extern unsigned int lbl_831AE760;
extern unsigned int lbl_831AE7A0;
extern unsigned int lbl_831AE8A0;
extern unsigned int lbl_831AE8E0;
extern unsigned int lbl_831AE9E0;


void fn_82F0E0D8(int param_1)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  
  uVar2 = *(unsigned int *)(param_1 + 0x1b24);
  uVar3 = *(unsigned int *)(param_1 + 0x1b28);
  uVar5 = uVar2;
  if (uVar3 < uVar2) {
    uVar5 = uVar3;
  }
  uVar4 = (unsigned __int64)(uVar3 < uVar2);
  if (*(unsigned int *)(param_1 + 0x1b2c) < uVar5) {
    uVar4 = 2;
    uVar5 = *(unsigned int *)(param_1 + 0x1b2c);
  }
  if (*(unsigned int *)(param_1 + 0x1b30) < uVar5) {
    uVar4 = 3;
  }
  uVar2 = *(unsigned int *)(param_1 + 0x7958);
  if ((uVar2 != 0xffffffff) && (uVar4 = (unsigned __int64)uVar2 - 4, (int)uVar2 < 4)) {
    uVar4 = (unsigned __int64)uVar2;
  }
  if (3 < (uVar4 & 0xffffffff)) {
    return;
  }
  bVar1 = (int)uVar4 != 0;
  if (uVar4 == 1 && bVar1) {
    *(unsigned char **)(param_1 + 0x5140) = &lbl_831AE660;
    *(unsigned char **)(param_1 + 0x5144) = &lbl_831AE760;
    *(unsigned int *)(param_1 + 0x5160) = 1;
    return;
  }
  if (uVar4 != 2 || !bVar1) {
    if (!bVar1) {
      *(unsigned char **)(param_1 + 0x5140) = &lbl_831AE520;
      *(unsigned char **)(param_1 + 0x5144) = &lbl_831AE620;
      *(unsigned int *)(param_1 + 0x5160) = 0;
      return;
    }
    *(unsigned char **)(param_1 + 0x5140) = &lbl_831AE8E0;
    *(unsigned char **)(param_1 + 0x5144) = &lbl_831AE9E0;
    *(unsigned int *)(param_1 + 0x5160) = 3;
    return;
  }
  *(unsigned char **)(param_1 + 0x5140) = &lbl_831AE7A0;
  *(unsigned char **)(param_1 + 0x5144) = &lbl_831AE8A0;
  *(unsigned int *)(param_1 + 0x5160) = 2;
  return;
}

