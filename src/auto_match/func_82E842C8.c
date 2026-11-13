extern unsigned int lbl_831A85D0;
extern unsigned int lbl_831A86D8;
extern unsigned int lbl_831A87D8;
extern unsigned int lbl_831A8860;
extern unsigned int lbl_831A88E8;
extern unsigned int lbl_831A8970;
extern unsigned int lbl_831A89F8;
extern unsigned int lbl_831A8A40;
extern unsigned int lbl_831A8A88;
extern unsigned int lbl_831A8B90;
extern unsigned int lbl_831A8C90;
extern unsigned int lbl_831A8D18;
extern unsigned int lbl_831A8DA0;
extern unsigned int lbl_831A8E28;
extern unsigned int lbl_831A8EB0;
extern unsigned int lbl_831A8EF8;


void fn_82E842C8(int param_1,int param_2)

{
  int iVar1;
  unsigned char *puVar2;
  unsigned char *puVar3;
  unsigned char *puVar4;
  unsigned char *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  
  if (param_2 == 0) {
    *(unsigned char **)(param_1 + 0x254) = &lbl_831A8A88;
    *(unsigned char **)(param_1 + 600) = &lbl_831A8C90;
    *(unsigned char **)(param_1 + 0x25c) = &lbl_831A8DA0;
    *(unsigned char **)(param_1 + 0x268) = &lbl_831A8EB0;
    puVar5 = &lbl_831A8B90;
    puVar4 = &lbl_831A8D18;
    puVar3 = &lbl_831A8E28;
    puVar2 = &lbl_831A8EF8;
    iVar8 = param_1 + 0x3280;
    iVar1 = 0x3a80;
    iVar7 = param_1 + 16000;
    iVar6 = param_1 + 0x4280;
  }
  else {
    *(unsigned char **)(param_1 + 0x254) = &lbl_831A85D0;
    *(unsigned char **)(param_1 + 600) = &lbl_831A87D8;
    *(unsigned char **)(param_1 + 0x25c) = &lbl_831A88E8;
    *(unsigned char **)(param_1 + 0x268) = &lbl_831A89F8;
    puVar5 = &lbl_831A86D8;
    puVar4 = &lbl_831A8860;
    puVar3 = &lbl_831A8970;
    puVar2 = &lbl_831A8A40;
    iVar8 = param_1 + 0x2080;
    iVar1 = 0x2880;
    iVar7 = param_1 + 0x2c80;
    iVar6 = param_1 + 0x3080;
  }
  *(int *)(param_1 + 0x2074) = param_1 + iVar1;
  *(int *)(param_1 + 0x207c) = iVar6;
  *(int *)(param_1 + 0x2078) = iVar7;
  *(int *)(param_1 + 0x2070) = iVar8;
  *(unsigned char **)(param_1 + 0x250) = puVar5;
  *(unsigned char **)(param_1 + 0x26c) = puVar2;
  *(unsigned char **)(param_1 + 0x264) = puVar3;
  *(unsigned char **)(param_1 + 0x260) = puVar4;
  *(unsigned char **)(param_1 + 0x203c) = puVar2;
  *(unsigned char **)(param_1 + 0x2048) = puVar5;
  *(unsigned char **)(param_1 + 0x204c) = puVar4;
  *(unsigned char **)(param_1 + 0x2050) = puVar3;
  *(unsigned char **)(param_1 + 0x2054) = puVar2;
  *(unsigned char **)(param_1 + 0x2030) = puVar5;
  *(unsigned char **)(param_1 + 0x2034) = puVar4;
  *(unsigned char **)(param_1 + 0x2038) = puVar3;
  if (*(int *)(param_1 + 0x628) != 0) {
    return;
  }
  *(unsigned int *)(param_1 + 0x2034) = 0x831a9160;
  *(unsigned int *)(param_1 + 0x2038) = 0x831a91e8;
  return;
}

