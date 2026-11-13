extern int fn_82EE5E28();
extern int fn_82EE5F60();


int fn_82E57820(int param_1,int param_2,unsigned int param_3)

{
  int uVar1;
  
  if (param_3 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = fn_82EE5F60(param_2,param_1,param_3);
    if (uVar1 >= 0) {
      uVar1 = fn_82EE5E28(param_2,param_3);
    }
  }
  return uVar1;
}

