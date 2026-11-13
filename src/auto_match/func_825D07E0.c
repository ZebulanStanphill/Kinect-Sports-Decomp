typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_4ba0;
extern unsigned int *auStack_4bc0;
extern unsigned int *auStack_4c10;
extern unsigned int *auStack_4cb0;
extern unsigned int fStack_4c30;
extern int fn_825402B0();
extern int fn_825404D0();
extern int fn_825413A8();
extern int fn_82541458();
extern int fn_82541578();
extern int fn_825D1B08();
extern int fn_825D1D80();
extern int fn_825D1F60();
extern int fn_8260B550();
extern int fn_82639380();
extern int fn_82639528();
extern int fn_8263CBB0();
extern int fn_827EB678();
extern unsigned int iStack_4c8c;
extern unsigned int lbl_821922D0;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack00000054;
extern unsigned int uStack_4c7c;
extern unsigned int uStack_4c80;
extern unsigned int uStack_4c84;
extern unsigned int uStack_4c88;
extern unsigned int uStack_4c94;
extern unsigned int uStack_4c98;
extern unsigned int uStack_4c9c;
extern unsigned int uStack_4ca0;
extern unsigned int uStack_4ca8;
extern unsigned int uStack_4cac;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorRotateLeftImmediateMaskInsert128();
extern void *memcpy(void *, const void *, unsigned int);


