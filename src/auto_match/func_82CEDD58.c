extern unsigned int *auStack_2750;
extern int fn_82CFBB60();
extern int fn_82CFBE40();


int fn_82CEDD58(unsigned __int64 param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned char auStack_2750 [10032];
  
  fn_82CFBB60(auStack_2750,0x2728,0xffffffff821c5504,param_1);
  piVar1 = *(int **)(param_2 + 8);
  iVar2 = *piVar1;
  uVar3 = fn_82CFBE40(auStack_2750);
  (**(int (***)())(iVar2 + 0x10))(piVar1,auStack_2750,uVar3);
  return param_2;
}

