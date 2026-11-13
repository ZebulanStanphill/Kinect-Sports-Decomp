extern int fn_82FA5060();
extern unsigned int lbl_82005758;
extern unsigned int lbl_831BC768;


unsigned __int64 fn_8302A490(int param_1)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned int uVar3;
  double dVar4;
  double dVar5;
  
  dVar5 = (double)(*(float *)(param_1 + 0xc) - *(float *)(param_1 + 0x10)) /
          (double)(*(int *)(param_1 + 0x14) - 1);
  *(float *)(param_1 + 0x18) = (float)(lbl_82005758 / dVar5);
  iVar2 = fn_82FA5060(lbl_831BC768,*(int *)(param_1 + 0x14) << 2);
  *(int *)(param_1 + 4) = iVar2;
  if (iVar2 == 0) {
    uVar1 = 2;
  }
  else {
    uVar3 = 0;
    if (*(int *)(param_1 + 0x14) != 0) {
      iVar2 = 0;
      do {
        dVar4 = (double)(**(int (***)())(param_1 + 8))
                                  ((double)uVar3 * dVar5 + (double)*(float *)(param_1 + 0x10));
        uVar3 = uVar3 + 1;
        *(float *)(*(int *)(param_1 + 4) + iVar2) = (float)dVar4;
        iVar2 = iVar2 + 4;
      } while (uVar3 < *(unsigned int *)(param_1 + 0x14));
    }
    uVar1 = 1;
  }
  return uVar1;
}

