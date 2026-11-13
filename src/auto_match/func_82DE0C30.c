extern int fn_82DDFC50();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005340;
extern unsigned int lbl_82005344;
extern unsigned int uStack_10;
extern unsigned int uStack_14;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_c;


void fn_82DE0C30(int param_1,int param_2,unsigned int *param_3,unsigned int param_4)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float *pfVar6;
  __int64 lVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  struct { unsigned int first; unsigned int second; } stack_pair_20;

  unsigned int uStack_18;
  unsigned int uStack_14;
  unsigned int uStack_10;
  unsigned int uStack_c;
  
  *(unsigned int *)(param_1 + 0x40) = param_4;
  *(float *)(param_1 + 0x10) = lbl_82002AE0 / *(float *)(param_2 + 0x1c);
  puVar1 = (unsigned int *)(param_2 + 0x10U & 0xfffffff0);
  uVar8 = puVar1[1];
  uVar9 = puVar1[2];
  uVar10 = puVar1[3];
  puVar2 = (unsigned int *)(param_1 + 0x20U & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar8;
  puVar2[2] = uVar9;
  puVar2[3] = uVar10;
  *(unsigned char *)(param_1 + 0xc0) = 0;
  *(unsigned int *)(param_1 + 0xb0) = *param_3;
  fVar3 = *(float *)(param_1 + 0x10) * 16777216.0f;
  *(unsigned int *)(param_1 + 0xb4) = param_3[1];
  *(unsigned int *)(param_1 + 0xb8) = param_3[2];
  fVar5 = lbl_82005344;
  fVar4 = lbl_82005340;
  lVar7 = 0xd;
  *(unsigned int *)(param_1 + 0xbc) = param_3[3];
  *(unsigned int *)(param_1 + 0x30) = 0xffffffff;
  stack_pair_20.first = 0;
  *(unsigned int *)(param_1 + 0xac) = 0;
  pfVar6 = (float *)(param_1 + 0x40);
  stack_pair_20.second = 0;
  uStack_18 = 0;
  uStack_14 = 0;
  uStack_10 = 0;
  do {
    pfVar6[1] = fVar3 * fVar4;
    pfVar6 = pfVar6 + 2;
    *pfVar6 = fVar3 * fVar5;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  uStack_c = 0;
  fn_82DDFC50(param_1,&stack_pair_20.first,*(unsigned int *)(param_2 + 0x20));
  return;
}

