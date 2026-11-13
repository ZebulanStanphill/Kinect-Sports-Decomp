extern int fn_8260E0D0();


void fn_8260E160(int param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,int param_5)

{
  unsigned int aiStack_10;
  
  if ((param_5 == 0) && (aiStack_10 = *(int *)(param_3 + 0x10), aiStack_10 != 0)) {
    fn_8260E0D0(**(unsigned int **)(param_1 + 0x60),&aiStack_10);
  }
  return;
}

