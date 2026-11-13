extern int fn_8295A330();
extern int fn_829A9AF8();


unsigned __int64 fn_829A9D58(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_2 * 4 + *(int *)(param_1 + 0x14));
  if ((((*(int *)(iVar2 + 8) == -1) || (iVar1 = ((int (*)())fn_829A9D58)(), -1 < iVar1)) &&
      (iVar1 = fn_829A9AF8(param_1,iVar2), -1 < iVar1)) &&
     (iVar2 = fn_8295A330(param_1,((unsigned __int64)*(unsigned int *)(iVar2 + 0xc) & 0x3fffffff) * 4 +
                                        (unsigned __int64)*(unsigned int *)(iVar2 + 0x10)), -1 < iVar2)) {
    *(int *)(*(int *)(param_1 + 0x110) + param_3 * 4) =
         *(int *)(*(int *)(param_1 + 0x110) + param_3 * 4) + 1;
    return 0;
  }
  return 0xffffffff8007000e;
}

