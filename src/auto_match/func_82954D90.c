extern int fn_8265C940();
extern int fn_8265C990();
extern int memset();


unsigned __int64 fn_82954D90(int param_1,unsigned __int64 param_2,__int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  __int64 lVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  int iVar8;
  unsigned int uVar9;

  uVar6 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar5 = 0;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x10) + iVar5);
      uVar1 = *(unsigned int *)(iVar2 + 4);
      *(unsigned int *)(iVar2 + 0x10) = 0;
      if ((uVar1 & 0x400) == 0) {
        *(unsigned int *)(iVar2 + 8) = 0;
        uVar7 = 0;
        if (*(int *)(param_1 + 8) != 0) {
          iVar8 = 0;
          do {
            iVar3 = *(int *)(*(int *)(param_1 + 0x14) + iVar8);
            if ((*(unsigned int *)(iVar3 + 4) == uVar6) &&
               (uVar9 = *(int *)(iVar3 + 0xc) + 1, *(unsigned int *)(iVar2 + 8) < uVar9)) {
              *(unsigned int *)(iVar2 + 8) = uVar9;
            }
            uVar7 = uVar7 + 1;
            iVar8 = iVar8 + 4;
          } while (uVar7 < *(unsigned int *)(param_1 + 8));
        }
        if (((uVar1 & 0x100) != 0) && ((uVar1 & 0x800) == 0)) {
          *(unsigned int *)(iVar2 + 4) = uVar1 & 0xffffffbf;
        }
        uVar1 = *(unsigned int *)(iVar2 + 4);
        if ((uVar1 & 0x10) != 0) {
          if (((uVar1 & 0x200) == 0) && ((uVar1 & 0x800) == 0)) {
            *(unsigned int *)(iVar2 + 4) = uVar1 & 0xffffffbf;
          }
        }
        uVar1 = *(unsigned int *)(iVar2 + 4);
        if ((uVar1 & 0x80) != 0) {
          if (((uVar1 & 0x800) == 0) && (*(int *)(iVar2 + 8) == 1)) {
            *(unsigned int *)(iVar2 + 4) = uVar1 & 0xffffffbf;
          }
        }
      }
      uVar6 = uVar6 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar6 < *(unsigned int *)(param_1 + 4));
  }
  lVar4 = fn_8265C940(param_3 * 0xc,0x24810000);
  if (lVar4 != 0) {
                    /* WARNING: Subroutine does not return */
    memset(lVar4,0,param_3 * 0xc);
  }
  fn_8265C990(0,0x24810000);
  fn_8265C990(0,0x24810000);
  fn_8265C990(0,0x24810000);
  return 0xffffffff8007000e;
}
