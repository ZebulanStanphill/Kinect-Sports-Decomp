extern int fn_82691E98();
extern void *fn_8270C010();


void *fn_82691F88(__int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  void *uVar1;
  char acStack_30 [4];
  int aiStack_2c;
  
  acStack_30[0] = '\0';
  do {
    uVar1 = fn_8270C010(param_1 + 0x14,param_2,param_3,&aiStack_2c);
    if (uVar1 != 0) {
      *(int *)(aiStack_2c + 0x10) = *(int *)(aiStack_2c + 0x10) + 1;
      return uVar1;
    }
    fn_82691E98(param_1,param_2,param_3,acStack_30);
  } while (acStack_30[0] != '\0');
  return 0;
}

