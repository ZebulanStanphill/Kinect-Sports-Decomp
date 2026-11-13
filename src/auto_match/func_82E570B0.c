extern int fn_82E50CB8();
extern int fn_82E50F10();
extern int fn_82E56C80();


unsigned __int64 fn_82E570B0(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  
  fn_82E50CB8(param_1 + 8);
  if ((param_2 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0xac)) {
    if (((unsigned __int64)*(unsigned int *)(param_1 + 0xac) < (param_2 + 1 & 0xffffffff)) ||
       (iVar1 = fn_82E56C80(param_1 + 0x44,param_2), iVar1 < 0)) {
      uVar2 = 0xffffffff8000ffff;
    }
    else {
      *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + -1;
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0xffffffff80070057;
  }
  fn_82E50F10(param_1 + 8);
  return uVar2;
}

