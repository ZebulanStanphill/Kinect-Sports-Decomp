extern int fn_829632A0();
extern int fn_829632F0();
extern int fn_82963998();
extern int fn_829639F0();
extern int fn_82963A30();
extern int fn_82963D50();
extern int fn_82963FA8();
extern int fn_82964628();
extern int fn_82975B00();
extern int fn_82BA02A8();
extern unsigned int lbl_82005710;


__int64 fn_8294B970(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  __int64 lVar3;
  int iVar4;
  int iVar5;
  
  if (((**(unsigned int **)(param_1 + 0x104) & 0xfff00000) == 0x11400000) &&
     ((**(unsigned int **)(param_1 + 0x104) & 0xfffff) == 1)) {
    if ((*(unsigned int *)(param_1 + 0x70) & 0x10000000) == 0) {
      fn_82975B00(param_1,*(unsigned int *)(*(int *)(param_1 + 0x104) + 0x3c),0x11c8,
                        0xffffffff820377f8);
      lVar3 = -0x7fffbffb;
    }
    else {
      iVar4 = fn_82963998(0x74);
      if (iVar4 == 0) {
        iVar4 = 0;
      }
      else {
        iVar4 = fn_829632A0();
      }
      if (iVar4 == 0) {
        lVar3 = -0x7ff8fff2;
      }
      else {
        lVar3 = fn_82963A30(iVar4,0x74500001,2,1,0);
        if (((lVar3 < 0) ||
            (lVar3 = fn_829632F0(iVar4,*(unsigned int *)(param_1 + 0x104)), lVar3 < 0)) ||
           (iVar5 = fn_82964628(lbl_82005710,param_1,0,0,0), iVar5 == -1)) {
          fn_82BA02A8(iVar4);
          fn_829639F0(iVar4);
        }
        else {
          iVar2 = *(int *)(iVar5 * 4 + *(int *)(param_1 + 0x14));
          fn_82963FA8(iVar2,*(unsigned int *)
                              (**(int **)(*(int *)(param_1 + 0x104) + 8) * 4 +
                              *(int *)(param_1 + 0x14)));
          **(unsigned int **)(iVar4 + 0x10) = **(unsigned int **)(*(int *)(param_1 + 0x104) + 0x10);
          **(unsigned int **)(iVar4 + 8) = **(unsigned int **)(*(int *)(param_1 + 0x104) + 8);
          *(int *)(*(int *)(iVar4 + 8) + 4) = iVar5;
          if (*(int *)(iVar2 + 0x38) == -1) {
            uVar1 = **(unsigned int **)(*(int *)(param_1 + 0x104) + 8);
            *(unsigned int *)(iVar2 + 0x3c) = *(unsigned int *)(iVar2 + 0x3c) | 0x80000;
            *(unsigned int *)(iVar2 + 0x38) = uVar1;
          }
          else {
            *(unsigned int *)(iVar2 + 0x3c) = *(unsigned int *)(iVar2 + 0x3c) ^ 0x80000;
          }
          lVar3 = fn_82963D50(*(unsigned int *)(param_1 + 0x104),iVar4);
          fn_82BA02A8(iVar4);
          fn_829639F0(iVar4);
        }
      }
    }
  }
  else {
    lVar3 = 1;
  }
  return lVar3;
}

