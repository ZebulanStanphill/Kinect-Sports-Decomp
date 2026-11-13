extern int fn_82ADD120();
extern int fn_82ADD198();
extern int fn_82ADD600();


unsigned __int64 fn_82AD2AA8(unsigned __int64 param_1,int param_2,int param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  
  for (uVar1 = *(unsigned int *)(param_3 + 0x1c); ((uVar1 & 1) == 0 && (uVar1 != 0));
      uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 0x28)) {
    if (((*(unsigned int *)(uVar1 + 8) & 0x3f80) == 0x3700) && ((*(unsigned int *)(uVar1 + 8) >> 0x17 & 1) != 0)) {
      uVar2 = fn_82ADD120(*(unsigned int *)(*(int *)(uVar1 + 0x2c) + 0xc));
      uVar2 = fn_82ADD198(param_1,uVar2);
      iVar3 = fn_82ADD600(param_1,uVar2);
      if (iVar3 == param_2) {
        return 1;
      }
    }
  }
  return 0;
}

