extern int memcpy();


void fn_82CE6460(int *param_1,unsigned int *param_2,int param_3,unsigned int param_4,
                  unsigned int param_5)

{
  unsigned int uVar1;
  
  if ((param_4 == 0) || ((int)param_2[1] >= (int)param_5)) {
    uVar1 = (*(int (**)())(*param_1 + 0x14))(param_1,*param_2,param_2[2],&param_5,param_3);
    *param_2 = uVar1;
    param_2[2] = param_5;
  }
  else {
    memcpy(param_4,*param_2,param_2[1] * param_3);
    (*(int (**)())(*param_1 + 0x10))(param_1,*param_2,param_2[2] & 0x3fffffff,param_3);
    *param_2 = param_4;
    param_2[2] = param_5 | 0x80000000;
  }
  return;
}

