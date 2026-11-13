extern int _invalid_parameter_noinfo();
extern int _errno();


unsigned int fn_82F68320(unsigned int param_1)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  
  if (param_1 == 0) {
    puVar1 = (unsigned int *)_errno();
    *puVar1 = 0x16;
    _invalid_parameter_noinfo();
    uVar2 = 0;
  }
  else {
    uVar2 = *(unsigned int *)(param_1 + 0xc) & 0x10;
  }
  return uVar2;
}

