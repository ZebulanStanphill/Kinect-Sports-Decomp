extern int fn_8267C498();
extern int fn_826B4DE0();


unsigned __int64 fn_826C9858(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned __int64 uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = param_1 + 0x68;
    *(int *)(param_1 + 4) = *(int *)(param_1 + 4) + 1;
  }
  uVar1 = fn_826B4DE0(param_2,param_3,iVar2,param_1 + 0xd0,param_4,
                            (__int64)(*(int *)(param_1 + 0xd8) - *(int *)(param_1 + 0xdc) >> 4) +
                            ((unsigned __int64)*(unsigned int *)(param_1 + 0xec) & 0x7ffffff) * 0x20 + -0x20);
  if (param_1 != 0) {
    fn_8267C498(param_1);
  }
  return uVar1;
}

