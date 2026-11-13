extern unsigned int lbl_82155118;


unsigned int * fn_82E659E0(unsigned int *param_1,int *param_2,unsigned int param_3,unsigned int *param_4)

{
  int (**pcVar1)();
  __int64 lVar2;
  unsigned int *puVar3;
  int *piVar4;
  
  param_1[2] = 0;
  param_1[3] = 0;
  piVar4 = param_1 + 3;
  param_1[4] = 0;
  puVar3 = param_1 + 4;
  param_1[5] = 0;
  *param_1 = &lbl_82155118;
  param_1[1] = 1;
  lVar2 = (**(int (***)())(*param_2 + 0xc))(param_2,piVar4,puVar3,0);
  if (-1 < lVar2) {
    if (*puVar3 < param_3) {
      lVar2 = -0x7ff8ffa9;
      pcVar1 = *(int (***)())(*param_2 + 0x10);
    }
    else {
      param_1[2] = param_2;
      *puVar3 = *puVar3 - param_3;
      *piVar4 = *piVar4 + param_3;
      pcVar1 = *(int (***)())(*param_2 + 4);
    }
    (*pcVar1)(param_2);
  }
  *param_4 = (int)lVar2;
  return param_1;
}

