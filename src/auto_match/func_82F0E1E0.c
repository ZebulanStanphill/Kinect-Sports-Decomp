typedef unsigned char bool;
extern unsigned int lbl_831AEA20;
extern unsigned int lbl_831AEC68;
extern unsigned int lbl_831AEEB0;
extern unsigned int lbl_831AF0F8;
extern unsigned int lbl_831AF340;
extern unsigned int lbl_831AF598;
extern unsigned int lbl_831AF7F0;
extern unsigned int lbl_831AFA48;


void fn_82F0E1E0(int param_1)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned char *puVar5;
  unsigned int uVar6;
  
  uVar2 = *(unsigned int *)(param_1 + 0x1b14);
  uVar3 = *(unsigned int *)(param_1 + 0x1b18);
  uVar6 = uVar2;
  if (uVar3 < uVar2) {
    uVar6 = uVar3;
  }
  uVar4 = (unsigned __int64)(uVar3 < uVar2);
  if (*(unsigned int *)(param_1 + 0x1b1c) < uVar6) {
    uVar4 = 2;
    uVar6 = *(unsigned int *)(param_1 + 0x1b1c);
  }
  if (*(unsigned int *)(param_1 + 0x1b20) < uVar6) {
    uVar4 = 3;
  }
  uVar2 = *(unsigned int *)(param_1 + 0x7954);
  if ((uVar2 != 0xffffffff) && (uVar4 = (unsigned __int64)uVar2 - 4, (int)uVar2 < 4)) {
    uVar4 = (unsigned __int64)uVar2;
  }
  if ((uVar4 & 0xffffffff) < 4) {
    bVar1 = (int)uVar4 != 0;
    if (uVar4 == 1 && bVar1) {
      *(unsigned int *)(param_1 + 0x5164) = 1;
      if (*(int *)(param_1 + 0x7b3c) == 0) {
        puVar5 = &lbl_831AEC68;
      }
      else {
        puVar5 = &lbl_831AF598;
      }
    }
    else if (uVar4 == 2 && bVar1) {
      *(unsigned int *)(param_1 + 0x5164) = 2;
      if (*(int *)(param_1 + 0x7b3c) == 0) {
        puVar5 = &lbl_831AEEB0;
      }
      else {
        puVar5 = &lbl_831AF7F0;
      }
    }
    else if (bVar1) {
      *(unsigned int *)(param_1 + 0x5164) = 3;
      if (*(int *)(param_1 + 0x7b3c) == 0) {
        puVar5 = &lbl_831AF0F8;
      }
      else {
        puVar5 = &lbl_831AFA48;
      }
    }
    else {
      *(unsigned int *)(param_1 + 0x5164) = 0;
      if (*(int *)(param_1 + 0x7b3c) == 0) {
        puVar5 = &lbl_831AEA20;
      }
      else {
        puVar5 = &lbl_831AF340;
      }
    }
    *(unsigned char **)(param_1 + 0x5150) = puVar5;
  }
  *(int *)(param_1 + 0x51a0) = *(int *)(param_1 + 0x5164) * 0x2000 + -0x7ce604e8;
  if (*(int *)(param_1 + 0xaf0) == 1) {
    *(unsigned int *)(param_1 + 0x5158) = *(unsigned int *)(param_1 + 0x5150);
    return;
  }
  *(unsigned int *)(param_1 + 0x515c) = *(unsigned int *)(param_1 + 0x5150);
  return;
}

