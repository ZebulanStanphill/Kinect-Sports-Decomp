extern int fn_8267C4F0();
extern int fn_8270EB60();
extern unsigned int lbl_821AAD20;


void fn_826F79A8(int param_1,char param_2)

{
  unsigned char *pbVar1;
  unsigned int uVar2;
  int *piVar3;
  unsigned char *pbVar4;
  unsigned int uVar5;
  __int64 lVar6;
  
  if (param_2 == '\0') {
    fn_8270EB60(*(unsigned int *)(param_1 + 0x9e0));
    uVar2 = lbl_821AAD20;
    pbVar4 = (unsigned char *)(param_1 + 0x940);
    lVar6 = 4;
    do {
      pbVar1 = pbVar4 + 0x24;
      *(unsigned int *)(pbVar4 + 0x1c) = uVar2;
      *(unsigned int *)(pbVar4 + 0x18) = uVar2;
      pbVar4[0x20] = 0;
      pbVar4[0x21] = 0;
      pbVar4[0x22] = 0;
      pbVar4[0x23] = 0;
      pbVar4[0x14] = 0;
      pbVar4[0x15] = 0;
      pbVar4[0x16] = 0;
      pbVar4[0x17] = 0;
      pbVar4[0x10] = 0;
      pbVar4[0x11] = 0;
      pbVar4[0x12] = 0;
      pbVar4[0x13] = 0;
      pbVar4 = pbVar4 + 0x24;
      *pbVar4 = *pbVar1 & 7;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
  }
  if (param_2 == '\0') {
    uVar5 = *(unsigned int *)(param_1 + 0xb00) & 0xfffbffff;
  }
  else {
    uVar5 = *(unsigned int *)(param_1 + 0xb00) | 0x40000;
  }
  *(unsigned int *)(param_1 + 0xb00) = uVar5;
  piVar3 = (int *)(**(int (***)())(*(int *)(param_1 + 8) + 0xc))(param_1 + 8,0x1b);
  if (piVar3 != (int *)0x0) {
    (**(int (***)())(*piVar3 + 0x44))(piVar3,param_1);
    fn_8267C4F0(piVar3);
  }
  return;
}

