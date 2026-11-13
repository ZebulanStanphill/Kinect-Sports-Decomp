extern int fn_8249ABC0();
extern int fn_82F4EC18();


void fn_824E4270(void)

{
  int iVar1;
  
  fn_82F4EC18();
  iVar1 = fn_8249ABC0();
  *(unsigned int *)(iVar1 + 0x70) = 0;
  return;
}

