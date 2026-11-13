extern int fn_824AE188();
extern int fn_824AE2D8();


void fn_824AE0B8(int param_1)

{
  int iVar1;
  unsigned char uVar2;
  
  fn_824AE188();
  iVar1 = *(int *)(param_1 + 0x3c);
  uVar2 = fn_824AE2D8(param_1);
  *(unsigned char *)(iVar1 + 0x1c) = uVar2;
  return;
}

