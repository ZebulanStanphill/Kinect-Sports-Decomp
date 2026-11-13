extern int fn_826914C8();


void fn_82693078(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  
  uVar1 = param_1[1];
  param_1[1] = (int)((unsigned __int64)uVar1 - 1);
  if ((unsigned int)uVar1 - 1 == 0) {
    fn_826914C8(param_2,*param_1,0x400,0x400);
    *param_1 = 0;
  }
  return;
}

