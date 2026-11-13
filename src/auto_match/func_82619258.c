extern int fn_82591730();
extern unsigned int uStack00000024;


unsigned __int64 fn_82619258(int param_1,int param_2,unsigned int param_3)

{
  unsigned __int64 uVar1;
  unsigned int uStack00000024;
  
  if (param_2 == 2) {
    *(unsigned int *)(param_1 + 8) = param_3;
  }
  else {
    if (param_2 != 3) {
      uStack00000024 = param_3;
      uVar1 = fn_82591730();
      return uVar1;
    }
    *(unsigned int *)(param_1 + 0xc) = param_3;
  }
  return 1;
}

