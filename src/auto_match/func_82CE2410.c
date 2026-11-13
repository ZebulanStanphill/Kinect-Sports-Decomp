extern unsigned int *auStack_20;
extern int fn_82CE3870();
extern int fn_82CE38A0();


void fn_82CE2410(unsigned __int64 param_1,__int64 param_2)

{
  int iVar1;
  unsigned int auStack_20 [2];
  
  auStack_20[0] = 2;
  iVar1 = fn_82CE38A0(param_1,param_2,auStack_20);
  if (iVar1 >= 0) {
    fn_82CE3870(param_1,param_2 + 2);
  }
  return;
}

