typedef unsigned char bool;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int fStack_c4;
extern unsigned int fStack_c8;
extern unsigned int fStack_cc;
extern unsigned int fStack_d0;
extern int fn_82CE5410();
extern int fn_82CE63B0();
extern int fn_82D1E948();
extern int fn_82D1FA30();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82175388;
extern unsigned int lbl_8323B1A0;
extern unsigned int uStack_e0;
extern unsigned int uStack_e8;
extern unsigned int uStack_f0;
extern unsigned int uStack_f8;


bool fn_82D1D6D8(unsigned __int64 param_1,int param_2,int *param_3,int param_4)

{
  int iVar1;
  float *pfVar2;
  float *pfVar3;
  unsigned int *puVar4;
  int iVar5;
  unsigned int *puVar6;
  int iVar7;
  unsigned __int64 in_r0;
  int iVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  double dVar11;
  double dVar12;
  unsigned int uVar13;
  float fVar14;
  unsigned int uVar15;
  float fVar16;
  unsigned int uVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  char acStack_100 [8];
  unsigned __int64 uStack_f8;
  unsigned __int64 uStack_f0;
  unsigned __int64 uStack_e8;
  unsigned __int64 uStack_e0;
  float fStack_d0;
  float fStack_cc;
  float fStack_c8;
  float fStack_c4;
  unsigned char auStack_c0 [16];
  unsigned char auStack_b0 [16];
  unsigned char auStack_a0 [160];
  
  fn_82D1E948(auStack_b0,param_1);
  iVar8 = 0;
  iVar7 = param_2 << 3;
  pfVar2 = (float *)((unsigned int)(auStack_a0 + (int)in_r0) & 0xfffffff0);
  pfVar3 = (float *)((unsigned int)(auStack_b0 + (int)in_r0) & 0xfffffff0);
  fVar23 = *pfVar3;
  fVar24 = pfVar3[1];
  fVar25 = pfVar3[2];
  fVar26 = pfVar3[3];
  fVar19 = *pfVar2 - fVar23;
  fVar20 = pfVar2[1] - fVar24;
  fVar21 = pfVar2[2] - fVar25;
  fVar22 = pfVar2[3] - fVar26;
  if (param_2 != 0) {
    dVar11 = (double)lbl_82002AE0;
    dVar12 = (double)lbl_82175388;
    do {
      iVar1 = *(int *)(param_4 + 4);
      iVar5 = (int)in_r0;
      puVar4 = (unsigned int *)((unsigned int)(&lbl_8323B1A0 + iVar5) & 0xfffffff0);
      uVar13 = puVar4[1];
      uVar15 = puVar4[2];
      uVar17 = puVar4[3];
      acStack_100[0] = '\x01';
      puVar6 = (unsigned int *)((int)&fStack_d0 + iVar5 & 0xfffffff0);
      *puVar6 = *puVar4;
      puVar6[1] = uVar13;
      puVar6[2] = uVar15;
      puVar6[3] = uVar17;
      uVar9 = iVar1 * 0x19660d + 0x3c6ef35f;
      *(unsigned int *)(param_4 + 4) = uVar9;
      uVar10 = uVar9 * 0x19660d + 0x3c6ef35f;
      uStack_f0 = (unsigned __int64)uVar9;
      *(unsigned int *)(param_4 + 4) = uVar10;
      uVar9 = uVar10 * 0x19660d + 0x3c6ef35f;
      uStack_f8 = (unsigned __int64)uVar10;
      *(unsigned int *)(param_4 + 4) = uVar9;
      uVar10 = uVar9 * 0x19660d + 0x3c6ef35f;
      uStack_e8 = (unsigned __int64)uVar9;
      uStack_e0 = (unsigned __int64)uVar10;
      *(unsigned int *)(param_4 + 4) = uVar10;
      fStack_cc = (float)((double)uStack_f8 * dVar12);
      fStack_d0 = (float)((double)uStack_f0 * dVar12);
      fStack_c8 = (float)((double)uStack_e8 * dVar12);
      fStack_c4 = (float)((double)uStack_e0 * dVar12);
      pfVar2 = (float *)((int)&fStack_d0 + iVar5 & 0xfffffff0);
      fVar14 = pfVar2[1];
      fVar16 = pfVar2[2];
      fVar18 = pfVar2[3];
      pfVar3 = (float *)((int)&fStack_d0 + iVar5 & 0xfffffff0);
      *pfVar3 = fVar19 * *pfVar2 + fVar23;
      pfVar3[1] = fVar20 * fVar14 + fVar24;
      pfVar3[2] = fVar21 * fVar16 + fVar25;
      pfVar3[3] = fVar22 * fVar18 + fVar26;
      fn_82D1FA30(param_1,&fStack_d0,auStack_c0,acStack_100);
      if (acStack_100[0] == '\0') {
        iVar8 = iVar8 + 1;
        if (iVar7 < iVar8) break;
      }
      else {
        fStack_c4 = (float)dVar11;
        iVar8 = fn_82CE5410();
        if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
          fn_82CE63B0(*(unsigned int *)(iVar8 + 0x10),param_3,0x10);
        }
        param_2 = param_2 + -1;
        iVar8 = 0;
        puVar4 = (unsigned int *)((int)&fStack_d0 + (int)in_r0 & 0xfffffff0);
        uVar13 = puVar4[1];
        uVar15 = puVar4[2];
        uVar17 = puVar4[3];
        puVar6 = (unsigned int *)((int)in_r0 + param_3[1] * 0x10 + *param_3 & 0xfffffff0);
        *puVar6 = *puVar4;
        puVar6[1] = uVar13;
        puVar6[2] = uVar15;
        puVar6[3] = uVar17;
        param_3[1] = param_3[1] + 1;
      }
    } while (param_2 != 0);
  }
  return param_2 == 0;
}

