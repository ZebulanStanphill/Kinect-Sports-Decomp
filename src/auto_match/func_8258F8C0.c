extern int fn_8258F748();


void fn_8258F8C0(unsigned __int64 param_1,__int64 param_2,int param_3,unsigned __int64 param_4,int *param_5,
                  unsigned __int64 param_6)

{
  unsigned __int64 uVar1;
  
  uVar1 = (**(int (***)())(*param_5 + 0x10))(param_5,param_6);
  fn_8258F748(param_1,param_2 + -0x10,*(unsigned int *)(param_3 + 0x20),uVar1);
  return;
}

