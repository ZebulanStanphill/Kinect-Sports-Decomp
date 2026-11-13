extern int fn_82681898();
extern int fn_826957D0();
extern int fn_826972E0();
extern int fn_82F65E20();


void fn_82712688(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar1 = *(unsigned int *)(param_1 + 0x18);
  uVar2 = fn_826957D0(param_1,0);
  fn_826972E0(uVar2,uVar1);
  fn_82F65E20();
  fn_82681898(*(unsigned int *)(param_1 + 4));
  return;
}

