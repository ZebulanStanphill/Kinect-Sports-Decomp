extern int fn_827589C0();
extern unsigned int uStack_2a;


void fn_82758AC8(double param_1,double param_2,int param_3,unsigned __int64 param_4,unsigned int param_5,
                  char param_6,unsigned short param_7,unsigned short param_8,unsigned short param_9)

{
  unsigned short uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned short uVar4;
  unsigned short uStack_2a;
  
  uStack_2a = (unsigned short)(__int64)param_1;
  *(unsigned short *)(param_3 + 0x70) = uStack_2a;
  *(unsigned int *)(param_3 + 0x74) = param_5;
  uVar1 = *(unsigned short *)(param_3 + 0x7c) & 0xfffe;
  *(unsigned short *)(param_3 + 0x7c) = uVar1;
  if (param_6 != '\0') {
    *(unsigned short *)(param_3 + 0x7c) = uVar1 | 1;
  }
  uVar1 = *(unsigned short *)(param_3 + 0x7c);
  param_7 = param_7 & 6;
  *(unsigned short *)(param_3 + 0x7c) = param_7 | uVar1 & 0xfff9;
  uVar4 = (param_8 & 0xc0) << 2;
  *(unsigned short *)(param_3 + 0x7c) = uVar4 | param_7 | uVar1 & 0xfc39 | param_8 & 0xc0;
  *(unsigned short *)(param_3 + 0x7c) = param_9 & 0x30 | uVar4 | param_7 | uVar1 & 0xfc09 | param_8 & 0xc0;
  *(float *)(param_3 + 0x80) = (float)param_2;
  iVar2 = *(int *)(param_3 + 8);
  fn_827589C0(iVar2 + 0x5c);
  uVar3 = *(unsigned int *)(iVar2 + 0x60);
  *(unsigned char *)(param_3 + 0x85) = 1;
  *(unsigned int *)(param_3 + 0x14) = uVar3;
  return;
}