void fn_825D07E0(int param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,__int64 param_5)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 *puVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned __int64 in_r0;
  unsigned __int64 uVar7;
  int iVar8;
  __int64 lVar9;
  unsigned char *puVar10;
  int iVar11;
  unsigned __int64 uVar12;
  unsigned int uVar13;
  __int64 lVar14;
  __int64 lVar15;
  unsigned __int64 uVar16;
  __int64 lVar17;
  unsigned __int64 uVar18;
  double dVar19;
  double dVar20;
  double dVar21;
  unsigned int uVar22;
  unsigned int uVar23;
  unsigned char in_vr0 [16];
  unsigned int uVar24;
  unsigned char in_vr12 [16];
  unsigned char in_vr13 [16];
  unsigned char auVar25 [16];
  unsigned int uStack00000054;
  unsigned char auStack_4cb0 [1];
  unsigned int uStack_4cac;
  unsigned int uStack_4ca8;
  unsigned int uStack_4ca0;
  unsigned int uStack_4c9c;
  unsigned int uStack_4c98;
  unsigned int uStack_4c94;
  unsigned char *puStack_4c90;
  int iStack_4c8c;
  unsigned int uStack_4c88;
  unsigned int uStack_4c84;
  unsigned int uStack_4c80;
  unsigned int uStack_4c7c;
  float fStack_4c30;
  unsigned char auStack_4c10 [80];
  unsigned char auStack_4bc0 [32];
  unsigned char auStack_4ba0 [19360];

  uStack00000054 = (unsigned int)param_4;
  if (*(short *)(param_1 + 0x14) != 0) {
    uVar13 = *(unsigned int *)(param_1 + 4);
    uVar16 = (unsigned __int64)uVar13;
    uVar2 = *(unsigned int *)(param_1 + 8);
    if (uVar16 != uVar2) {
      puVar3 = (unsigned __int64 *)*param_2;
      *(unsigned int *)(puVar3 + 0x529) = *(unsigned int *)(puVar3 + 0x529) & 0xfffffff8;
      puVar3[2] = puVar3[2] | 0x40;
      uVar7 = fn_82639380(puVar3,0x10,1);
      *(unsigned int *)((int)puVar3 + 0x60c) = *(unsigned int *)((int)puVar3 + 0x60c) & 0xfe7fffff | 0x800000;
      puVar3[3] = puVar3[3] | 0x8000;
      *(unsigned int *)(puVar3 + 0xc0) = *(unsigned int *)(puVar3 + 0xc0) & 0xffffe3ff | 0x800;
      puVar3[3] = puVar3[3] | 0x8000;
      *(unsigned int *)(puVar3 + 0xc0) = *(unsigned int *)(puVar3 + 0xc0) & 0xffff1fff | 0x4000;
      puVar3[3] = puVar3[3] | 0x8000;
      uVar7 = fn_82639380(uVar7,0x11);
      fn_82639528(uVar7,0x11);
      *(unsigned int *)((int)puVar3 + 0x624) = *(unsigned int *)((int)puVar3 + 0x624) & 0xfe7fffff | 0x800000;
      puVar3[3] = puVar3[3] | 0x4000;
      *(unsigned int *)(puVar3 + 0xc3) = *(unsigned int *)(puVar3 + 0xc3) & 0xffffe3ff | 0x800;
      puVar3[3] = puVar3[3] | 0x4000;
      *(unsigned int *)(puVar3 + 0xc3) = *(unsigned int *)(puVar3 + 0xc3) & 0xffff1fff | 0x4000;
      puVar3[3] = puVar3[3] | 0x4000;
      fn_825D1F60();
      iVar11 = *(int *)(uVar13 + 0x90);
      fn_8263CBB0(puVar3,0x10,iVar11,0x8000);
      fn_8263CBB0(puVar3,0x11,*(unsigned int *)(uVar13 + 0x98),0x4000);
      fn_82639528(puVar3,0x10,1);
      dVar19 = (double)lbl_821CA460;
      fn_82541458(dVar19,param_2);
      param_2[0x2af9] = 0;
      if (uVar16 < uVar2) {
        uStack_4cac = ((uVar2 - uVar13) - 1 >> 8) + 1;
        lVar17 = uVar16 + 0xe8;
        dVar20 = (double)lbl_821922D0;
        dVar21 = (double)ltcg_pool_0_0f;
        uStack_4ca8 = 1;
        do {
          puVar4 = (unsigned int *)lVar17;
          uVar13 = puVar4[3] | uStack_4ca8;
          uStack_4ca8 = uVar13;
          iVar8 = fn_827EB678(param_4,lVar17 + -0x98,lVar17 + -0x88,auStack_4cb0);
          if (iVar8 != 0) {
            lVar14 = lVar17 + -0xe8;
            fn_825D1D80(lVar14,param_4);
            fn_825D1B08(lVar14,param_5);
            if (*(int *)((int)(param_5 * 0x24) + (int)lVar14 + 0x20) == 0) {
              if (uVar13 != 0) {
                if (iVar11 != puVar4[-0x16]) {
                  fn_8263CBB0(puVar3,0x10,puVar4[-0x16],0x8000);
                  fn_8263CBB0(puVar3,0x11,puVar4[-0x14],0x4000);
                  iVar11 = puVar4[-0x16];
                }
                if (puVar4[-0x17] == 0) {
                  fn_82639528(puVar3,0x10,0);
                }
                *(unsigned int *)(puVar3 + 0x1de) = puVar4[-2];
                *(unsigned int *)((int)puVar3 + 0xef4) = puVar4[-1];
                *(unsigned int *)(puVar3 + 0x1df) = *puVar4;
                *(unsigned int *)((int)puVar3 + 0xefc) = puVar4[1];
                *puVar3 = *puVar3 | 0x400000000;
                loadVectorLeftIndexed128(in_r0,0xffffffff821cc160);
                loadVectorLeftIndexed128(lVar17,8);{ V16 _vt0 = vectorRotateLeftImmediateMaskInsert128(in_vr13,in_vr0,4,3); memcpy(auVar25, &_vt0, 16); }{ V16 _vt1 = vectorRotateLeftImmediateMaskInsert128(in_vr12,in_vr0,4,3); memcpy(in_vr12, &_vt1, 16); }{ V16 _vt2 = vectorRotateLeftImmediateMaskInsert128(auVar25,in_vr12,3,2); memcpy(in_vr13, &_vt2, 16); }
                memcpy((void *)((const void *)((int)&uStack_4ca0 + (int)in_r0 & 0xfffffff0)), in_vr13, 16);
                *(unsigned int *)(puVar3 + 0x1dc) = uStack_4ca0;
                *(unsigned int *)((int)puVar3 + 0xee4) = uStack_4c9c;
                *(unsigned int *)(puVar3 + 0x1dd) = uStack_4c98;
                *(unsigned int *)((int)puVar3 + 0xeec) = uStack_4c94;
                *puVar3 = *puVar3 | 0x400000000;
                iVar8 = puVar4[-0x10];
                iVar1 = puVar4[-0x12];
                param_2[0x2af0] = puVar4[-0x11];
                param_2[0x2af1] = iVar1;
                param_2[0x2af2] = iVar8;
                fn_825413A8(param_2);
              }
              iVar8 = 0;
              if (0 < (__int64)((unsigned __int64)(unsigned int)puVar4[-6] - 1)) {
                lVar14 = param_5 * 0x24 + lVar14;
                do {
                  if (*(unsigned int *)lVar14 != 0) {
                    iVar1 = param_2[0x2aee];
                    uVar7 = (**(int (***)())(*(int *)puVar4[-0x18] + 0x3c))();
                    fn_8260B550(dVar20,dVar19,dVar21,uVar7,iVar1,0xffffffff8329ead0,
                                      0xffffffff8329ead0);
                    lVar15 = 0;
                    uVar13 = *(unsigned int *)lVar14;
                    uVar16 = (unsigned __int64)uVar13;
                    if (0 < (int)uVar13) {
                      do {
                        uVar12 = uVar16;
                        if (299 < (int)uVar16) {
                          uVar12 = 300;
                        }
                        if (0 < (int)uVar12) {
                          puVar10 = auStack_4ba0;
                          uVar18 = uVar12;
                          do {
                            for (lVar9 = (lVar15 * 0x1c + param_5 + 0x18U & 0x3fffffff) << 2;
                                *(int *)((int)lVar9 + puVar4[5]) != iVar8; lVar9 = lVar9 + 0x70) {
                              lVar15 = lVar15 + 1;
                            }
                            iVar1 = (int)lVar15 * 0x70 + puVar4[5];
                            puVar5 = (unsigned int *)((int)in_r0 + iVar1 & 0xfffffff0);
                            uVar22 = puVar5[1];
                            uVar23 = puVar5[2];
                            uVar24 = puVar5[3];
                            lVar15 = lVar15 + 1;
                            *(unsigned int *)(puVar10 + -0x20) = *puVar5;
                            *(unsigned int *)(puVar10 + -0x1c) = uVar22;
                            *(unsigned int *)(puVar10 + -0x18) = uVar23;
                            *(unsigned int *)(puVar10 + -0x14) = uVar24;
                            puVar5 = (unsigned int *)(iVar1 + 0x10U & 0xfffffff0);
                            uVar22 = puVar5[1];
                            uVar23 = puVar5[2];
                            uVar24 = puVar5[3];
                            *(unsigned int *)(puVar10 + -0x10) = *puVar5;
                            *(unsigned int *)(puVar10 + -0xc) = uVar22;
                            *(unsigned int *)(puVar10 + -8) = uVar23;
                            *(unsigned int *)(puVar10 + -4) = uVar24;
                            puVar5 = (unsigned int *)(iVar1 + 0x20U & 0xfffffff0);
                            uVar22 = puVar5[1];
                            uVar23 = puVar5[2];
                            uVar24 = puVar5[3];
                            puVar6 = (unsigned int *)((unsigned int)(puVar10 + (int)in_r0) & 0xfffffff0);
                            *puVar6 = *puVar5;
                            puVar6[1] = uVar22;
                            puVar6[2] = uVar23;
                            puVar6[3] = uVar24;
                            memcpy((void *)(in_vr0), (const void *)(iVar1 + 0x30U & 0xfffffff0), 16);
                            memcpy((void *)((const void *)(puVar10 + 0x10)), in_vr0, 16);
                            puVar10 = puVar10 + 0x40;
                            uVar18 = uVar18 - 1;
                          } while (uVar18 != 0);
                        }
                        fn_825402B0(auStack_4c10,param_2,4,0,param_5,1,0);
                        puStack_4c90 = auStack_4bc0;
                        fStack_4c30 = (float)dVar21;
                        uStack_4c88 = 0;
                        uStack_4c84 = 0xffffffff;
                        uStack_4c80 = 0;
                        uStack_4c7c = 0;
                        iStack_4c8c = (int)uVar12;
                        uVar7 = (**(int (***)())(*(int *)puVar4[-0x18] + 0x3c))();
                        fn_825404D0(param_2,uVar7,auStack_4c10,&puStack_4c90);
                        uVar16 = uVar16 - uVar12;
                      } while (0 < (__int64)uVar16);
                      param_4 = (unsigned __int64)uStack00000054;
                    }
                  }
                  iVar8 = iVar8 + 1;
                  lVar14 = lVar14 + 4;
                } while (iVar8 < puVar4[-6] + -1);
              }
            }
          }
          uVar16 = (unsigned __int64)uStack_4cac;
          lVar17 = lVar17 + 0x100;
          uStack_4cac = (unsigned int)(uVar16 - 1);
        } while (uVar16 - 1 != 0);
      }
      fn_82541578(param_2,4);
      param_2[0x2af9] = 1;
      *(unsigned int *)(puVar3 + 0x529) = *(unsigned int *)(puVar3 + 0x529) & 0xfffffff8 | 2;
      puVar3[2] = puVar3[2] | 0x40;
      fn_8263CBB0(puVar3,0x10,0,0x8000);
      fn_8263CBB0(puVar3,0x11,0,0x4000);
    }
  }
  return;
}
