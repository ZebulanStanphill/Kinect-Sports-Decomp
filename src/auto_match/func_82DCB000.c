extern int fn_82DCA2F0();
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int iStack_50;
extern unsigned int iStack_58;
extern unsigned int iStack_5c;
extern unsigned int iStack_60;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82DCB000(unsigned int *param_1,int param_2,float *param_3,unsigned int param_4)

{
  float fVar1;
  float fVar2;
  unsigned char *pbVar3;
  int iVar5;
  unsigned __int64 uVar4;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  
  *param_1 = param_4;
  param_1[0xc] = param_2;
  fVar1 = *(float *)(param_2 + 0x1c);
  fVar2 = *(float *)(param_2 + 0x10);
  param_1[8] = (int)((*param_3 - fVar2) * fVar1) + -1;
  param_1[4] = (int)((param_3[4] - fVar2) * fVar1) + 1;
  fVar2 = *(float *)(param_2 + 0x14);
  param_1[9] = (int)((param_3[1] - fVar2) * fVar1) + -1;
  iStack_60 = *(short *)(param_1 + 4) + 1;
  param_1[5] = (int)((param_3[5] - fVar2) * fVar1) + 1;
  fVar2 = *(float *)(param_2 + 0x18);
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  iStack_50 = (int)*(short *)(param_1 + 8);
  iStack_4c = (int)*(short *)(param_1 + 9);
  param_1[10] = (int)((param_3[2] - fVar2) * fVar1) + -1;
  iStack_5c = *(short *)(param_1 + 5) + 1;
  iStack_48 = (int)*(short *)(param_1 + 10);
  iVar5 = (int)((param_3[6] - fVar2) * fVar1) + 1;
  param_1[6] = iVar5;
  iStack_58 = (iVar5 >> 0x10) + 1;
  pbVar3 = *(unsigned char **)(param_2 + 0x20);
  uVar4 = (unsigned __int64)*pbVar3;
  param_1[0xd] = -(unsigned int)(uVar4 == 0xd);
  fn_82DCA2F0(param_1,&iStack_60,pbVar3,0,uVar4 - 0xe);
  return;
}

