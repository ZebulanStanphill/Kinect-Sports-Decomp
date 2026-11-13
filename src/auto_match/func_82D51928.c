typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern unsigned int fStack_9c;
extern unsigned int fStack_ac;
extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82CE63B0();
extern int fn_82D512C0();
extern int fn_82D51E18();
extern unsigned int uStack_c4;
extern unsigned int uStack_c8;
extern unsigned int uStack_cc;


void fn_82D51928(int param_1,int param_2,int *param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  bool bVar4;
  bool bVar5;
  int in_r0;
  int *piVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  unsigned __int64 uVar10;
  unsigned __int64 uVar11;
  unsigned __int64 uVar12;
  unsigned int uVar13;
  unsigned __int64 uVar14;
  unsigned __int64 uVar15;
  unsigned int uVar16;
  __int64 lVar17;
  unsigned int uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  unsigned int uVar22;
  unsigned int uVar23;
  unsigned int uVar24;
  unsigned int uVar25;
  unsigned int uVar26;
  unsigned int uVar27;
  unsigned int uVar28;
  char acStack_d0 [4];
  unsigned int uStack_cc;
  unsigned int uStack_c8;
  unsigned int uStack_c4;
  unsigned int auStack_c0 [4];
  unsigned char auStack_b0 [4];
  float fStack_ac;
  unsigned char auStack_a0 [4];
  float fStack_9c;
  
  uVar1 = *(unsigned int *)(param_1 + 0x18);
  puVar2 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
  uVar22 = *puVar2;
  uVar23 = puVar2[1];
  uVar24 = puVar2[2];
  uVar25 = puVar2[3];
  puVar2 = (unsigned int *)(param_2 + 0x10U & 0xfffffff0);
  uVar26 = puVar2[1];
  uVar27 = puVar2[2];
  uVar28 = puVar2[3];
  puVar3 = (unsigned int *)((unsigned int)(auStack_a0 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar26;
  puVar3[2] = uVar27;
  puVar3[3] = uVar28;
  puVar2 = (unsigned int *)((unsigned int)(auStack_b0 + in_r0) & 0xfffffff0);
  *puVar2 = uVar22;
  puVar2[1] = uVar23;
  puVar2[2] = uVar24;
  puVar2[3] = uVar25;
  fn_82D512C0(acStack_d0,auStack_b0,uVar1,&uStack_cc,&uStack_c8,auStack_c0,&uStack_c4);
  if (acStack_d0[0] != '\0') {
    piVar6 = (int *)fn_82D51E18(*(unsigned int *)(param_1 + 0x18));
    iVar8 = param_3[1];
    if (*(char *)(param_1 + 0x20) == '\0') {
      if (uStack_cc <= uStack_c8) {
        uVar13 = uStack_cc;
        do {
          if ((unsigned __int64)auStack_c0[0] <= (unsigned __int64)uStack_c4) {
            lVar17 = ((unsigned __int64)uStack_c4 - (unsigned __int64)auStack_c0[0]) + 1;
            uVar18 = (auStack_c0[0] * 0x8000 + uVar13) * 2;
            do {
              iVar8 = fn_82CE5410();
              if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                fn_82CE63B0(*(unsigned int *)(iVar8 + 0x10),param_3,4);
              }
              uVar16 = uVar18 | 1;
              *(unsigned int *)(param_3[1] * 4 + *param_3) = uVar18;
              param_3[1] = param_3[1] + 1;
              iVar8 = fn_82CE5410();
              if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
                fn_82CE63B0(*(unsigned int *)(iVar8 + 0x10),param_3,4);
              }
              lVar17 = lVar17 + -1;
              uVar18 = uVar18 + 0x10000;
              *(unsigned int *)(param_3[1] * 4 + *param_3) = uVar16;
              param_3[1] = param_3[1] + 1;
            } while (lVar17 != 0);
          }
          uVar13 = uVar13 + 1;
        } while (uVar13 <= uStack_c8);
      }
    }
    else {
      dVar21 = (double)fStack_9c;
      dVar20 = (double)fStack_ac;
      uVar12 = (unsigned __int64)uStack_c4;
      bVar4 = true;
      uVar10 = (unsigned __int64)auStack_c0[0];
      bVar5 = true;
      uVar11 = (unsigned __int64)uStack_cc;
      uVar14 = uVar11;
      uVar15 = uVar11;
      while (uVar15 <= uStack_c8) {
        if (uVar10 <= uVar12) {
          lVar17 = (((unsigned __int64)auStack_c0[0] & 0x1ffff) * 0x8000 + uVar14 & 0x7fffffff) << 1;
          uVar15 = uVar10;
          do {
            iVar7 = fn_82CE5410();
            if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
              fn_82CE63B0(*(unsigned int *)(iVar7 + 0x10),param_3,4);
            }
            *(unsigned int *)(param_3[1] * 4 + *param_3) = (unsigned int)lVar17;
            param_3[1] = param_3[1] + 1;
            iVar7 = fn_82CE5410();
            if (param_3[1] == (param_3[2] & 0x3fffffffU)) {
              fn_82CE63B0(*(unsigned int *)(iVar7 + 0x10),param_3,4);
            }
            *(unsigned int *)(param_3[1] * 4 + *param_3) = (unsigned int)lVar17 | 1;
            param_3[1] = param_3[1] + 1;
            if ((bVar4) || (bVar5)) {
              dVar19 = (double)(**(int (***)())(*piVar6 + 0x34))(piVar6,uVar14,uVar15);
              if (dVar20 < (double)(float)((double)(float)piVar6[9] * dVar19)) {
                bVar4 = false;
              }
              if ((double)(float)((double)(float)piVar6[9] * dVar19) < dVar21) {
                bVar5 = false;
              }
            }
            uVar15 = uVar15 + 1;
            lVar17 = lVar17 + 0x10000;
          } while ((uVar15 & 0xffffffff) <= uVar12);
        }
        uVar14 = uVar14 + 1;
        uVar15 = uVar14 & 0xffffffff;
      }
      if ((bVar4) || (bVar5)) {
        uVar15 = (unsigned __int64)uStack_c8 + 1;
        if (uVar11 <= (uVar15 & 0xffffffff)) {
          do {
            dVar19 = (double)(**(int (***)())(*piVar6 + 0x34))(piVar6,uVar11,uVar12 + 1);
            if (dVar20 < (double)(float)((double)(float)piVar6[9] * dVar19)) {
              bVar4 = false;
            }
            if ((double)(float)((double)(float)piVar6[9] * dVar19) < dVar21) {
              bVar5 = false;
            }
            uVar11 = uVar11 + 1;
          } while ((uVar11 & 0xffffffff) <= (uVar15 & 0xffffffff));
        }
        if (uVar10 <= (uVar12 + 1 & 0xffffffff)) {
          do {
            dVar19 = (double)(**(int (***)())(*piVar6 + 0x34))(piVar6,uVar15,uVar10);
            if (dVar20 < (double)(float)((double)(float)piVar6[9] * dVar19)) {
              bVar4 = false;
            }
            if ((double)(float)((double)(float)piVar6[9] * dVar19) < dVar21) {
              bVar5 = false;
            }
            uVar10 = uVar10 + 1;
          } while ((uVar10 & 0xffffffff) <= (uVar12 + 1 & 0xffffffff));
        }
      }
      if ((bVar4) || (bVar5)) {
        iVar7 = fn_82CE5410();
        if ((int)(param_3[2] & 0x3fffffffU) < iVar8) {
          iVar9 = (param_3[2] & 0x3fffffffU) << 1;
          if (iVar9 <= iVar8) {
            iVar9 = iVar8;
          }
          fn_82CE6310(*(unsigned int *)(iVar7 + 0x10),param_3,iVar9,4);
        }
        param_3[1] = iVar8;
      }
    }
  }
  return;
}

