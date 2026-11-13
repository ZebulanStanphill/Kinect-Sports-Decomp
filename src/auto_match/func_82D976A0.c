extern int fn_82CE4040();
extern int fn_82CE4118();


void fn_82D976A0(int param_1,int param_2,unsigned int param_3)

{
  int iVar1;
  
  if (param_3 != 0) {
    fn_82CE4040(param_3);
  }
  iVar1 = (param_2 + 0x38) * 4;
  if (*(unsigned int *)(iVar1 + param_1) != 0) {
    fn_82CE4118(*(unsigned int *)(iVar1 + param_1));
  }
  *(int *)(iVar1 + param_1) = (int)param_3;
  return;
}

