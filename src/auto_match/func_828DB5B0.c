extern int memmove();


int fn_828DB5B0(int param_1,int param_2,int param_3)

{
  int lVar1;
  
  lVar1 = ((unsigned __int64)(unsigned int)(param_2 - param_1 >> 2) & 0x3fffffff) * 4;
  memmove(param_3,param_1,lVar1);
  return lVar1 + param_3;
}

