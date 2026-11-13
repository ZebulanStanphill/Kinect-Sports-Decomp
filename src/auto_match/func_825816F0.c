typedef unsigned char bool;
extern unsigned int *auStack_d0;
extern int fn_825200F0();
extern int fn_82522D98();
extern int fn_82582388();
extern int fn_82582818();
extern int fn_825D6278();
extern int fn_825D6BD8();
extern int fn_8265C9E0();
extern int fn_827D6968();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern float lbl_82195644;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A24;
extern unsigned int lbl_8326C070;
extern unsigned int lbl_8326C260;
extern unsigned int uRam8326c264;
extern unsigned int uRam8326c268;
extern unsigned int uRam8326c26c;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_825816F0(unsigned __int64 param_1,__int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6)

{
  float fVar1;
  char *pcVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  unsigned int *puVar6;
  float fVar7;
  float fVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned char bVar12;
  unsigned __int64 in_r0;
  int *piVar15;
  char cVar20;
  int iVar16;
  int *piVar17;
  int *piVar18;
  unsigned __int64 uVar13;
  unsigned __int64 uVar14;
  unsigned int *puVar19;
  unsigned int uVar21;
  int iVar22;
  unsigned int uVar23;
  bool bVar24;
  double extraout_f1;
  double dVar25;
  unsigned int uVar26;
  unsigned int uVar27;
  unsigned int uVar28;
  unsigned char bStack_d9;
  unsigned char auStack_d0 [208];
  
  piVar15 = (int *)fn_82F6A540();
  pcVar2 = *(char **)(piVar15[0x3c] + 0xd48);
  dVar25 = extraout_f1;
  if (((((unsigned int)piVar15[0x3b] < 0x500001) ||
       ((**(int (***)())(*piVar15 + 0x24))(), (unsigned int)piVar15[0x3b] < 0x500001)) &&
      ((iVar5 = (int)param_2, *pcVar2 == '\0' || (*(int *)(iVar5 + 0x17c) == 0)))) &&
     (*(int *)(iVar5 + 0x34) != 0)) {
    fn_825200F0(auStack_d0,param_2 + 0x34);
    cVar20 = fn_827D6968(lbl_83265A24,auStack_d0,0xffffffffffffffff);
    iVar22 = (int)in_r0;
    if (cVar20 != '\0') {
      piVar17 = (int *)piVar15[0x38];
      bVar24 = *(int *)(iVar5 + 0x17c) == 0;
      if (bVar24) {
        if ((*(int *)(iVar5 + 0x1b4) == 0) && (*(int *)(iVar5 + 0x1c) == 0)) {
          for (; iVar22 = (int)in_r0, piVar17 != (int *)0x0; piVar17 = (int *)piVar17[4]) {
            iVar16 = *piVar17;
            if (*(int *)(iVar16 + 0x58) != 0) {
              cVar20 = fn_82582388(param_2,iVar16);
              iVar22 = (int)in_r0;
              if ((((cVar20 != '\0') &&
                   ((unsigned int)LZCOUNT(*(int *)(iVar5 + 0x20) + -1) >> 5 == (unsigned int)*(unsigned char *)(piVar17 + 3))
                   ) && ((unsigned int)LZCOUNT(*(int *)(iVar5 + 0x24) + -1) >> 5 ==
                         (unsigned int)*(unsigned char *)((int)piVar17 + 0xd))) &&
                 ((unsigned int)LZCOUNT(*(int *)(iVar5 + 0x28) + -1) >> 5 ==
                  (unsigned int)*(unsigned char *)((int)piVar17 + 0xe))) {
                if (iVar16 != 0) {
                  piVar17[1] = piVar17[1] + 1;
                  goto LAB_82581d98;
                }
                break;
              }
            }
          }
        }
        uVar21 = *(unsigned int *)(iVar5 + 0x10);
        uVar23 = *(unsigned int *)(iVar5 + 0x14);
      }
      else {
        uVar21 = *(unsigned int *)(iVar5 + 0x10);
        if (0x32 < uVar21) {
          uVar21 = 0x32;
        }
        uVar23 = *(unsigned int *)(iVar5 + 0x14);
        if (0x32 < uVar23) {
          uVar23 = 0x32;
        }
      }
      if ((uVar21 == 0) ||
         (iVar16 = fn_825D6278((double)*(float *)(iVar5 + 0x74),
                                     (double)*(float *)(iVar5 + 0xdc),
                                     (double)*(float *)(iVar5 + 0xa4),
                                     (double)*(float *)(iVar5 + 0xa0),
                                     (double)*(float *)(iVar5 + 0xac),
                                     (double)*(float *)(iVar5 + 0xb4),
                                     (double)*(float *)(iVar5 + 0x130),
                                     (double)*(float *)(iVar5 + 0x6c),
                                     (double)*(float *)(iVar5 + 0x70),
                                     (double)*(float *)(iVar5 + 0xe4),
                                     (double)*(float *)(iVar5 + 0xe8),
                                     (double)*(float *)(iVar5 + 0xec),
                                     (double)*(float *)(iVar5 + 0xf0),piVar15,
                                     *(unsigned int *)(iVar5 + 8),*(unsigned int *)(iVar5 + 0xc),
                                     *(unsigned int *)(iVar5 + 0x18),*(unsigned int *)(iVar5 + 0x2c),
                                     bVar24,uVar21,uVar23), iVar16 == 0)) {
        (**(int (***)())(*piVar15 + 0x24))(dVar25,piVar15);
        if ((uVar21 == 0) ||
           (iVar16 = fn_825D6278((double)*(float *)(iVar5 + 0x74),
                                       (double)*(float *)(iVar5 + 0xdc),
                                       (double)*(float *)(iVar5 + 0xa4),
                                       (double)*(float *)(iVar5 + 0xa0),
                                       (double)*(float *)(iVar5 + 0xac),
                                       (double)*(float *)(iVar5 + 0xb4),
                                       (double)*(float *)(iVar5 + 0x130),
                                       (double)*(float *)(iVar5 + 0x6c),
                                       (double)*(float *)(iVar5 + 0x70),
                                       (double)*(float *)(iVar5 + 0xe4),
                                       (double)*(float *)(iVar5 + 0xe8),
                                       (double)*(float *)(iVar5 + 0xec),
                                       (double)*(float *)(iVar5 + 0xf0),piVar15,
                                       *(unsigned int *)(iVar5 + 8),*(unsigned int *)(iVar5 + 0xc),
                                       *(unsigned int *)(iVar5 + 0x18),*(unsigned int *)(iVar5 + 0x2c),
                                       bVar24,uVar21,uVar23), iVar16 == 0)) goto LAB_82581e1c;
      }
      fn_825D6BD8(iVar16,param_2 + 0x34,param_2 + 0x38);
      fVar8 = ltcg_pool_0_0f;
      fVar7 = lbl_821CA460;
      *(unsigned int *)(iVar16 + 0x94) = *(unsigned int *)(iVar5 + 0x58);
      fVar1 = *(float *)(iVar5 + 0x5c);
      if (fVar7 < fVar1) {
        *(float *)(iVar16 + 0x98) = fVar7;
      }
      else if (fVar1 < fVar8) {
        *(float *)(iVar16 + 0x98) = fVar8;
      }
      else {
        *(float *)(iVar16 + 0x98) = fVar1;
      }
      uVar3 = *(unsigned int *)(iVar5 + 0x60);
      *(unsigned int *)(iVar16 + 0xa0) = *(unsigned int *)(iVar5 + 100);
      *(unsigned int *)(iVar16 + 0x9c) = uVar3;
      *(unsigned int *)(iVar16 + 0xa8) = *(unsigned int *)(iVar5 + 0x68);
      bStack_d9 = (unsigned char)(__int64)(*(float *)(iVar5 + 0x3c) * lbl_82195644);
      uVar21 = (unsigned int)bStack_d9;
      bStack_d9 = (unsigned char)(__int64)(*(float *)(iVar5 + 0x44) * lbl_82195644);
      bVar12 = bStack_d9;
      bStack_d9 = (unsigned char)(__int64)(*(float *)(iVar5 + 0x40) * lbl_82195644);
      *(unsigned int *)(iVar16 + 0x90) = (uVar21 << 8 | 0xff0000 | (unsigned int)bStack_d9) << 8 | (unsigned int)bVar12;
      *(unsigned int *)(iVar16 + 0x108) = *(unsigned int *)(iVar5 + 0x134);
      *(bool *)(iVar16 + 0xfc) = *(int *)(iVar5 + 0x120) == 1;
      *(bool *)(iVar16 + 0xfd) = *(int *)(iVar5 + 0x124) == 1;
      *(unsigned int *)(iVar16 + 0x100) = *(unsigned int *)(iVar5 + 0x128);
      *(bool *)(iVar16 + 0xfe) = *(int *)(iVar5 + 0x19c) == 1;
      uVar11 = uRam8326c26c;
      uVar10 = uRam8326c268;
      uVar9 = uRam8326c264;
      uVar3 = lbl_8326C260;
      if (*(int *)(iVar5 + 400) == 0) {
        puVar19 = (unsigned int *)((unsigned int)(&lbl_8326C070 + iVar22) & 0xfffffff0);
        uVar26 = puVar19[1];
        uVar27 = puVar19[2];
        uVar28 = puVar19[3];
        puVar6 = (unsigned int *)(iVar22 + iVar16 & 0xfffffff0);
        *puVar6 = *puVar19;
        puVar6[1] = uVar26;
        puVar6[2] = uVar27;
        puVar6[3] = uVar28;
        puVar19 = (unsigned int *)(iVar16 + 0x10U & 0xfffffff0);
        *puVar19 = uVar3;
        puVar19[1] = uVar9;
        puVar19[2] = uVar10;
        puVar19[3] = uVar11;
        *(float *)(iVar16 + 0xc) = fVar7;
        *(float *)(iVar16 + 0x1c) = fVar8;
      }
      if (*(int *)(iVar5 + 0x1b4) != 0) {
        *(unsigned int *)(iVar16 + 0x184) = 1;
      }
      iVar22 = piVar15[0x38];
      if (iVar22 == 0) {
        piVar17 = (int *)fn_82522D98(0x14);
        piVar15[0x38] = (int)piVar17;
        *piVar17 = iVar16;
        *(unsigned int *)(piVar15[0x38] + 4) = 1;
        if (*(char *)(iVar16 + 0x1c0) == '\0') {
          uVar21 = *(unsigned int *)(iVar16 + 0x20);
          if (uVar21 != 0) {
            if ((uVar21 == 1) || (uVar21 < 3)) {
              iVar22 = *(int *)(iVar16 + 0x28) << 5;
              goto LAB_82581c48;
            }
            if (uVar21 != 3) goto LAB_82581c1c;
          }
          iVar22 = *(int *)(iVar16 + 0x28) * 0x28;
        }
        else {
LAB_82581c1c:
          iVar22 = 0;
        }
LAB_82581c48:
        *(int *)(piVar15[0x38] + 8) = iVar22;
        *(bool *)(piVar15[0x38] + 0xc) = *(int *)(iVar5 + 0x20) == 1;
        *(bool *)(piVar15[0x38] + 0xd) = *(int *)(iVar5 + 0x24) == 1;
        *(bool *)(piVar15[0x38] + 0xe) = *(int *)(iVar5 + 0x28) == 1;
        *(unsigned int *)(piVar15[0x38] + 0x10) = 0;
      }
      else {
        iVar4 = *(int *)(iVar22 + 0x10);
        while (piVar17 = (int *)(iVar22 + 0x10), iVar4 != 0) {
          iVar22 = *piVar17;
          iVar4 = *(int *)(iVar22 + 0x10);
        }
        piVar18 = (int *)fn_82522D98(0x14);
        *piVar17 = (int)piVar18;
        *piVar18 = iVar16;
        *(unsigned int *)(*piVar17 + 4) = 1;
        if (*(char *)(iVar16 + 0x1c0) == '\0') {
          uVar21 = *(unsigned int *)(iVar16 + 0x20);
          if (uVar21 != 0) {
            if ((uVar21 == 1) || (uVar21 < 3)) {
              iVar22 = *(int *)(iVar16 + 0x28) << 5;
              goto LAB_82581d28;
            }
            if (uVar21 != 3) goto LAB_82581cfc;
          }
          iVar22 = *(int *)(iVar16 + 0x28) * 0x28;
        }
        else {
LAB_82581cfc:
          iVar22 = 0;
        }
LAB_82581d28:
        *(int *)(*piVar17 + 8) = iVar22;
        *(bool *)(*piVar17 + 0xc) = *(int *)(iVar5 + 0x20) == 1;
        *(bool *)(*piVar17 + 0xd) = *(int *)(iVar5 + 0x24) == 1;
        *(bool *)(*piVar17 + 0xe) = *(int *)(iVar5 + 0x28) == 1;
        *(unsigned int *)(*piVar17 + 0x10) = 0;
        piVar17 = (int *)*piVar17;
      }
      piVar15[0x3b] = piVar17[2] + piVar15[0x3b];
LAB_82581d98:
      uVar13 = fn_8265C9E0(0x110);
      if ((uVar13 & 0xffffffff) == 0) {
        uVar14 = 0;
      }
      else {
        uVar14 = fn_82582818(dVar25,uVar13,param_3,iVar16,param_2,param_6);
      }
      puVar19 = (unsigned int *)fn_82522D98(0x18);
      puVar19[2] = (float)dVar25;
      puVar19[1] = piVar17;
      *puVar19 = (int)uVar14;
      puVar19[3] = *(unsigned int *)(iVar5 + 0x144);
      puVar19[4] = *(unsigned int *)(iVar5 + 0x15c);
      puVar19[5] = piVar15[0x37];
      piVar15[0x37] = (int)puVar19;
      goto LAB_82581e20;
    }
  }
LAB_82581e1c:
  uVar14 = 0;
LAB_82581e20:
  fn_82F6A58C(uVar14);
  return;
}

