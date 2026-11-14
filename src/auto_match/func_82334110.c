extern int XMemSet();
extern unsigned int lbl_821917D4;
extern unsigned int lbl_821962C0;
extern unsigned int lbl_82196750;
extern unsigned int lbl_821B0B38;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;


unsigned int *
fn_82334110(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  
  param_1[2] = param_2;
  param_1[3] = param_4;
  param_1[5] = 0;
  *param_1 = &lbl_821B0B38;
  param_1[1] = 1;
  param_1[6] = 0;
  param_1[7] = 0;
  puVar1 = (unsigned int *)((unsigned int)(&lbl_821962C0 + in_r0) & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar6 = puVar1[3];
  puVar2 = (unsigned int *)((unsigned int)(param_1 + 0x78) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar6;
  puVar1 = (unsigned int *)((unsigned int)(&lbl_821962C0 + in_r0) & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar6 = puVar1[3];
  puVar2 = (unsigned int *)((unsigned int)(param_1 + 0x7c) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar6;
  puVar1 = (unsigned int *)((unsigned int)(&lbl_82196750 + in_r0) & 0xfffffff0);
  uVar4 = *puVar1;
  uVar6 = puVar1[1];
  uVar5 = puVar1[2];
  uVar7 = puVar1[3];
  param_1[0x84] = 0;
  param_1[0x85] = 0;
  param_1[0x86] = 0;
  uVar3 = ltcg_pool_0_0f;
  puVar1 = (unsigned int *)((unsigned int)(param_1 + 0x80) & 0xfffffff0);
  *puVar1 = uVar4;
  puVar1[1] = uVar6;
  puVar1[2] = uVar5;
  puVar1[3] = uVar7;
  param_1[0x8a] = uVar3;
  param_1[0x8b] = uVar3;
  param_1[0x87] = 0;
  param_1[0x8d] = uVar3;
  param_1[0x88] = 0;
  param_1[0x8e] = uVar3;
  param_1[0x89] = 0;
  param_1[0x8f] = uVar3;
  param_1[0x8c] = param_3;
  param_1[0x90] = 0;
  param_1[0x91] = 0;
  param_1[0x92] = 0;
  param_1[0x93] = 0;
  param_1[0x94] = 0;
  param_1[0x95] = 0;
  lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
  param_1[0x88] =
       (unsigned int)((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - lbl_821CA460 < lbl_821917D4);
  XMemSet(param_1 + 8,0,0xd4);
  XMemSet(param_1 + 0x3d,0,0xa0);
  XMemSet(param_1 + 0x65,0,0x48);
  param_1[0x97] = 0;
  param_1[0x98] = 0;
  param_1[0x99] = 0;
  return param_1;
}

