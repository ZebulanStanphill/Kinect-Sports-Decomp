extern int fn_827743C0();
extern int memcpy();


void fn_82774CE8(unsigned int *param_1,unsigned __int64 param_2)

{
  int lVar1;
  
  fn_827743C0(param_1,param_1,(unsigned __int64)param_1[1] + 1);
  lVar1 = (unsigned __int64)param_1[1] * 0x1c + (unsigned __int64)*param_1 + -0x1c;
  if (lVar1 != 0) {
    memcpy(lVar1,param_2,0x1c);
  }
  return;
}

