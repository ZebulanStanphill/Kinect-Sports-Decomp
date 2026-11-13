extern int fn_82691A10();
extern int fn_82691DB0();


unsigned __int64 fn_82691E98(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,char *param_4)

{
  unsigned __int64 uVar1;
  
  fn_82691DB0();
  uVar1 = fn_82691A10(param_1);
  if ((uVar1 & 0xffffffff) == 0) {
    if (*param_4 == '\0') {
      uVar1 = 0;
    }
    else {
      uVar1 = fn_82691A10(param_1,param_2,param_3,*(unsigned int *)(param_1 + 0x1fc),param_4);
    }
  }
  return uVar1;
}

