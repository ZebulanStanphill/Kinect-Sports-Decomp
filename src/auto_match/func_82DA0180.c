extern unsigned int *auStack_30;
extern int fn_82D9AB30();
extern unsigned int iStack_24;
extern unsigned int iStack_28;
extern unsigned int iStack_2c;


unsigned __int64 fn_82DA0180(unsigned short *param_1,int param_2,unsigned char *param_3)

{
  unsigned short uVar1;
  unsigned __int64 uVar2;
  unsigned short uVar3;
  unsigned int uVar4;
  unsigned char auStack_30 [4];
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  uVar4 = (unsigned int)*param_1;
  uVar2 = 0;
  if (5 < uVar4 - 0x17) {
    return uVar2;
  }
  if (uVar4 == 0x17) {
    *param_3 = *param_3 | 8;
    return uVar2;
  }
  if (uVar4 == 0x18) {
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 0x50;
    *param_3 = *param_3 | 1;
    return uVar2;
  }
  if (uVar4 == 0x19) {
    *param_3 = *param_3 | 0x10;
    return uVar2;
  }
  if (uVar4 == 0x1a) {
    *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 0x50;
    *param_3 = *param_3 | 4;
    return uVar2;
  }
  if (uVar4 == 0x1b) {
    uVar3 = 0;
    uVar1 = *param_1;
    while (0x16 < uVar1) {
      uVar3 = param_1[9];
      param_1 = *(unsigned short **)(param_1 + 10);
      uVar1 = *param_1;
    }
    if ((*param_1 != 0x16) && (*param_1 != 1)) {
      fn_82D9AB30(param_1,uVar3,auStack_30);
      *(int *)(param_2 + 0xc) = *(int *)(param_2 + 0xc) - iStack_24;
      *(int *)(param_2 + 8) = *(int *)(param_2 + 8) - iStack_28;
      *(int *)(param_2 + 4) = *(int *)(param_2 + 4) - iStack_2c;
    }
    return 0;
  }
  *(int *)(param_2 + 4) = *(int *)(param_2 + 4) + 0xd0;
  *param_3 = *param_3 | 2;
  return uVar2;
}

