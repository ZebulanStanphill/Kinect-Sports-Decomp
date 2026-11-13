extern int fn_8256E1D8();
extern int fn_8266D3E0();


void fn_8266D5C0(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4,
                  int param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  
  while ((param_1 != param_2 && (param_3 != param_4))) {
    if ((unsigned int)param_3[2] < (unsigned int)param_1[2]) {
      fn_8256E1D8(param_5,*param_3,param_3[1]);
      uVar2 = param_3[2];
      param_3 = param_3 + 3;
    }
    else {
      fn_8256E1D8(param_5,*param_1,param_1[1]);
      uVar2 = param_1[2];
      param_1 = param_1 + 3;
    }
    *(unsigned int *)(param_5 + 8) = uVar2;
    param_5 = param_5 + 0xc;
  }
  uVar1 = fn_8266D3E0(param_1,param_2,param_5);
  fn_8266D3E0(param_3,param_4,uVar1);
  return;
}

