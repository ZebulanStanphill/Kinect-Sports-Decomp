extern int fn_8265C940();
extern int fn_8296CF68();
extern int fn_82F691F0();


unsigned __int64 fn_8297CA38(int param_1)

{
  int iVar1;
  __int64 lVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  int iVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  
  fn_8296CF68();
  uVar4 = 0;
  uVar3 = 0;
  if (*(unsigned int *)(param_1 + 8) != 0) {
    iVar5 = 0;
    do {
      iVar1 = *(int *)(iVar5 + *(int *)(param_1 + 0x14));
      if ((*(int *)(param_1 + 0x88) == *(int *)(iVar1 + 4)) &&
         (uVar6 = (unsigned __int64)*(unsigned int *)(iVar1 + 0xc), (uVar4 & 0xffffffff) <= uVar6)) {
        uVar4 = uVar6 + 1;
      }
      uVar3 = uVar3 + 1;
      iVar5 = iVar5 + 4;
    } while (uVar3 < *(unsigned int *)(param_1 + 8));
  }
  lVar7 = (((unsigned __int64)*(unsigned int *)(param_1 + 0xc) & 0x1fffffff) * 8 + uVar4 & 0x3fffffff) << 2;
  lVar2 = fn_8265C940(lVar7,0x24810000);
  if (lVar2 != 0) {
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(lVar2,0,lVar7);
  }
  return 0xffffffff8007000e;
}

