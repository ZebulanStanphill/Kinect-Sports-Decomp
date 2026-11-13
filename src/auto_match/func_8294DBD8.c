typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_120;
extern unsigned int *auStack_140;
extern unsigned int *auStack_80;
extern int fn_8294AC48();
extern int fn_829632A0();
extern int fn_829632F0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_82963D50();
extern int fn_82964628();
extern int fn_82BA02A8();
extern int memcpy();
extern unsigned int iStack_100;
extern unsigned int iStack_110;
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;
extern unsigned int uStack_124;
extern unsigned int uStack_128;
extern unsigned int uStack_12c;
extern unsigned int uStack_130;


__int64 fn_8294DBD8(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  bool bVar3;
  __int64 lVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  double dVar12;
  unsigned int auStack_140 [4];
  struct { unsigned int first; unsigned int second; } stack_pair_130;

  unsigned int uStack_128;
  unsigned int uStack_124;
  unsigned char auStack_120 [16];
  int iStack_110;
  int iStack_100;
  unsigned char auStack_80 [128];
  
  uStack_128 = 2;
  iVar6 = 0;
  uStack_124 = 3;
  uVar1 = **(unsigned int **)(param_1 + 0x104);
  auStack_140[0] = 0;
  uVar11 = uVar1 & 0xfffff;
  uVar2 = uVar1 & 0xfffff;
  stack_pair_130.first = 0;
  stack_pair_130.second = 1;
  lVar4 = fn_8294AC48(param_1,*(unsigned int **)(param_1 + 0x104),0xffffffff82036370,auStack_80,
                        auStack_140,auStack_120,&stack_pair_130.first,uVar2);
  if ((int)lVar4 == 0) {
    bVar8 = false;
    bVar3 = false;
    uVar10 = 0;
    uVar9 = 0;
    if ((uVar1 & 0xfffff) != 0) {
      iVar5 = *(int *)(iStack_100 * 4 + *(int *)(param_1 + 0x14));
      do {
        iVar7 = *(int *)(*(int *)(param_1 + 0x14) + iStack_110 * 4);
        if ((*(unsigned int *)(*(int *)(*(int *)(iVar7 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x100) ==
            0) {
          return 1;
        }
        if ((*(unsigned int *)(*(int *)(*(int *)(iVar5 + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x100) ==
            0) {
          return 1;
        }
        if (*(int *)(iVar7 + 8) != -1) {
          return 1;
        }
        if (*(int *)(iVar5 + 8) != -1) {
          return 1;
        }
        if ((*(double *)(iVar7 + 0x20) == lbl_82005758) &&
           (*(double *)(iVar5 + 0x20) == lbl_82005710)) {
          bVar8 = true;
        }
        else {
          if (*(double *)(iVar5 + 0x20) != lbl_82005758) {
            return 1;
          }
          if (*(double *)(iVar7 + 0x20) != lbl_82005710) {
            return 1;
          }
          bVar3 = true;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar2);
      if (bVar8) {
        if (bVar3) {
          return 1;
        }
        uVar10 = uVar2 | 0x73500000;
      }
      if (bVar3) {
        uVar10 = uVar2 | 0x73600000;
      }
    }
    dVar12 = lbl_82005710;
    iVar5 = fn_82963998(0x74);
    if (iVar5 != 0) {
      iVar6 = fn_829632A0();
    }
    if (iVar6 == 0) {
      lVar4 = -0x7ff8fff2;
    }
    else {
      lVar4 = fn_82963A30(iVar6,uVar10,uVar1 & 0xfffff,uVar2,0);
      if ((-1 < lVar4) &&
         (lVar4 = fn_829632F0(iVar6,*(unsigned int *)(param_1 + 0x104)), -1 < (int)lVar4)) {
        iVar5 = (uVar1 & 0xfffff) << 2;
        memcpy(*(unsigned int *)(iVar6 + 0x10),*(unsigned int *)(*(int *)(param_1 + 0x104) + 0x10)
                     ,iVar5);
        memcpy(*(unsigned int *)(iVar6 + 8),auStack_120,iVar5);
        iVar7 = fn_82964628(dVar12,param_1,*(unsigned int *)(param_1 + 0x78),0,0);
        if (iVar7 == -1) {
          lVar4 = -0x7ff8fff2;
        }
        else {
          for (; uVar11 != 0; uVar11 = uVar11 - 1) {
            *(int *)(*(int *)(iVar6 + 8) + iVar5) = iVar7;
            iVar5 = iVar5 + 4;
          }
          lVar4 = fn_82963D50(*(unsigned int *)(param_1 + 0x104),iVar6);
        }
      }
      fn_82BA02A8(iVar6);
      fn_829639F0(iVar6);
    }
  }
  return lVar4;
}

