extern int fn_83022780();


void fn_830230D0(int *param_1,unsigned __int64 param_2,int param_3)

{
  *param_1 = param_3;
  fn_83022780();
  *(unsigned short *)(*param_1 + 0xe) = *(unsigned short *)(param_1 + 2);
  return;
}

