extern int fn_82E50BE8();
extern unsigned int lbl_82163244;


unsigned int * fn_82F48E20(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  __int64 lVar2;
  int iVar3;
  
  param_1[1] = 0;
  *param_1 = &lbl_82163244;
  param_1[4] = 1;
  param_1[3] = 0;
  param_1[2] = 0;
  if (((param_2 != (unsigned int *)0x0) && (param_3 != (unsigned int *)0x0)) && (param_2 <= param_3)) {
    uVar1 = (int)param_3 - (int)param_2 >> 2;
    lVar2 = ((unsigned __int64)uVar1 & 0x3fffffff) << 2;
    if (0x3fffffff < uVar1) {
      lVar2 = -1;
    }
    iVar3 = fn_82E50BE8(lVar2,0,0,0,0);
    param_1[1] = iVar3;
    if (iVar3 != 0) {
      param_1[3] = iVar3;
      for (; param_2 != param_3; param_2 = param_2 + 1) {
        *(unsigned int *)param_1[3] = *param_2;
        (**(int (***)())(**(int **)param_1[3] + 4))();
        param_1[3] = param_1[3] + 4;
      }
      param_1[2] = (unsigned int *)param_1[3];
      param_1[3] = param_1[1];
    }
  }
  return param_1;
}

