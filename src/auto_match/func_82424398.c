#define true 1
extern unsigned int *auStack_270;
extern unsigned int *auStack_2b0;
extern int fn_823390A0();
extern int fn_82422F08();
extern int fn_82424798();
extern int fn_82424930();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8251FBA8();
extern int fn_825200A8();
extern int fn_8257A9F0();
extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_82F65350();
extern unsigned int iStack_274;
extern unsigned int iStack_280;
extern unsigned int uStack_278;
extern unsigned int uStack_27c;
extern unsigned int uStack_288;
extern unsigned int uStack_290;
extern unsigned int uStack_298;


void fn_82424398(int param_1,int *param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar4;
  unsigned __int64 uVar3;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  unsigned __int64 uVar9;
  __int64 lVar10;
  unsigned __int64 uVar11;
  unsigned int *puVar12;
  unsigned int *puVar13;
  unsigned int *puVar14;
  unsigned int uVar15;
  unsigned int *puVar16;
  unsigned int *puVar17;
  unsigned int uVar18;
  unsigned int auStack_2b0 [4];
  unsigned int *puStack_2a0;
  unsigned int *puStack_29c;
  unsigned int uStack_298;
  unsigned int uStack_290;
  unsigned int *puStack_28c;
  unsigned int uStack_288;
  unsigned int *puStack_284;
  struct { int first; unsigned int second; } stack_pair_280;

  unsigned int uStack_278;
  int iStack_274;
  unsigned char auStack_270 [512];
  
  if (*param_2 != 0) {
    iVar4 = fn_8251F720(param_2,0);
    uVar3 = fn_8251FBA8();
    uVar3 = (uVar3 & 0xffffffff) >> 4;
    if (uVar3 != 0) {
      puVar12 = (unsigned int *)(param_1 + 0x2c);
      puVar13 = (unsigned int *)(iVar4 + 4);
      do {
        lVar10 = 0;
        stack_pair_280.second = puVar13[-1];
        uVar9 = 0;
        uStack_278 = puVar13[1];
        iStack_274 = puVar13[2] + -1;
        uVar8 = (unsigned __int64)*puVar12;
        uVar11 = (unsigned __int64)*(unsigned int *)(param_1 + 0x30);
        if (uVar8 == uVar11) {
LAB_82424448:
          uStack_290 = *puVar13;
          uStack_288 = 0;
          puStack_28c = (unsigned int *)fn_8265C9E0(0x10);
          if (puStack_28c == (unsigned int *)0x0) {
            puStack_28c = (unsigned int *)0x0;
          }
          else {
            *puStack_28c = 0;
            puStack_28c[1] = 0;
            puStack_28c[2] = 0;
          }
          lVar10 = fn_8251F720(&uStack_290,0);
          uVar8 = fn_8251FBA8();
          puVar14 = (unsigned int *)0x0;
          puStack_29c = (unsigned int *)0x0;
          uVar8 = (uVar8 & 0xffffffff) / 0x6b4;
          uStack_298 = 0;
          puStack_2a0 = (unsigned int *)0x0;
          auStack_2b0[0] = 0;
          if ((int)uVar8 != 0) {
            do {
              fn_8257A9F0(&puStack_2a0,auStack_2b0);
              puVar2 = puStack_29c;
              puVar14 = puStack_2a0;
              auStack_2b0[0] = auStack_2b0[0] + 1;
            } while (auStack_2b0[0] < uVar8);
            if (puStack_2a0 != puStack_29c) {
              uVar18 = 2;
              puVar16 = puStack_2a0;
              while( true ) {
                puVar16 = puVar16 + 1;
                if (puVar16 == puVar2) break;
                uVar15 = 0x7fff;
                uVar6 = fn_82F65350();
                uVar11 = (unsigned __int64)uVar6 & 0x7fff;
                uVar6 = uVar6 & 0x7fff;
                if (0x7fff < uVar18) {
                  do {
                    if (uVar15 == 0xffffffff) break;
                    uVar7 = fn_82F65350();
                    uVar11 = (uVar11 & 0x1ffff) << 0xf | (unsigned __int64)uVar7 & 0xffffffff00007fff;
                    uVar6 = uVar6 << 0xf | uVar7 & 0x7fff;
                    uVar15 = uVar15 << 0xf | 0x7fff;
                  } while (uVar15 < uVar18);
                }
                uVar1 = *puVar16;
                iVar5 = uVar6 - (int)(uVar11 / uVar18) * uVar18;
                uVar18 = uVar18 + 1;
                *puVar16 = puVar14[iVar5];
                puVar14[iVar5] = uVar1;
              }
            }
          }
          puStack_284 = (unsigned int *)fn_8265C9E0(0x10);
          if (puStack_284 == (unsigned int *)0x0) {
            puStack_284 = (unsigned int *)0x0;
          }
          else {
            *puStack_284 = 0;
            puStack_284[1] = 0;
            puStack_284[2] = 0;
          }
          fn_82424798(puStack_284,&puStack_2a0);
          if (uVar8 != 0) {
            puVar17 = puVar14 + -1;
            do {
              puVar17 = puVar17 + 1;
              fn_82422F08(param_1,(unsigned __int64)*puVar17 * 0x6b4 + lVar10,auStack_270);
              fn_82424930(puStack_28c,auStack_270);
              uVar8 = uVar8 - 1;
            } while (uVar8 != 0);
          }
          fn_8251FA58(lVar10);
          fn_823390A0(puVar12,&uStack_290);
          stack_pair_280.first = ((int)(*(int *)(param_1 + 0x30) - *puVar12) >> 4) + -1;
          if (puVar14 != (unsigned int *)0x0) {
            fn_8265CA20(puVar14);
          }
          puStack_2a0 = (unsigned int *)0x0;
          puStack_29c = (unsigned int *)0x0;
          uStack_298 = 0;
        }
        else {
          do {
            iVar5 = fn_825200A8(puVar13);
            if (iVar5 != 0) {
              stack_pair_280.first = (int)lVar10;
              uVar9 = 1;
            }
            uVar8 = uVar8 + 0x10;
            lVar10 = lVar10 + 1;
          } while ((uVar8 & 0xffffffff) != (uVar11 & 0xffffffff));
          if ((int)uVar9 == 0) goto LAB_82424448;
        }
        fn_823390A0(param_1 + 0x1c,&stack_pair_280.first);
        uVar3 = uVar3 - 1;
        puVar13 = puVar13 + 4;
      } while (uVar3 != 0);
    }
    fn_8251FA58(iVar4);
  }
  return;
}

