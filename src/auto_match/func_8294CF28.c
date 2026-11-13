typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_a0;
extern int fn_8294AC48();
extern int fn_829632A0();
extern int fn_829632F0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_82963D50();
extern int fn_82BA02A8();
extern int memcpy();
extern int _blkmov();
extern unsigned int lbl_82037828;
extern unsigned int uStack_144;
extern unsigned int uStack_148;
extern unsigned int uStack_14c;
extern unsigned int uStack_150;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

__int64 fn_8294CF28(int param_1,int *param_2,unsigned __int64 param_3,int *param_4)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  bool bVar8;
  int iVar11;
  __int64 lVar9;
  unsigned __int64 uVar10;
  int iVar12;
  unsigned __int64 uVar13;
  __int64 lVar14;
  int *piVar15;
  unsigned __int64 uVar16;
  int aiStack_160 [4];
  struct { unsigned int first; unsigned int second; } stack_pair_150;

  unsigned int uStack_148;
  unsigned int uStack_144;
  int aiStack_140 [4];
  int aiStack_130 [4];
  int aiStack_120 [4];
  int aiStack_110 [4];
  int aiStack_100 [24];
  unsigned char auStack_a0 [48];
  
  uVar1 = **(unsigned int **)(param_1 + 0x104);
  stack_pair_150.second = 1;
  uVar7 = (unsigned __int64)uVar1;
  uVar6 = uVar7 & 0xfffff;
  uStack_144 = 3;
  aiStack_160[0] = 0;
  stack_pair_150.first = 0;
  uStack_148 = 2;
  iVar12 = 0;
  bVar8 = false;
  iVar11 = fn_8294AC48(param_1,*(unsigned int **)(param_1 + 0x104),0xffffffff82036050,auStack_a0,
                         aiStack_160,aiStack_140,&stack_pair_150.first,uVar6);
  if (iVar11 != 0) {
    bVar8 = true;
    lVar9 = fn_8294AC48(param_1,*(unsigned int *)(param_1 + 0x104),0xffffffff820360d0,auStack_a0,
                          aiStack_160,aiStack_140,&stack_pair_150.first,uVar6);
    if ((int)lVar9 != 0) {
      return lVar9;
    }
  }
  uVar10 = 0;
  do {
    uVar13 = 0;
    do {
      uVar16 = 0;
      if ((uVar1 & 0xfffff) != 0) {
        iVar11 = *(int *)(param_1 + 0x14);
        piVar15 = aiStack_140;
        do {
          iVar3 = *(int *)(*piVar15 * 4 + iVar11);
          iVar4 = *(int *)(*(int *)((int)aiStack_130 + (int)((uVar10 + uVar16 & 0xffffffff) << 2)) *
                           4 + iVar11);
          iVar5 = *(int *)(*(int *)((int)aiStack_110 + (int)((uVar13 + uVar16 & 0xffffffff) << 2)) *
                           4 + iVar11);
          if (((((*(int *)(iVar4 + 8) != -1) || (*(int *)(iVar3 + 8) != -1)) ||
               (*(int *)(iVar5 + 8) != -1)) ||
              ((iVar2 = *(int *)(param_1 + 0x10),
               (*(unsigned int *)(*(int *)(*(int *)(iVar4 + 4) * 4 + iVar2) + 4) & 0x100) == 0 ||
               ((*(unsigned int *)(*(int *)(*(int *)(iVar5 + 4) * 4 + iVar2) + 4) & 0x100) == 0)))) ||
             (((*(unsigned int *)(*(int *)(*(int *)(iVar3 + 4) * 4 + iVar2) + 4) & 0x100) == 0 ||
              ((lbl_82037828 <
                ABS((*(double *)(iVar5 + 0x20) - *(double *)(iVar4 + 0x20)) -
                    *(double *)(iVar3 + 0x20)) ||
               (*(int *)((int)aiStack_120 + (int)((uVar16 - uVar10 & 0xffffffff) << 2)) !=
                *(int *)((int)aiStack_100 + (int)((uVar16 - uVar13 & 0xffffffff) << 2)))))))) break;
          uVar16 = uVar16 + 1;
          piVar15 = piVar15 + 1;
        } while ((uVar16 & 0xffffffff) < uVar6);
      }
      if ((uVar16 & 0xffffffff) == uVar6) {
        iVar11 = fn_82963998(0x74);
        if (iVar11 == 0) {
          iVar12 = 0;
        }
        else {
          iVar12 = fn_829632A0();
        }
        if (iVar12 == 0) {
          return -0x7ff8fff2;
        }
        if (bVar8) {
          if (param_2 != (int *)0x0) goto LAB_8294d130;
          uVar10 = 0x70c0000070c00000;
        }
        else {
          uVar10 = 0x70b0000070b00000;
        }
        lVar9 = fn_82963A30(iVar12,uVar10 & 0xfff00000 | uVar6,(uVar7 & 0xfffff) << 1,uVar6,0)
        ;
        if ((lVar9 < 0) ||
           (lVar9 = fn_829632F0(iVar12,*(unsigned int *)(param_1 + 0x104)), lVar9 < 0))
        goto LAB_8294d134;
        lVar9 = (uVar7 & 0xfffff) * 4;
        memcpy(*(unsigned int *)(iVar12 + 0x10),
                     *(unsigned int *)(*(int *)(param_1 + 0x104) + 0x10),lVar9);
        memcpy(*(unsigned int *)(iVar12 + 8),aiStack_140,lVar9);
        if (bVar8) {
          lVar14 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x104) + 8) + lVar9;
        }
        else {
          lVar14 = (uVar7 & 0xfffff) * 8 + (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x104) + 8);
        }
        memcpy(lVar9 + (unsigned __int64)*(unsigned int *)(iVar12 + 8),lVar14,lVar9);
        iVar5 = aiStack_160[0];
        iVar11 = *(int *)(param_1 + 0x14);
        iVar3 = *(int *)(**(int **)(iVar12 + 8) * 4 + iVar11);
        iVar4 = *(int *)(**(int **)(iVar12 + 0x10) * 4 + iVar11);
        iVar11 = *(int *)(*(int *)((int)*(int **)(iVar12 + 8) + (int)lVar9) * 4 + iVar11);
        if (((*(int *)(iVar4 + 4) == *(int *)(iVar3 + 4)) &&
            (*(int *)(iVar4 + 0xc) == *(int *)(iVar3 + 0xc))) ||
           ((*(int *)(iVar4 + 4) == *(int *)(iVar11 + 4) &&
            (*(int *)(iVar4 + 0xc) == *(int *)(iVar11 + 0xc))))) goto LAB_8294d130;
        if (param_2 == (int *)0x0) {
          fn_82963D50(*(unsigned int *)
                             (*(int *)(param_1 + 0x100) * 4 + *(int *)(param_1 + 0x18)),iVar12);
        }
        else {
          *param_2 = iVar12;
          iVar12 = 0;
          if (aiStack_160[0] != 0) {
            _blkmov(param_3,auStack_a0,aiStack_160[0] << 2);
          }
          *param_4 = iVar5;
        }
        lVar9 = 0;
        goto LAB_8294d134;
      }
      uVar13 = uVar13 + 4;
    } while ((uVar13 & 0xffffffff) < 8);
    uVar10 = uVar10 + 4;
    if (7 < (uVar10 & 0xffffffff)) {
LAB_8294d130:
      lVar9 = 1;
LAB_8294d134:
      if (iVar12 != 0) {
        fn_82BA02A8(iVar12);
        fn_829639F0(iVar12);
      }
      return lVar9;
    }
  } while( true );
}

