int fn_829ABB28(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int aiStack_30;
  
  if (param_1[5] != 0xcd) {
    *(unsigned int *)(*param_1 + 0x14) = 0x14;
    *(int *)(*param_1 + 0x18) = param_1[5];
    (**(int (***)())*param_1)();
  }
  if ((unsigned int)param_1[0x23] < (unsigned int)param_1[0x1d]) {
    if (param_1[2] != 0) {
      *(int *)(param_1[2] + 4) = param_1[0x23];
      *(int *)(param_1[2] + 8) = param_1[0x1d];
      (**(int (***)())param_1[2])(param_1);
    }
    aiStack_30 = 0;
    (**(int (***)())(param_1[0x6b] + 4))(param_1,param_2,&aiStack_30,param_3);
    param_1[0x23] = aiStack_30 + param_1[0x23];
  }
  else {
    *(unsigned int *)(*param_1 + 0x14) = 0x7b;
    (**(int (***)())(*param_1 + 4))(param_1,0xffffffffffffffff);
    aiStack_30 = 0;
  }
  return aiStack_30;
}

