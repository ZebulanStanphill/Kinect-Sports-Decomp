extern int fn_82681898();
extern int fn_826957D0();
extern int fn_826972E0();
extern int fn_82F64F30();


void fn_827124F8(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  uVar1 = *(unsigned int *)(param_1 + 0x18);
  uVar2 = fn_826957D0(param_1,0);
  fn_826972E0(uVar2,uVar1);
  fn_82F64F30();
  fn_82681898(*(unsigned int *)(param_1 + 4));
  return;
}

