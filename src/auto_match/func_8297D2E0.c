extern int fn_8265C940();
extern int fn_8265C990();
extern int memset();


unsigned __int64 fn_8297D2E0(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  __int64 lVar10;

  if ((*(unsigned int *)(param_1 + 0xcc) & 4) == 0) {
    uVar9 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      iVar7 = 0;
      do {
        uVar9 = uVar9 + 1;
        piVar3 = (int *)(*(int *)(param_1 + 0x10) + iVar7);
        iVar7 = iVar7 + 4;
        *(unsigned int *)(*piVar3 + 0x10) = 0;
      } while (uVar9 < *(unsigned int *)(param_1 + 4));
    }
    uVar9 = 0;
    if (*(int *)(param_1 + 8) != 0) {
      iVar7 = 0;
      do {
        iVar2 = *(int *)(*(int *)(param_1 + 0x14) + iVar7);
        iVar1 = *(int *)(iVar2 + 4);
        if (*(int *)(param_1 + 0x74) != iVar1) {
          iVar1 = *(int *)(iVar1 * 4 + *(int *)(param_1 + 0x10));
          if ((((*(unsigned int *)(iVar1 + 4) & 2) != 0) && ((*(unsigned int *)(iVar1 + 4) & 0x400) == 0)) &&
             (uVar8 = *(int *)(iVar2 + 0xc) + 1, *(unsigned int *)(iVar1 + 0x10) < uVar8)) {
            *(unsigned int *)(iVar1 + 0x10) = uVar8;
          }
        }
        uVar9 = uVar9 + 1;
        iVar7 = iVar7 + 4;
      } while (uVar9 < *(unsigned int *)(param_1 + 8));
    }
    uVar6 = 0;
    uVar9 = 0;
    if (*(int *)(param_1 + 4) != 0) {
      iVar7 = 0;
      do {
        piVar3 = (int *)(iVar7 + *(int *)(param_1 + 0x10));
        uVar9 = uVar9 + 1;
        iVar7 = iVar7 + 4;
        uVar6 = *(unsigned int *)(*piVar3 + 0x10) + uVar6;
      } while (uVar9 < *(unsigned int *)(param_1 + 4));
    }
    lVar10 = (uVar6 & 0x3fffffff) << 2;
    lVar5 = fn_8265C940(lVar10,0x24810000);
    if (lVar5 != 0) {
                    /* WARNING: Subroutine does not return */
      memset(lVar5,0,lVar10);
    }
    uVar4 = 0xffffffff8007000e;
    fn_8265C990(0,0x24810000);
  }
  else {
    uVar4 = 1;
  }
  return uVar4;
}
