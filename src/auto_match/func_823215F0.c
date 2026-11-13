extern unsigned int *auStack_40;
extern int fn_822B9390();
extern int fn_82528FA8();
extern int fn_8252AFE0();
extern int fn_8252CAF8();
extern unsigned int lbl_82191FCC;
extern unsigned int lbl_821CA1A0;
extern unsigned int lbl_821CA1A4;
extern unsigned int lbl_821CA1A8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


int * fn_823215F0(int *param_1,int *param_2,unsigned __int64 param_3,int param_4)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  __int64 lVar6;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned char auStack_40 [64];
  
  puVar2 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar2 = in_register_000104d0;
  puVar2[1] = in_register_000104d4;
  puVar2[2] = in_register_000104d8;
  puVar2[3] = in_vr77;
  *param_1 = param_4;
  uStack_50 = lbl_821CA1A0;
  uStack_48 = lbl_821CA1A8;
  uStack_4c = lbl_821CA1A4;
  uVar4 = fn_82528FA8((double)lbl_821CA460,param_3,param_2,auStack_40,&uStack_50,
                            0xffffffff821ca45c,0);
  param_1[1] = (int)uVar4;
  param_1[2] = param_2[2];
  param_1[3] = *param_2;
  param_1[4] = param_2[1];
  param_1[5] = param_2[2];
  param_1[6] = param_2[3];
  param_1[7] = 0;
  param_1[8] = 2;
  param_1[9] = 0;
  fn_822B9390(*(unsigned int *)(*param_1 + 0x11c),uVar4,*(unsigned short *)(param_2 + 1));
  lVar6 = 2;
  puVar5 = (unsigned int *)(param_1[1] + 0x1dc);
  do {
    puVar3 = puVar5 + 1;
    puVar5 = puVar5 + 1;
    *puVar5 = *puVar3 | 8;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  iVar1 = param_1[1];
  if (*(float *)(iVar1 + 0x8bc) != lbl_82191FCC) {
    *(float *)(iVar1 + 0x8bc) = lbl_82191FCC;
    *(unsigned int *)(iVar1 + 0x170) = 0;
  }
  fn_8252CAF8(param_1[1],1,*(unsigned int *)(param_4 + 0x2c) & 0xff);
  param_1[7] = 0;
  fn_8252AFE0((double)ltcg_pool_0_0f,param_1[1]);
  return param_1;
}

