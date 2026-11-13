extern unsigned int fStack_84;
extern unsigned int fStack_88;
extern unsigned int fStack_8c;
extern unsigned int fStack_90;
extern unsigned int fStack_94;
extern unsigned int fStack_98;
extern unsigned int fStack_9c;
extern unsigned int fStack_a0;
extern unsigned int fStack_a4;
extern unsigned int fStack_a8;
extern unsigned int fStack_ac;
extern unsigned int fStack_b0;
extern unsigned int fStack_b4;
extern unsigned int fStack_b8;
extern unsigned int fStack_bc;
extern unsigned int fStack_c0;
extern int fn_8280CB70();
extern int fn_82810BE8();
extern int fn_82F6A52C();
extern int fn_82F6A578();
extern unsigned int lbl_82002AE0;


void fn_82861520(unsigned __int64 param_1,unsigned __int64 param_2,__int64 param_3)

{
  float fVar1;
  int iVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  __int64 lVar5;
  float *pfVar6;
  double dVar7;
  double dVar8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  float fStack_a0;
  float fStack_9c;
  float fStack_98;
  float fStack_94;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  
  uVar3 = fn_82F6A52C();
  fn_8280CB70(uVar3,param_2,&fStack_c0);
  lVar5 = param_3 + 0x48;
  lVar4 = 6;
  iVar2 = (int)param_3;
  *(float *)(iVar2 + 0x58) = -(fStack_b4 - fStack_c0);
  *(float *)(iVar2 + 0x5c) = -(fStack_a4 - fStack_b0);
  *(float *)(iVar2 + 0x60) = -(fStack_94 - fStack_a0);
  *(float *)(iVar2 + 0x48) = -(fStack_c0 + fStack_b4);
  *(float *)(iVar2 + 100) = fStack_84 - fStack_90;
  *(float *)(iVar2 + 0x68) = -(fStack_b4 - fStack_bc);
  *(float *)(iVar2 + 0x6c) = -(fStack_a4 - fStack_ac);
  *(float *)(iVar2 + 0x70) = -(fStack_94 - fStack_9c);
  *(float *)(iVar2 + 0x74) = fStack_84 - fStack_8c;
  *(float *)(iVar2 + 0x78) = -(fStack_bc + fStack_b4);
  *(float *)(iVar2 + 0x7c) = -(fStack_ac + fStack_a4);
  *(float *)(iVar2 + 0x80) = -(fStack_9c + fStack_94);
  *(float *)(iVar2 + 0x84) = fStack_8c + fStack_84;
  *(float *)(iVar2 + 0x98) = -(fStack_b8 + fStack_b4);
  *(float *)(iVar2 + 0x4c) = -(fStack_b0 + fStack_a4);
  *(float *)(iVar2 + 0x50) = -(fStack_a0 + fStack_94);
  *(float *)(iVar2 + 0x54) = fStack_90 + fStack_84;
  *(float *)(iVar2 + 0x9c) = -(fStack_a8 + fStack_a4);
  *(float *)(iVar2 + 0xa0) = -(fStack_98 + fStack_94);
  *(float *)(iVar2 + 0xa4) = fStack_88 + fStack_84;
  *(float *)(iVar2 + 0x88) = -(fStack_b4 - fStack_b8);
  *(float *)(iVar2 + 0x8c) = -(fStack_a4 - fStack_a8);
  *(float *)(iVar2 + 0x90) = -(fStack_94 - fStack_98);
  *(float *)(iVar2 + 0x94) = fStack_84 - fStack_88;
  dVar8 = (double)lbl_82002AE0;
  do {
    dVar7 = (double)fn_82810BE8(lVar5);
    fVar1 = (float)(dVar8 / dVar7);
    pfVar6 = (float *)lVar5;
    lVar4 = lVar4 + -1;
    *pfVar6 = *pfVar6 * fVar1;
    pfVar6[1] = pfVar6[1] * fVar1;
    pfVar6[2] = pfVar6[2] * fVar1;
    pfVar6[3] = pfVar6[3] * fVar1;
    lVar5 = lVar5 + 0x10;
  } while (lVar4 != 0);
  fn_82F6A578();
  return;
}

