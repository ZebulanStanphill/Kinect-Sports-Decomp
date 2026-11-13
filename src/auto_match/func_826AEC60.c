extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern int fn_826826A8();
extern int fn_82683270();
extern int fn_826944C8();
extern int fn_82694700();
extern int fn_82694700();
extern int fn_82695DA0();
extern int fn_82695FA0();
extern int fn_82696330();
extern int fn_826826A8();
extern int fn_826AEA50();


unsigned __int64
fn_826AEC60(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,char *param_5,
             unsigned __int64 *param_6,unsigned __int64 param_7)

{
  char cVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 *puVar4;
  int iVar6;
  unsigned __int64 uVar5;
  unsigned __int64 uVar7;
  unsigned char uVar9;
  unsigned int uVar8;
  __int64 lVar10;
  unsigned char *puVar12;
  unsigned __int64 uVar11;
  __int64 lVar13;
  __int64 lVar14;
  __int64 lVar15;
  __int64 lVar16;
  char *pcVar17;
  char *pcVar18;
  unsigned __int64 uVar19;
  unsigned int *puVar20;
  unsigned char auStack_c0 [16];
  unsigned char auStack_b0 [112];

  lVar16 = 0;
  if (param_5 != (char *)0x0) {
    puVar20 = (unsigned int *)(param_4 + 8);
    lVar16 = (__int64)*param_5;
    lVar10 = (__int64)(*(int *)(param_4 + 8) - *(int *)(param_4 + 0xc) >> 4) +
             ((unsigned __int64)*(unsigned int *)(param_4 + 0x1c) & 0x7ffffff) * 0x20;
    lVar13 = lVar10 + -0x20;
    if (lVar16 != 0) {
      pcVar18 = param_5;
      do {
        pcVar17 = pcVar18 + 1;
        if ((int)lVar16 != 0x25) {
          uVar5 = 0xffffffff820076fc;
          goto LAB_826aef98;
        }
        cVar1 = *pcVar17;
        pcVar17 = pcVar18 + 2;
        if (cVar1 == 'd') {
          uVar8 = *puVar20;
          uVar3 = (int)param_6 + 7U & 0xfffffff8;
          *puVar20 = uVar8 + 0x10;
          param_6 = (unsigned __int64 *)(uVar3 + 8);
          if (*(unsigned int *)(param_4 + 0x10) <= uVar8 + 0x10) {
            fn_826826A8(puVar20);
          }
          puVar12 = (unsigned char *)*puVar20;
          if (puVar12 != (unsigned char *)0x0) {
            uVar2 = *(unsigned int *)(uVar3 + 4);
            *puVar12 = 4;
            *(unsigned int *)(puVar12 + 8) = uVar2;
          }
        }
        else if (cVar1 == 'u') {
          uVar8 = *puVar20;
          auStack_c0[0] = 0;
          *puVar20 = uVar8 + 0x10;
          if (*(unsigned int *)(param_4 + 0x10) <= uVar8 + 0x10) {
            fn_826826A8(puVar20);
          }
          if (*puVar20 != 0) {
            fn_82695DA0(*puVar20,auStack_c0);
          }
          fn_82696330(auStack_c0);
        }
        else if (cVar1 == 'n') {
          uVar8 = *puVar20;
          *puVar20 = uVar8 + 0x10;
          if (*(unsigned int *)(param_4 + 0x10) <= uVar8 + 0x10) {
            fn_826826A8(puVar20);
          }
          puVar12 = (unsigned char *)*puVar20;
          if (puVar12 != (unsigned char *)0x0) {
            uVar9 = 1;
LAB_826aee3c:
            *puVar12 = uVar9;
          }
        }
        else if (cVar1 == 'b') {
          uVar8 = *puVar20;
          uVar3 = (int)param_6 + 7U & 0xfffffff8;
          param_6 = (unsigned __int64 *)(uVar3 + 8);
          iVar6 = *(int *)(uVar3 + 4);
          *puVar20 = uVar8 + 0x10;
          if (*(unsigned int *)(param_4 + 0x10) <= uVar8 + 0x10) {
            fn_826826A8(puVar20);
          }
          puVar12 = (unsigned char *)*puVar20;
          if (puVar12 != (unsigned char *)0x0) {
            uVar9 = 2;
            puVar12[4] = '\x01' - (iVar6 == 0);
            goto LAB_826aee3c;
          }
        }
        else {
          if (cVar1 != 'f') {
            if (cVar1 != 'h') {
              if (cVar1 == 's') {
                uVar8 = (int)param_6 + 7U & 0xfffffff8;
                iVar6 = fn_82694700((unsigned __int64)*(unsigned int *)(param_4 + 0x78) + 0x254,
                                     *(unsigned int *)(uVar8 + 4));
LAB_826aeedc:
                param_6 = (unsigned __int64 *)(uVar8 + 8);
                *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
                uVar8 = *puVar20;
                *puVar20 = uVar8 + 0x10;
                if (*(unsigned int *)(param_4 + 0x10) <= uVar8 + 0x10) {
                  fn_826826A8(puVar20);
                }
                puVar12 = (unsigned char *)*puVar20;
                if (puVar12 != (unsigned char *)0x0) {
                  *(int *)(puVar12 + 4) = iVar6;
                  *puVar12 = 5;
                  *(int *)(iVar6 + 8) = *(int *)(iVar6 + 8) + 1;
                }
                lVar16 = (unsigned __int64)*(unsigned int *)(iVar6 + 8) - 1;
                *(int *)(iVar6 + 8) = (int)lVar16;
                if (lVar16 == 0) {
                  fn_826944C8(iVar6);
                }
              }
              else {
                if (cVar1 == 'l') {
                  cVar1 = *pcVar17;
                  pcVar17 = pcVar18 + 3;
                  if (cVar1 == 's') {
                    uVar8 = (int)param_6 + 7U & 0xfffffff8;
                    iVar6 = fn_82694700((unsigned __int64)*(unsigned int *)(param_4 + 0x78) + 0x254,
                                              *(unsigned int *)(uVar8 + 4));
                    goto LAB_826aeedc;
                  }
                  uVar5 = 0xffffffff82007688;
                }
                else {
                  uVar5 = 0xffffffff820076c4;
                }
LAB_826aef98:
                fn_826826A8(param_4,uVar5,param_7,param_5);
              }
              goto LAB_826aefa8;
            }
            cVar1 = *pcVar17;
            pcVar17 = pcVar18 + 3;
            uVar5 = 0xffffffff8200764c;
            if (cVar1 != 'f') goto LAB_826aef98;
          }
          uVar8 = *puVar20;
          puVar4 = (unsigned __int64 *)((int)param_6 + 7U & 0xfffffff8);
          param_6 = puVar4 + 1;
          uVar5 = *puVar4;
          *puVar20 = uVar8 + 0x10;
          if (*(unsigned int *)(param_4 + 0x10) <= uVar8 + 0x10) {
            fn_826826A8(puVar20);
          }
          puVar12 = (unsigned char *)*puVar20;
          if (puVar12 != (unsigned char *)0x0) {
            *(unsigned __int64 *)(puVar12 + 8) = uVar5;
            *puVar12 = 3;
          }
        }
LAB_826aefa8:
        cVar1 = *pcVar17;
        pcVar18 = pcVar17;
        while ((cVar1 != '\0' && (((cVar1 == ' ' || (cVar1 == '\t')) || (cVar1 == ','))))) {
          pcVar18 = pcVar18 + 1;
          cVar1 = *pcVar18;
        }
        lVar16 = (__int64)cVar1;
      } while (lVar16 != 0);
    }
    lVar14 = 0;
    lVar16 = (((__int64)((int)(*puVar20 - *(int *)(param_4 + 0xc)) >> 4) +
              ((unsigned __int64)*(unsigned int *)(param_4 + 0x1c) & 0x7ffffff) * 0x20) - lVar13) + -0x20;
    iVar6 = (int)lVar16 >> 1;
    if (0 < iVar6) {
      uVar19 = lVar13 + lVar16;
      do {
        uVar7 = lVar10 + -0x1f + lVar14;
        lVar13 = 0;
        uVar11 = (__int64)((int)(*puVar20 - *(int *)(param_4 + 0xc)) >> 4) +
                 ((unsigned __int64)*(unsigned int *)(param_4 + 0x1c) - 1 & 0x7ffffff) * 0x20;
        if ((uVar19 & 0xffffffff) <= (uVar11 & 0xffffffff)) {
          lVar13 = (unsigned __int64)*(unsigned int *)(((unsigned int)uVar19 >> 3 & 0x1ffffffc) + *(int *)(param_4 + 0x18))
                   + (uVar19 & 0x1f) * 0x10;
        }
        lVar15 = 0;
        if ((uVar7 & 0xffffffff) <= (uVar11 & 0xffffffff)) {
          lVar15 = (unsigned __int64)
                   *(unsigned int *)(((unsigned int)((uVar7 & 0xffffffff) >> 3) & 0x1ffffffc) +
                            *(int *)(param_4 + 0x18)) + (uVar7 & 0x1f) * 0x10;
        }
        fn_82695DA0(auStack_b0,lVar15);
        fn_82695FA0(lVar15,lVar13);
        fn_82695FA0(lVar13,auStack_b0);
        fn_82696330(auStack_b0);
        lVar14 = lVar14 + 1;
        uVar19 = uVar19 - 1;
      } while ((int)lVar14 < iVar6);
    }
  }
  uVar5 = fn_826AEA50(param_1,param_2,param_3,param_4,lVar16,
                        (__int64)(*(int *)(param_4 + 8) - *(int *)(param_4 + 0xc) >> 4) +
                        ((unsigned __int64)*(unsigned int *)(param_4 + 0x1c) & 0x7ffffff) * 0x20 + -0x20,param_7);
  fn_82683270(param_4 + 8,lVar16);
  return uVar5;
}
