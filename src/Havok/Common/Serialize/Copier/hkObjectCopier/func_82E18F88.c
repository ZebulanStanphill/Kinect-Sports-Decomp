extern int fn_82CFBE40();
extern int fn_82CFE180();
extern int fn_82CFE1F0();
extern int fn_82E182B0();
extern int fn_82E19C10();


unsigned int
fn_82E18F88(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int uVar1;
  int *piVar3;
  int lVar2;
  
  uVar1 = fn_82CFE1F0(param_3);
  fn_82E182B0(uVar1,2);
  piVar3 = (int *)fn_82CFE1F0(param_3);
  uVar1 = (*(int (**)())(*piVar3 + 0x20))();
  fn_82E19C10(param_4,param_2,uVar1);
  lVar2 = fn_82CFBE40(param_1);
  fn_82CFE180(param_3,param_1,lVar2 + 1);
  return 0;
}

