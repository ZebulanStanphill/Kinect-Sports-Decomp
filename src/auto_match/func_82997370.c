typedef unsigned char bool;
#define true 1
extern int fn_829632A0();
extern int fn_829632F0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_82964588();
extern int fn_82964628();
extern int fn_82BA02A8();
extern int fn_82F68CC0();
extern unsigned int lbl_8200E890;


__int64 fn_82997370(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  bool bVar3;
  int iVar6;
  __int64 lVar4;
  unsigned __int64 uVar5;
  int iVar7;
  int iVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  
  if ((**(unsigned int **)(param_1 + 0x104) & 0xfff00000) == 0x10100000) {
    iVar6 = *(int *)(param_1 + 0x14);
    uVar1 = **(unsigned int **)(param_1 + 0x104);
    uVar10 = uVar1 & 0xfffff;
    uVar2 = uVar1 & 0xfffff;
    bVar3 = (*(unsigned int *)(*(int *)(*(int *)(*(int *)(*(int *)(*(unsigned int **)(param_1 + 0x104))[2] * 4 +
                                                 iVar6) + 4) * 4 + *(int *)(param_1 + 0x10)) + 4) &
            0x200) != 0;
    if (((*(unsigned int *)(param_1 + 0x6c) & 0x2000) != 0) && ((uVar1 & 0xfffff) != 0)) {
      iVar7 = 0;
      uVar9 = uVar2;
      do {
        iVar8 = *(int *)(*(int *)(iVar7 + (*(unsigned int **)(param_1 + 0x104))[2]) * 4 + iVar6);
        if ((*(unsigned int *)(iVar8 + 0x3c) & 0x200) != 0) {
          bVar3 = true;
        }
        if (*(int *)(iVar8 + 0x38) != -1) {
          iVar8 = *(int *)(*(int *)(iVar8 + 0x38) * 4 + iVar6);
        }
        if ((*(unsigned int *)(iVar8 + 0x3c) & 0x200) != 0) {
          bVar3 = true;
        }
        iVar7 = iVar7 + 4;
        uVar9 = uVar9 - 1;
      } while (uVar9 != 0);
    }
    if (bVar3) {
      iVar6 = fn_82963998(0x74);
      if (iVar6 == 0) {
        iVar6 = 0;
      }
      else {
        iVar6 = fn_829632A0();
      }
      if (iVar6 == 0) {
        return -0x7ff8fff2;
      }
      lVar4 = fn_82963A30(iVar6,uVar2 | 0x20500000,uVar1 & 0xfffff,uVar2,0);
      if ((-1 < lVar4) && (lVar4 = fn_829632F0(iVar6,*(unsigned int *)(param_1 + 0x104)), -1 < lVar4)
         ) {
        uVar5 = fn_82964588(param_1,0xffffffff8201261c,0x311,1,4);
        if (((int)uVar5 == -1) ||
           (iVar7 = fn_82964628(lbl_8200E890,param_1,uVar5,0,0), iVar7 == -1)) {
          lVar4 = -0x7ff8fff2;
        }
        else {
          iVar8 = (uVar1 & 0xfffff) << 2;
          fn_82F68CC0(*(unsigned int *)(iVar6 + 8),*(unsigned int *)(*(int *)(param_1 + 0x104) + 8),
                       iVar8);
          fn_82F68CC0(*(unsigned int *)(iVar6 + 0x10),
                       *(unsigned int *)(*(int *)(param_1 + 0x104) + 0x10),iVar8);
          for (; uVar10 != 0; uVar10 = uVar10 - 1) {
            *(int *)(iVar8 + *(int *)(iVar6 + 8)) = iVar7;
            iVar8 = iVar8 + 4;
          }
          iVar7 = *(int *)(*(int *)(param_1 + 0x100) * 4 + *(int *)(param_1 + 0x18));
          if (iVar7 != 0) {
            fn_82BA02A8(iVar7);
            fn_829639F0(iVar7);
          }
          lVar4 = 0;
          *(int *)(*(int *)(param_1 + 0x100) * 4 + *(int *)(param_1 + 0x18)) = iVar6;
          iVar6 = 0;
        }
      }
      if (iVar6 == 0) {
        return lVar4;
      }
      fn_82BA02A8(iVar6);
      fn_829639F0(iVar6);
      return lVar4;
    }
  }
  return 0;
}

