extern unsigned int lbl_820EF7D8;
extern unsigned int lbl_820EFEA8;
extern unsigned int lbl_820F14E8;
extern unsigned int lbl_820F1B88;
extern unsigned int lbl_820F2B30;
extern unsigned int lbl_820F34E8;
extern unsigned int lbl_820F4008;
extern unsigned int lbl_820F43C0;
extern unsigned int lbl_820F4778;
extern unsigned int lbl_820F4AE0;
extern unsigned int lbl_820F4E48;
extern unsigned int lbl_820F58B8;
extern unsigned int lbl_820F6328;
extern unsigned int lbl_820F6B88;
extern unsigned int lbl_820F73E8;
extern unsigned int lbl_820F7918;
extern unsigned int lbl_820F7E48;
extern unsigned int lbl_820F82A0;


void fn_82C398E0(int *param_1,int param_2,short param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x120);
  if (iVar1 == 3) {
    if (param_3 == 1) {
      *(unsigned char **)(param_2 + 0x18) = &lbl_820F14E8;
      *(unsigned char **)(param_2 + 0x1c) = &lbl_820F4778;
      *(unsigned char **)(param_2 + 0x20) = &lbl_820F4AE0;
      *(unsigned short *)((int)param_1 + 0x13a) = 0x28;
      return;
    }
    *(unsigned char **)(param_2 + 0x18) = &lbl_820EF7D8;
    *(unsigned char **)(param_2 + 0x1c) = &lbl_820F4008;
    *(unsigned char **)(param_2 + 0x20) = &lbl_820F43C0;
    *(unsigned short *)((int)param_1 + 0x13a) = 0x46;
    return;
  }
  if (iVar1 == 1) {
    if (param_3 == 1) {
      *(unsigned char **)(param_2 + 0x18) = &lbl_820F34E8;
      *(unsigned char **)(param_2 + 0x1c) = &lbl_820F7E48;
      *(unsigned char **)(param_2 + 0x20) = &lbl_820F82A0;
      *(unsigned short *)((int)param_1 + 0x13a) = 0x28;
      return;
    }
    *(unsigned char **)(param_2 + 0x18) = &lbl_820F2B30;
    *(unsigned char **)(param_2 + 0x1c) = &lbl_820F73E8;
    *(unsigned char **)(param_2 + 0x20) = &lbl_820F7918;
    *(unsigned short *)((int)param_1 + 0x13a) = 0x3c;
    return;
  }
  if (iVar1 != 2) {
    return;
  }
  if (param_3 == 1) {
    *(unsigned char **)(param_2 + 0x18) = &lbl_820F1B88;
    *(unsigned char **)(param_2 + 0x1c) = &lbl_820F6328;
    *(unsigned char **)(param_2 + 0x20) = &lbl_820F6B88;
    *(unsigned short *)((int)param_1 + 0x13a) = 0xb4;
    return;
  }
  *(unsigned char **)(param_2 + 0x18) = &lbl_820EFEA8;
  *(unsigned char **)(param_2 + 0x1c) = &lbl_820F4E48;
  *(unsigned char **)(param_2 + 0x20) = &lbl_820F58B8;
  *(unsigned short *)((int)param_1 + 0x13a) = 0x154;
  return;
}

