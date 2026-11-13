extern int fn_8265CA20();
extern int fn_8265CAA0();
extern int fn_82E20B48();
extern int fn_82E21DA0();
extern int fn_82E22450();


void fn_82E20BF8(int param_1)

{
  unsigned int iVar1;
  
  fn_82E20B48();
  if (*(unsigned int *)(param_1 + 8) != 0) {
    fn_82E21DA0(*(unsigned int *)(param_1 + 8));
    iVar1 = *(int *)(param_1 + 8);
    if (iVar1 != 0) {
      fn_82E22450(iVar1);
      fn_8265CA20(iVar1);
    }
  }
  if (*(unsigned int *)(param_1 + 0x14) != 0) {
    fn_8265CAA0(*(int *)(param_1 + 0x14));
    *(unsigned int *)(param_1 + 0x14) = 0;
  }
  return;
}

