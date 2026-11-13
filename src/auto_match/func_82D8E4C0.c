typedef unsigned char bool;
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_8201DFF4;
extern unsigned int lbl_8201FBC0;
extern unsigned int lbl_82186E18;
extern unsigned int lbl_82186E74;


void fn_82D8E4C0(int param_1,__int64 param_2)

{
  bool bVar1;
  unsigned int uVar2;
  
  if (8 < (param_2 - 1U & 0xffffffff)) {
    return;
  }
  bVar1 = (int)(param_2 - 1U) != 0;
  if (param_2 == 2 && bVar1) {
    *(unsigned int *)(param_1 + 0x80) = 2;
    uVar2 = lbl_82002AE0;
    *(unsigned int *)(param_1 + 0x78) = lbl_8201FBC0;
    *(unsigned int *)(param_1 + 0x7c) = uVar2;
    return;
  }
  if (param_2 == 3 && bVar1) {
    uVar2 = 2;
  }
  else {
    if (param_2 == 4 && bVar1) {
      *(unsigned int *)(param_1 + 0x80) = 4;
      uVar2 = lbl_8201DFF4;
      *(unsigned int *)(param_1 + 0x78) = lbl_82186E74;
      *(unsigned int *)(param_1 + 0x7c) = uVar2;
      return;
    }
    if (param_2 == 5 && bVar1) {
      *(unsigned int *)(param_1 + 0x80) = 4;
      uVar2 = lbl_82002AE0;
      *(unsigned int *)(param_1 + 0x78) = lbl_8201FBC0;
      *(unsigned int *)(param_1 + 0x7c) = uVar2;
      return;
    }
    if (param_2 == 6 && bVar1) {
      uVar2 = 4;
    }
    else {
      if (param_2 == 7 && bVar1) {
        *(unsigned int *)(param_1 + 0x80) = 8;
        uVar2 = lbl_8201DFF4;
        *(unsigned int *)(param_1 + 0x78) = lbl_82186E74;
        *(unsigned int *)(param_1 + 0x7c) = uVar2;
        return;
      }
      if (param_2 == 8 && bVar1) {
        *(unsigned int *)(param_1 + 0x80) = 8;
        uVar2 = lbl_82002AE0;
        *(unsigned int *)(param_1 + 0x78) = lbl_8201FBC0;
        *(unsigned int *)(param_1 + 0x7c) = uVar2;
        return;
      }
      if (!bVar1) {
        *(unsigned int *)(param_1 + 0x80) = 2;
        uVar2 = lbl_8201DFF4;
        *(unsigned int *)(param_1 + 0x78) = lbl_82186E74;
        *(unsigned int *)(param_1 + 0x7c) = uVar2;
        return;
      }
      uVar2 = 8;
    }
  }
  *(unsigned int *)(param_1 + 0x80) = uVar2;
  uVar2 = lbl_82186E18;
  *(unsigned int *)(param_1 + 0x78) = lbl_8201DFF4;
  *(unsigned int *)(param_1 + 0x7c) = uVar2;
  return;
}

