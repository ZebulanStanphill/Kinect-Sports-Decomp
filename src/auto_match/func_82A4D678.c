extern int fn_82A4D510();
extern int fn_82A5ED20();


void fn_82A4D678(unsigned __int64 param_1,unsigned __int64 param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = fn_82A5ED20(param_1,1,param_3,1);
  if (iVar1 >= 0) {
    fn_82A4D510(param_1,*(unsigned short *)(*param_3 + 2));
  }
  return;
}

