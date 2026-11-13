extern int fn_8249ABC0();
extern int fn_8249CA78();
extern int fn_82F4EC00();


void fn_824E4220(unsigned int param_1)

{
  int iVar1;
  
  fn_82F4EC00();
  iVar1 = fn_8249ABC0();
  *(int *)(iVar1 + 0x70) = param_1;
  if ((param_1 != 0) && (*(unsigned int *)(iVar1 + 0xb0) == 0)) {
    fn_8249CA78();
  }
  return;
}

