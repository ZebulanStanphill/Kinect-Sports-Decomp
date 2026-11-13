unsigned __int64
fn_82E49298(int *param_1,unsigned __int64 param_2,int param_3,unsigned __int64 param_4,unsigned __int64 param_5)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  
  uVar2 = 0;
  if ((int)param_5 == 0) {
    uVar2 = 0xffffffff80004003;
  }
  else {
    uVar1 = param_1[2] + param_3;
    if ((unsigned int)param_1[3] < (unsigned int)(param_1[2] + param_3)) {
      uVar1 = param_1[3];
    }
    param_1[4] = uVar1;
    (**(int (***)())(*param_1 + 0x18))(param_1,param_5);
  }
  return uVar2;
}

