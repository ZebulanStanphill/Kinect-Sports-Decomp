extern int fn_8281FEC0();
extern int fn_82A1E0D0();


void fn_8281FFE0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  
  uVar1 = *(unsigned int *)(param_1 + 0x10);
  if ((uVar1 & 2) != 0) {
    while ((uVar1 & 1) == 0) {
      fn_82A1E0D0(0,1);
      uVar1 = *(unsigned int *)(param_1 + 0x10);
    }
  }
  fn_8281FEC0(param_1,param_2,param_3);
  return;
}

