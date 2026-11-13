extern unsigned int lbl_82091230;
extern unsigned int lbl_82091900;
extern unsigned int lbl_82092F40;
extern unsigned int lbl_820935E0;
extern unsigned int lbl_82094588;
extern unsigned int lbl_82094F40;
extern unsigned int lbl_82095A60;
extern unsigned int lbl_82095E18;
extern unsigned int lbl_820961D0;
extern unsigned int lbl_82096538;
extern unsigned int lbl_820968A0;
extern unsigned int lbl_82097310;
extern unsigned int lbl_82097D80;
extern unsigned int lbl_820985E0;
extern unsigned int lbl_82098E40;
extern unsigned int lbl_82099370;
extern unsigned int lbl_820998A0;
extern unsigned int lbl_82099CF8;


void fn_82A72B38(int *param_1,int param_2,short param_3)

{
  int iVar1;
  
  iVar1 = *(int *)(*param_1 + 0x120);
  if (iVar1 == 3) {
    if (param_3 == 1) {
      *(unsigned char **)(param_2 + 0x18) = &lbl_82092F40;
      *(unsigned char **)(param_2 + 0x1c) = &lbl_820961D0;
      *(unsigned char **)(param_2 + 0x20) = &lbl_82096538;
      *(unsigned short *)((int)param_1 + 0x13a) = 0x28;
      return;
    }
    *(unsigned char **)(param_2 + 0x18) = &lbl_82091230;
    *(unsigned char **)(param_2 + 0x1c) = &lbl_82095A60;
    *(unsigned char **)(param_2 + 0x20) = &lbl_82095E18;
    *(unsigned short *)((int)param_1 + 0x13a) = 0x46;
    return;
  }
  if (iVar1 == 1) {
    if (param_3 == 1) {
      *(unsigned char **)(param_2 + 0x18) = &lbl_82094F40;
      *(unsigned char **)(param_2 + 0x1c) = &lbl_820998A0;
      *(unsigned char **)(param_2 + 0x20) = &lbl_82099CF8;
      *(unsigned short *)((int)param_1 + 0x13a) = 0x28;
      return;
    }
    *(unsigned char **)(param_2 + 0x18) = &lbl_82094588;
    *(unsigned char **)(param_2 + 0x1c) = &lbl_82098E40;
    *(unsigned char **)(param_2 + 0x20) = &lbl_82099370;
    *(unsigned short *)((int)param_1 + 0x13a) = 0x3c;
    return;
  }
  if (iVar1 != 2) {
    return;
  }
  if (param_3 == 1) {
    *(unsigned char **)(param_2 + 0x18) = &lbl_820935E0;
    *(unsigned char **)(param_2 + 0x1c) = &lbl_82097D80;
    *(unsigned char **)(param_2 + 0x20) = &lbl_820985E0;
    *(unsigned short *)((int)param_1 + 0x13a) = 0xb4;
    return;
  }
  *(unsigned char **)(param_2 + 0x18) = &lbl_82091900;
  *(unsigned char **)(param_2 + 0x1c) = &lbl_820968A0;
  *(unsigned char **)(param_2 + 0x20) = &lbl_82097310;
  *(unsigned short *)((int)param_1 + 0x13a) = 0x154;
  return;
}

