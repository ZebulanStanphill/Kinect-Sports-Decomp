extern int fn_8259BDA8();


int * fn_82872B10(int *param_1,int param_2,int param_3,int *param_4)

{
  int iVar1;
  int aiStack_30;
  
  if (param_2 != param_3) {
    iVar1 = *param_4;
    aiStack_30 = param_2;
    do {
      param_2 = aiStack_30;
      if (*(int *)(aiStack_30 + 0xc) == iVar1) break;
      fn_8259BDA8(&aiStack_30);
      param_2 = aiStack_30;
    } while (aiStack_30 != param_3);
  }
  *param_1 = param_2;
  return param_1;
}

