typedef unsigned char bool;
#define true 1
#define false 0
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern unsigned int *auStack_60;
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern unsigned int *auStack_78;
extern int fn_82ABDD90();
extern int fn_82AD17B0();
extern int fn_82AD1978();
extern int fn_82AD35E8();
extern int fn_82B42098();
extern int fn_82B4A218();
extern int fn_82B4BAA8();
extern int fn_82B841E8();
extern int fn_82B85298();
extern int fn_82B8AB60();
extern unsigned int uStack_80;


void fn_82B42280(int param_1,int *param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned char *puVar6;
  unsigned int *puVar7;
  unsigned __int64 *puVar8;
  unsigned int uVar9;
  int iVar10;
  int iVar11;
  bool bVar12;
  unsigned __int64 uVar13;
  unsigned int *puVar14;
  unsigned int uVar15;
  unsigned __int64 uStack_80;
  unsigned char auStack_78 [8];
  unsigned char auStack_70 [8];
  unsigned char auStack_68 [8];
  unsigned char auStack_60 [96];
  
  iVar5 = fn_82ABDD90(param_1,0x70,0,1);
  uVar3 = *(unsigned int *)((int)param_2 + iVar5 + -8) & 0x7fff;
  uVar4 = param_3;
LAB_82b422c4:
  do {
    uVar15 = uVar4;
    if (*(int *)(uVar15 + 0x50) == 0) {
      iVar10 = 0;
    }
    else {
      iVar10 = *(int *)(uVar3 * 4 + *(int *)(uVar15 + 0x50));
    }
    if (iVar10 != 0) {
      uVar13 = *(unsigned __int64 *)((*(unsigned int *)((int)param_2 + iVar5 + -8) >> 0xc & 0x1fff8) + iVar10);
      uStack_80 = ((((unsigned __int64)(uStack_80)) & (~(((unsigned __int64)0xFFFFFFFF) << 0))) | ((((unsigned __int64)((int)(uVar13 >> 0x20))) & ((unsigned __int64)0xFFFFFFFF)) << 0));
      bVar12 = (((unsigned __int64)(uStack_80) >> 0) & 0xFFFFFFFF) != 0;
      uStack_80 = uVar13;
      if (bVar12) {
        for (iVar11 = *param_2; iVar11 != 0; iVar11 = *(int *)(iVar11 + 4)) {
          if (*(unsigned int *)(*(int *)(iVar11 + 0xc) + 0x1c) == uVar15) {
            return;
          }
        }
        *(unsigned int *)(param_1 + 0x234) = uVar15;
        iVar11 = fn_82B4BAA8(param_1,&uStack_80);
        piVar2 = *(int **)(iVar11 + 0xc);
        if ((piVar2[2] & 0x3f80U) == 0x3980) {
          uVar3 = *(unsigned int *)((int)piVar2 + iVar5 + -8);
          puVar8 = (unsigned __int64 *)
                   fn_82B8AB60(auStack_60,param_1,uVar3 & 0x7fff,uVar3 >> 0xf & 0x3fff);
          uStack_80 = *puVar8;
          iVar11 = fn_82B4BAA8(param_1,&uStack_80);
          piVar2 = *(int **)(iVar11 + 0xc);
        }
        if (piVar2[7] == uVar15) {
          uVar3 = (unsigned int)piVar2[2] >> 7 & 0x7f;
          if ((uVar3 == 0x7d) || (bVar12 = false, uVar3 == 0x7c)) {
            bVar12 = true;
          }
          if (bVar12) goto LAB_82b425d4;
        }
        else {
LAB_82b425d4:
          uVar9 = fn_82AD35E8(param_1,uVar15,uVar15 + 0x18,iVar11,iVar11);
          uStack_80 = CONCAT44(uVar9,(((unsigned __int64)(uStack_80) >> 32) & 0xFFFFFFFF)) & 0xffffffff00010000 | 1;
          *(unsigned __int64 *)((*(unsigned int *)((int)param_2 + iVar5 + -8) >> 0xc & 0x1fff8) + iVar10) =
               uStack_80;
          iVar11 = fn_82B4BAA8(param_1,&uStack_80);
          piVar2 = *(int **)(iVar11 + 0xc);
        }
        if (piVar2 == param_2) {
          return;
        }
        goto LAB_82b42690;
      }
    }
    uVar1 = *(unsigned int *)(param_2[7] + 0x30);
    uVar4 = uVar15;
    if ((1 << (uVar1 & 0x1f) &
        *(unsigned int *)(((int)(((unsigned __int64)uVar1 & 0x7ffff) >> 5) + 1) * 4 + *(int *)(uVar15 + 0x28))) !=
        0) {
      puVar6 = auStack_78;
LAB_82b42444:
      fn_82B85298(puVar6,param_1,uVar15,uVar3,
                        *(unsigned int *)((int)param_2 + iVar5 + -8) >> 0xf & 0x3fff);
      goto LAB_82b422c4;
    }
    if ((((((*(unsigned int *)(uVar15 + 0x4c) & 0x100000) == 0) ||
          (uVar1 = *(unsigned int *)(param_2[7] + 0x4c), (uVar1 & 0x100000) != 0)) ||
         ((*(unsigned int *)(*(int *)(uVar15 + 0x28) + 4) & 1) != 0)) ||
        (((*(unsigned int *)(*(int *)(uVar15 + 0x34) + 0x4c) ^ uVar1) & 0x7ffff) == 0)) ||
       (((iVar10 = *(int *)(uVar3 * 0x28 + *(int *)(param_1 + 0xc) + 0x10), iVar10 != 0 &&
         ((*(unsigned int *)(iVar10 + 0x2c) & 2) != 0)) && (*(int *)(iVar10 + 0x34) != 0)))) {
      if (param_5 == 0) {
        if (((*(unsigned int *)(uVar15 + 0x30) >> 0x13 & 1) == 0) ||
           ((iVar10 = uVar3 * 0x28 + *(int *)(param_1 + 0xc),
            (*(unsigned int *)(iVar10 + 4) & 0x10000000) == 0 && ((*(unsigned int *)(iVar10 + 8) & 0x380000) != 0)))
           ) {
          if (((*(unsigned int *)(uVar15 + 0x30) >> 0x15 & 1) != 0) &&
             ((*(unsigned int *)(uVar3 * 0x28 + *(int *)(param_1 + 0xc) + 4) & 2) != 0)) {
            puVar6 = auStack_68;
            goto LAB_82b42444;
          }
          goto LAB_82b42460;
        }
        fn_82B85298(auStack_70,param_1,param_3,uVar3,
                          *(unsigned int *)((int)param_2 + iVar5 + -8) >> 0xf & 0x3fff);
        uVar4 = param_3;
      }
      else {
LAB_82b42460:
        if (uVar15 == param_4) {
          if (param_5 == 0) {
LAB_82b4262c:
            iVar10 = fn_82B841E8(param_1,param_3,param_3 + 0x10,0x74,0,1);
            iVar11 = fn_82ABDD90(param_1,0x74,0,1);
            puVar14 = (unsigned int *)(iVar11 + iVar10 + -4);
            uVar4 = *puVar14;
            *puVar14 = uVar3 | uVar4 & 0xffff8000;
            *puVar14 = *(unsigned int *)((int)param_2 + iVar5 + -8) & 0x1fff8000 |
                       uVar3 | uVar4 & 0xe0000000;
            iVar11 = fn_82AD17B0(param_1,iVar10);
LAB_82b42690:
            fn_82AD1978(param_2,iVar11);
            return;
          }
          uVar4 = param_5;
          param_5 = 0;
        }
        else {
          uVar4 = *(unsigned int *)(uVar15 + 0x34);
          if (*(unsigned int *)(uVar15 + 0x34) == 0) {
            if ((uVar15 != (-(unsigned int)((*(unsigned int *)(param_1 + 4) & 1) == 0) & *(unsigned int *)(param_1 + 4))) ||
               ((uVar4 = *(unsigned int *)(uVar3 * 0x28 + *(int *)(param_1 + 0xc)) & 7, uVar4 != 3 &&
                (uVar4 != 1)))) goto LAB_82b4262c;
            iVar10 = fn_82B4A218(uVar15,uVar3,param_1);
            *(unsigned int *)(param_1 + 0x234) = uVar15;
            puVar7 = (unsigned int *)
                     fn_82B8AB60(auStack_60,param_1,uVar3,
                                       *(unsigned int *)((int)param_2 + iVar5 + -8) >> 0xf & 0x3fff);
            uVar4 = *(unsigned int *)((int)param_2 + iVar5 + -8) >> 0xc & 0x1fff8;
            *(unsigned int *)(uVar4 + iVar10) = *puVar7;
            *(unsigned int *)(uVar4 + iVar10 + 4) = puVar7[1];
            uVar4 = uVar15;
          }
        }
      }
    }
    else {
      fn_82B42098(param_1,uVar15,uVar3,*(unsigned int *)((int)param_2 + iVar5 + -8) >> 0xf & 0x3fff,0);
    }
  } while( true );
}

