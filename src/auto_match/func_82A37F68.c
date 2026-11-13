void fn_82A37F68(unsigned int *param_1,unsigned int param_2,__int64 param_3,int param_4)

{
  int iVar1;
  
  param_1[0xd] = param_4;
  iVar1 = 0;
  param_1[2] = (int)param_3;
  param_1[3] = 0;
  param_1[1] = param_4 + 4U & 0xfffffff8;
  if ((int)param_3 != 0) {
    do {
      *(unsigned int *)(iVar1 + param_1[1]) = 0xffffffff;
      iVar1 = iVar1 + 0x58;
      param_3 = param_3 + -1;
    } while (param_3 != 0);
  }
  RtlInitializeCriticalSection(param_1 + 5);
  *param_1 = param_2;
  param_1[0xc] = 1;
  return;
}

