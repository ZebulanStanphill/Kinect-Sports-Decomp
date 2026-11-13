extern int fn_8265C940();
extern int fn_82F691F0();


unsigned __int64 fn_829740E0(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  __int64 lVar5;
  __int64 lVar6;
  
  lVar5 = 0;
  uVar3 = 0;
  if (*(int *)(param_1 + 4) != 0) {
    iVar4 = 0;
    do {
      iVar2 = *(int *)(*(int *)(param_1 + 0x10) + iVar4);
      uVar1 = *(unsigned int *)(iVar2 + 4);
      if ((uVar1 & 0x100) != 0) {
        if ((uVar1 & 0x400) == 0) {
          if ((uVar1 & 0x800) == 0) goto LAB_8297413c;
        }
        lVar5 = (unsigned __int64)*(unsigned int *)(iVar2 + 8) + lVar5;
      }
LAB_8297413c:
      uVar3 = uVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar3 < *(unsigned int *)(param_1 + 4));
  }
  lVar6 = (((unsigned __int64)*(unsigned int *)(param_1 + 0xc) & 0x7fffffff) * 2 + lVar5 & 0xfffffff) << 4;
  lVar5 = fn_8265C940(lVar6,0x24810000);
  if (lVar5 == 0) {
    return 0xffffffff8007000e;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(lVar5,0xff,lVar6);
}

