extern int _invalid_parameter_noinfo();
extern int _errno();


unsigned __int64 fn_82F7C468(unsigned int param_1)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  
  if (param_1 == 0) {
    puVar2 = (unsigned int *)_errno();
    *puVar2 = 0x16;
    _invalid_parameter_noinfo();
    uVar1 = 0xffffffffffffffff;
  }
  else {
    uVar1 = (unsigned __int64)*(unsigned int *)(param_1 + 0x10);
  }
  return uVar1;
}

