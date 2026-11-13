#define true 1
extern unsigned int *auStack_60;
extern unsigned int fStack_58;
extern int fn_82809868();
extern int fn_82809950();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_82191208;
extern unsigned int lbl_82192604;
extern unsigned int lbl_82195704;
extern unsigned int lbl_821962C0;
extern unsigned int lbl_821B85A8;
extern unsigned int ltcg_pool_0_0f;


void fn_82422F08(int param_1,int param_2,int param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  unsigned int *puVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  int in_r0;
  int *piVar9;
  int *piVar10;
  unsigned int uVar11;
  unsigned int *puVar12;
  int iVar13;
  __int64 lVar14;
  double dVar15;
  double dVar16;
  double dVar17;
  unsigned int uVar18;
  unsigned int uVar19;
  unsigned int uVar20;
  unsigned int uVar21;
  unsigned char auStack_60 [8];
  float fStack_58;
  
  puVar12 = (unsigned int *)(param_3 + 0x14);
  lVar14 = 0xf;
  do {
    puVar5 = (unsigned int *)((unsigned int)(&lbl_821962C0 + in_r0) & 0xfffffff0);
    uVar18 = *puVar5;
    uVar19 = puVar5[1];
    uVar20 = puVar5[2];
    uVar21 = puVar5[3];
    puVar12[-1] = 0;
    *puVar12 = 0;
    puVar5 = (unsigned int *)((unsigned int)(puVar12 + -5) & 0xfffffff0);
    *puVar5 = uVar18;
    puVar5[1] = uVar19;
    puVar5[2] = uVar20;
    puVar5[3] = uVar21;
    puVar12 = puVar12 + 8;
    lVar14 = lVar14 + -1;
  } while (lVar14 != 0);
  *(unsigned int *)(param_3 + 0x1e0) = 0;
  iVar13 = *(int *)(param_1 + 8);
  dVar17 = (double)lbl_82191208;
  dVar15 = (double)fn_82809950(dVar17);
  dVar16 = (double)(float)(dVar15 * (double)*(float *)(iVar13 + 0x29c));
  iVar13 = *(int *)(param_1 + 8);
  dVar15 = (double)fn_82809868(dVar17);
  fVar6 = lbl_8218E8E8;
  iVar4 = *(int *)(param_1 + 8);
  fVar1 = *(float *)(iVar13 + 0x29c);
  iVar13 = 0;
  piVar9 = (int *)(param_2 + 0x40);
  puVar12 = (unsigned int *)(*(int *)(param_1 + 4) + 0x1d0U & 0xfffffff0);
  uVar18 = puVar12[1];
  uVar19 = puVar12[2];
  uVar20 = puVar12[3];
  fVar2 = *(float *)(iVar4 + 0x268);
  puVar5 = (unsigned int *)((unsigned int)(auStack_60 + in_r0) & 0xfffffff0);
  *puVar5 = *puVar12;
  puVar5[1] = uVar18;
  puVar5[2] = uVar19;
  puVar5[3] = uVar20;
  uVar18 = ltcg_pool_0_0f;
  fVar8 = lbl_82195704;
  fVar7 = lbl_82192604;
  fVar3 = *(float *)(iVar4 + 0x274);
  do {
    if (*piVar9 != 0) {
      uVar11 = 0;
      piVar10 = &lbl_821B85A8;
      do {
        if (iVar13 == *piVar10) {
          *(unsigned int *)(*(int *)(param_3 + 0x1e0) * 0x20 + param_3 + 0x10) = 1;
          *(unsigned int *)(*(int *)(param_3 + 0x1e0) * 0x20 + param_3 + 0x14) = uVar11;
          break;
        }
        uVar11 = uVar11 + 1;
        piVar10 = piVar10 + 1;
      } while (uVar11 < 10);
      *(float *)(*(int *)(param_3 + 0x1e0) * 0x20 + param_3) =
           (float)((double)((float)(__int64)(iVar13 % 7) - fVar7) * dVar16);
      *(unsigned int *)(*(int *)(param_3 + 0x1e0) * 0x20 + param_3 + 4) = uVar18;
      *(float *)(*(int *)(param_3 + 0x1e0) * 0x20 + param_3 + 8) =
           -((fVar8 - (float)(__int64)(iVar13 / 7)) * (float)(dVar15 * (double)fVar1) -
            ((fVar2 * fVar6 + fStack_58) - fVar3));
      *(int *)(param_3 + 0x1e0) = *(int *)(param_3 + 0x1e0) + 1;
    }
    iVar13 = iVar13 + 1;
    piVar9 = piVar9 + 1;
    if (0x19c < iVar13) {
      return;
    }
  } while( true );
}

