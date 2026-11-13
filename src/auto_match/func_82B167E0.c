extern int fn_82AA66A8();


double fn_82B167E0(unsigned int param_1,unsigned int param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  double dVar4;
  
  iVar1 = *(int *)(*(int *)(param_1 & 0xfffff000) + 0x94);
  if (((~(unsigned __int64)*(unsigned int *)(iVar1 + 0x28) & 0xffffffff) >> 0xe & 1) == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (*(unsigned int *)(param_1 + 0x14) >> 2 & 0xff) >> ((param_2 & 0x1f) << 1) & 3;
  }
  if (uVar2 == 0) {
    dVar4 = (double)*(float *)((param_2 + 0xb) * 4 + param_1);
  }
  else {
    if (uVar2 == 1) {
      uVar3 = (unsigned __int64)*(int *)((param_2 + 0xb) * 4 + param_1);
    }
    else {
      if (2 < uVar2) {
                    /* WARNING: Subroutine does not return */
        fn_82AA66A8(iVar1,0x12c0);
      }
      uVar3 = (unsigned __int64)*(unsigned int *)((param_2 + 0xb) * 4 + param_1);
    }
    dVar4 = (double)(__int64)uVar3;
  }
  return dVar4;
}

