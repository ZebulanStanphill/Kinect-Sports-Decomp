extern int fn_828F4498();
extern int fn_828F9D90();


int
fn_828F4780(int param_1,int param_2,unsigned int param_3,unsigned int param_4,int param_5,
             int param_6)

{
  int uVar1;
  
  if ((param_4 == 0) || (param_3 != 0)) {
    *(int *)(param_1 + 0x54) = param_3;
    *(int *)(param_1 + 0x58) = param_4;
    uVar1 = fn_828F4498(param_1,param_5,param_2);
    if (uVar1 >= 0) {
      uVar1 = fn_828F9D90(param_1,*(unsigned int *)(param_1 + 0x54),*(unsigned int *)(param_1 + 0x58),
                           param_2,1,param_5,param_6);
    }
  }
  else {
    uVar1 = 0x8876086c;
  }
  return uVar1;
}

