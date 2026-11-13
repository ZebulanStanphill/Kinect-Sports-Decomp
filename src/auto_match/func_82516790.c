extern int fn_825166A0();


void fn_82516790(int *param_1,unsigned int param_2,int param_3,int param_4)

{
  int iVar1;
  
  if (((param_3 == 0) && (param_4 == 1)) &&
     (iVar1 = (*(int (**)())(*param_1 + 8))(), param_2 == iVar1 + 0x48)) {
    fn_825166A0(param_1);
  }
  return;
}

