extern int fn_8265C940();
extern int fn_829639F0();
extern int fn_82BA02A8();
extern int fn_82F68CC0();
extern int fn_82F691F0();


unsigned __int64 fn_829644B8(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  
  uVar1 = *(unsigned int *)(param_1 + 0x24);
  if (*(unsigned int *)(param_1 + 0xc) == uVar1) {
    uVar3 = ((unsigned __int64)uVar1 & 0x7fffffff) << 1;
    if (uVar1 == 0) {
      uVar3 = 0x100;
    }
    lVar2 = fn_8265C940((uVar3 & 0x3fffffff) << 2,0x24810000);
    if (lVar2 != 0) {
      fn_82F68CC0(lVar2,*(unsigned int *)(param_1 + 0x18),*(int *)(param_1 + 0xc) << 2);
                    /* WARNING: Subroutine does not return */
      fn_82F691F0(((unsigned __int64)*(unsigned int *)(param_1 + 0xc) & 0x3fffffff) * 4 + lVar2,0,
                   (uVar3 - *(unsigned int *)(param_1 + 0xc) & 0x3fffffff) << 2);
    }
    if ((param_2 & 0xffffffff) != 0) {
      fn_82BA02A8(param_2);
      fn_829639F0(param_2);
    }
    uVar3 = 0xffffffffffffffff;
  }
  else {
    *(int *)(*(int *)(param_1 + 0xc) * 4 + *(int *)(param_1 + 0x18)) = (int)param_2;
    uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0xc);
    *(unsigned int *)(param_1 + 0xc) = *(unsigned int *)(param_1 + 0xc) + 1;
  }
  return uVar3;
}

