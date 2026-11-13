extern int _blkmov();


int fn_82A6A338(int param_1,unsigned __int64 param_2,int param_3,int param_4)

{
  int iVar1;
  int aiStack_20 [2];
  
  param_4 = (int)param_2 * param_4;
  aiStack_20[0] = 0;
  iVar1 = param_4 + param_1;
  if (0 < (int)param_2) {
    _blkmov((int)aiStack_20 + ((iVar1 - param_4) - param_1),iVar1,param_2);
  }
  return aiStack_20[0] >>
         (((int)((param_2 & 0xffffffff) << 3) - param_3) + (int)((4 - param_2 & 0xffffffff) << 3) &
         0x3fU);
}

