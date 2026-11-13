extern int fn_8265C940();
extern int fn_82964180();
extern int fn_82BA02A8();
extern int fn_82F68CC0();
extern int fn_82F691F0();
extern unsigned int lbl_82005710;
extern unsigned int lbl_82005758;
extern unsigned int lbl_82005F78;


unsigned __int64 fn_82964300(int param_1,unsigned int *param_2)

{
  unsigned int uVar1;
  double dVar2;
  double dVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  double dVar6;
  
  uVar1 = *(unsigned int *)(param_1 + 0x20);
  if (*(unsigned int *)(param_1 + 8) == uVar1) {
    uVar5 = ((unsigned __int64)uVar1 & 0x7fffffff) << 1;
    if (uVar1 == 0) {
      uVar5 = 0x400;
    }
    lVar4 = fn_8265C940((uVar5 & 0x3fffffff) << 2,0x24810000);
    if (lVar4 != 0) {
      fn_82F68CC0(lVar4,*(unsigned int *)(param_1 + 0x14),*(int *)(param_1 + 8) << 2);
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(((unsigned __int64)*(unsigned int *)(param_1 + 8) & 0x3fffffff) * 4 + lVar4,0,
                   (uVar5 - *(unsigned int *)(param_1 + 8) & 0x3fffffff) << 2);
    }
    if (param_2 != (unsigned int *)0x0) {
      fn_82BA02A8(param_2);
      fn_82964180(param_2);
    }
    uVar5 = 0xffffffffffffffff;
  }
  else {
    if (((param_2 != (unsigned int *)0x0) &&
        ((*(unsigned int *)(*(int *)(param_2[1] * 4 + *(int *)(param_1 + 0x10)) + 4) & 0x100) != 0)) &&
       (param_2[2] == 0xffffffff)) {
      uVar1 = *param_2;
      dVar6 = *(double *)(param_2 + 8);
      *param_2 = uVar1 | 0x80;
      dVar3 = lbl_82005758;
      dVar2 = lbl_82005710;
      if ((dVar6 == lbl_82005710) || (dVar6 == lbl_82005758)) {
        *param_2 = uVar1 | 0x81;
      }
      if (ABS(dVar6 - (double)(__int64)(int)dVar6) < lbl_82005F78) {
        *param_2 = *param_2 | 2;
      }
      if (dVar2 <= dVar6) {
        *param_2 = *param_2 | 4;
      }
      if (dVar6 <= dVar2) {
        *param_2 = *param_2 | 8;
      }
      if (ABS(dVar6) <= dVar3) {
        *param_2 = *param_2 | 0x10;
      }
    }
    *(unsigned int **)(*(int *)(param_1 + 8) * 4 + *(int *)(param_1 + 0x14)) = param_2;
    uVar5 = (unsigned __int64)*(unsigned int *)(param_1 + 8);
    *(unsigned int *)(param_1 + 8) = *(unsigned int *)(param_1 + 8) + 1;
  }
  return uVar5;
}

