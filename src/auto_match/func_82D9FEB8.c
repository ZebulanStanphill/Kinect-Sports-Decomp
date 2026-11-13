extern unsigned int *auStack_80;
extern unsigned int *auStack_c0;
extern unsigned int fStack_88;
extern unsigned int fStack_9c;
extern unsigned int fStack_c8;
extern unsigned int fStack_cc;
extern unsigned int fStack_d0;
extern int fn_82CEBE20();
extern int fn_82CEC6E0();
extern int fn_82CEC730();
extern int fn_82CEC7E0();


void fn_82D9FEB8(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,int param_5)

{
  unsigned int uVar1;
  float *pfVar2;
  int iVar3;
  float *pfVar4;
  unsigned __int64 in_r0;
  __int64 lVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  unsigned char auStack_c0 [16];
  float afStack_b0 [5];
  float fStack_9c;
  float fStack_88;
  unsigned char auStack_80 [128];
  
  pfVar2 = (float *)(param_1 + 0x20U & 0xfffffff0);
  fVar9 = *pfVar2;
  fVar10 = pfVar2[1];
  fVar11 = pfVar2[2];
  fVar12 = pfVar2[3];
  lVar5 = 2;
  pfVar2 = (float *)((int)&fStack_d0 + (int)in_r0 & 0xfffffff0);
  *pfVar2 = fVar9;
  pfVar2[1] = fVar10;
  pfVar2[2] = fVar11;
  pfVar2[3] = fVar12;
  do {
    dVar6 = (double)fStack_d0;
    dVar8 = (double)fStack_cc;
    dVar7 = (double)fStack_c8;
    iVar3 = (int)in_r0;
    pfVar2 = (float *)(iVar3 + param_3 + 0x40 & 0xfffffff0);
    fVar13 = pfVar2[1];
    fVar14 = pfVar2[2];
    fVar15 = pfVar2[3];
    pfVar4 = (float *)(iVar3 + param_3 + 0x40 & 0xfffffff0);
    *pfVar4 = *pfVar2 * fVar9;
    pfVar4[1] = fVar13 * fVar10;
    pfVar4[2] = fVar14 * fVar11;
    pfVar4[3] = fVar15 * fVar12;
    if ((dVar6 == dVar8) && (dVar8 == dVar7)) {
      pfVar2 = (float *)((unsigned int)(auStack_c0 + iVar3) & 0xfffffff0);
      *pfVar2 = fVar9;
      pfVar2[1] = fVar10;
      pfVar2[2] = fVar11;
      pfVar2[3] = fVar12;
      fn_82CEBE20(param_3 + 0x10,auStack_c0);
    }
    else {
      uVar1 = *(unsigned int *)(param_3 + 0x50);
      fn_82CEC7E0(auStack_80,uVar1,param_3 + 0x10);
      fn_82CEC6E0(afStack_b0,auStack_80,uVar1);
      afStack_b0[0] = (float)((double)afStack_b0[0] * dVar6);
      fStack_9c = (float)((double)fStack_9c * dVar8);
      fStack_88 = (float)((double)fStack_88 * dVar7);
      fn_82CEC730(auStack_80,afStack_b0,uVar1);
      fn_82CEC6E0(param_3 + 0x10,uVar1,auStack_80);
    }
    pfVar2 = (float *)((int)in_r0 + param_1 + 0x30 & 0xfffffff0);
    fVar9 = *pfVar2;
    fVar10 = pfVar2[1];
    fVar11 = pfVar2[2];
    fVar12 = pfVar2[3];
    lVar5 = lVar5 + -1;
    pfVar2 = (float *)((int)&fStack_d0 + (int)in_r0 & 0xfffffff0);
    *pfVar2 = fVar9;
    pfVar2[1] = fVar10;
    pfVar2[2] = fVar11;
    pfVar2[3] = fVar12;
    param_3 = param_5;
  } while (lVar5 != 0);
  return;
}

