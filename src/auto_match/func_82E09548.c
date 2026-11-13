extern int fn_82CFFFC8();
extern int fn_82D00020();
extern int fn_82D00060();
extern int fn_82D002F0();


void fn_82E09548(int *param_1,int param_2)

{
  int uVar1;
  int uVar2;
  char acStack_30;
  
  uVar1 = fn_82CFFFC8(param_2);
  fn_82D002F0(&acStack_30,param_2,uVar1);
  while (acStack_30 != '\0') {
    uVar2 = fn_82D00020(param_2,uVar1);
    (*(int (**)())(*param_1 + 0x1c))(param_1,uVar2,0);
    uVar1 = fn_82D00060(param_2,uVar1);
    fn_82D002F0(&acStack_30,param_2,uVar1);
  }
  return;
}

