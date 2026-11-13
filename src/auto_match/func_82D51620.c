typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int fStack_9c;
extern unsigned int fStack_ac;
extern int fn_82D512C0();
extern int fn_82D51E18();
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;


int fn_82D51620(int param_1,int param_2,int param_3,int param_4)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  bool bVar4;
  bool bVar5;
  unsigned int *puVar6;
  int in_r0;
  int *piVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned __int64 uVar13;
  unsigned int *puVar14;
  __int64 lVar15;
  int iVar16;
  int iVar17;
  double dVar18;
  double dVar19;
  double dVar20;
  unsigned int uVar21;
  unsigned int uVar22;
  unsigned int uVar23;
  unsigned int uVar24;
  unsigned int uVar25;
  unsigned int uVar26;
  unsigned int uVar27;
  char acStack_d0 [4];
  unsigned int uStack_cc;
  unsigned int uStack_c8;
  unsigned int uStack_c4;
  unsigned int auStack_c0 [4];
  unsigned char auStack_b0 [4];
  float fStack_ac;
  unsigned char auStack_a0 [4];
  float fStack_9c;
  
  puVar2 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
  uVar21 = *puVar2;
  uVar22 = puVar2[1];
  uVar23 = puVar2[2];
  uVar24 = puVar2[3];
  uVar1 = *(unsigned int *)(param_1 + 0x18);
  puVar2 = (unsigned int *)(param_2 + 0x10U & 0xfffffff0);
  uVar25 = puVar2[1];
  uVar26 = puVar2[2];
  uVar27 = puVar2[3];
  puVar3 = (unsigned int *)((unsigned int)(auStack_a0 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar25;
  puVar3[2] = uVar26;
  puVar3[3] = uVar27;
  puVar2 = (unsigned int *)((unsigned int)(auStack_b0 + in_r0) & 0xfffffff0);
  *puVar2 = uVar21;
  puVar2[1] = uVar22;
  puVar2[2] = uVar23;
  puVar2[3] = uVar24;
  fn_82D512C0(acStack_d0,auStack_b0,uVar1,&uStack_cc,&uStack_c8,auStack_c0,&uStack_c4);
  if (acStack_d0[0] != '\0') {
    iVar17 = 0;
    piVar7 = (int *)fn_82D51E18(uVar1);
    if (*(char *)(param_1 + 0x20) == '\0') {
      if (uStack_c8 < uStack_cc) {
        return 0;
      }
      do {
        if ((unsigned __int64)auStack_c0[0] <= (unsigned __int64)uStack_c4) {
          lVar15 = ((unsigned __int64)uStack_c4 - (unsigned __int64)auStack_c0[0]) + 1;
          puVar14 = (unsigned int *)(iVar17 * 4 + param_3 + -4);
          uVar8 = (auStack_c0[0] * 0x8000 + uStack_cc) * 2;
          do {
            puVar6 = puVar14;
            iVar16 = iVar17;
            if (iVar17 < param_4) {
              puVar14[1] = uVar8;
              puVar6 = puVar14 + 1;
              iVar16 = iVar17 + 1;
              if (iVar17 + 1 < param_4) {
                puVar14[2] = uVar8 | 1;
                puVar6 = puVar14 + 2;
                iVar16 = iVar17 + 2;
              }
            }
            iVar17 = iVar16;
            puVar14 = puVar6;
            uVar8 = uVar8 + 0x10000;
            lVar15 = lVar15 + -1;
          } while (lVar15 != 0);
        }
        uStack_cc = uStack_cc + 1;
      } while (uStack_cc <= uStack_c8);
      return iVar17;
    }
    dVar20 = (double)fStack_9c;
    dVar19 = (double)fStack_ac;
    uVar10 = (unsigned __int64)uStack_c4;
    bVar4 = true;
    uVar11 = (unsigned __int64)auStack_c0[0];
    bVar5 = true;
    uVar9 = (unsigned __int64)uStack_cc;
    uVar12 = uVar9;
    uVar13 = uVar9;
    while (uVar13 <= uStack_c8) {
      if (uVar11 <= uVar10) {
        puVar14 = (unsigned int *)(iVar17 * 4 + param_3 + -4);
        lVar15 = (((unsigned __int64)auStack_c0[0] & 0x1ffff) * 0x8000 + uVar12 & 0x7fffffff) << 1;
        uVar13 = uVar11;
        iVar16 = iVar17;
        do {
          puVar6 = puVar14;
          iVar17 = iVar16;
          if (iVar16 < param_4) {
            iVar17 = iVar16 + 1;
            puVar14[1] = (unsigned int)lVar15;
            puVar6 = puVar14 + 1;
            if (iVar17 < param_4) {
              iVar17 = iVar16 + 2;
              puVar14[2] = (unsigned int)lVar15 | 1;
              puVar6 = puVar14 + 2;
            }
          }
          puVar14 = puVar6;
          if ((bVar4) || (bVar5)) {
            dVar18 = (double)(**(int (***)())(*piVar7 + 0x34))(piVar7,uVar12,uVar13);
            if (dVar19 < (double)(float)((double)(float)piVar7[9] * dVar18)) {
              bVar4 = false;
            }
            if ((double)(float)((double)(float)piVar7[9] * dVar18) < dVar20) {
              bVar5 = false;
            }
          }
          uVar13 = uVar13 + 1;
          lVar15 = lVar15 + 0x10000;
          iVar16 = iVar17;
        } while ((uVar13 & 0xffffffff) <= uVar10);
      }
      uVar12 = uVar12 + 1;
      uVar13 = uVar12 & 0xffffffff;
    }
    if ((bVar4) || (bVar5)) {
      uVar13 = (unsigned __int64)uStack_c8 + 1;
      if (uVar9 <= (uVar13 & 0xffffffff)) {
        do {
          dVar18 = (double)(**(int (***)())(*piVar7 + 0x34))(piVar7,uVar9,uVar10 + 1);
          if (dVar19 < (double)(float)(dVar18 * (double)(float)piVar7[9])) {
            bVar4 = false;
          }
          if ((double)(float)(dVar18 * (double)(float)piVar7[9]) < dVar20) {
            bVar5 = false;
          }
          uVar9 = uVar9 + 1;
        } while ((uVar9 & 0xffffffff) <= (uVar13 & 0xffffffff));
      }
      if (uVar11 <= (uVar10 + 1 & 0xffffffff)) {
        do {
          dVar18 = (double)(**(int (***)())(*piVar7 + 0x34))(piVar7,uVar13,uVar11);
          if (dVar19 < (double)(float)(dVar18 * (double)(float)piVar7[9])) {
            bVar4 = false;
          }
          if ((double)(float)(dVar18 * (double)(float)piVar7[9]) < dVar20) {
            bVar5 = false;
          }
          uVar11 = uVar11 + 1;
        } while ((uVar11 & 0xffffffff) <= (uVar10 + 1 & 0xffffffff));
      }
    }
    if ((!bVar4) && (!bVar5)) {
      return iVar17;
    }
  }
  return 0;
}

