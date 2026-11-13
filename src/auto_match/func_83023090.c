extern int fn_830226E0();


void fn_83023090(int *param_1,unsigned __int64 param_2,int param_3)

{
  *param_1 = param_3;
  fn_830226E0();
  *(unsigned short *)(*param_1 + 0xe) = *(unsigned short *)(param_1 + 2);
  return;
}

