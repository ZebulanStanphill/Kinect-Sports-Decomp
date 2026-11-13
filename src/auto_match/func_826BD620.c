extern int fn_826BD398();


void fn_826BD620(int param_1,short *param_2,int param_3)

{
  short sVar1;
  int iVar2;
  int aiStack_30;
  
  aiStack_30 = 0;
  iVar2 = 0;
  if (param_3 == -1) {
    sVar1 = *param_2;
    while (sVar1 != 0) {
      param_1 = fn_826BD398(param_1,&aiStack_30);
      iVar2 = iVar2 + 1;
      sVar1 = param_2[iVar2];
    }
  }
  else if (0 < param_3) {
    do {
      if (*param_2 == 0) break;
      param_1 = fn_826BD398(param_1,&aiStack_30);
      iVar2 = iVar2 + 1;
      param_2 = param_2 + 1;
    } while (iVar2 < param_3);
  }
  *(unsigned char *)(aiStack_30 + param_1) = 0;
  return;
}

