extern unsigned int lbl_821AAD20;


void fn_82A8B860(int *param_1,float *param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  float fVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = (**(int (***)())(*param_1 + 8))();
  if (param_2 != (float *)0x0) {
    fVar1 = lbl_821AAD20;
    if (-1 < iVar2) {
      fVar1 = (float)(param_1[0x1662] - 1) / (float)param_1[0x1663];
    }
    *param_2 = fVar1;
  }
  if (param_3 != (int *)0x0) {
    if (iVar2 < 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = param_1[0x1664];
    }
    *param_3 = iVar3;
  }
  if (param_4 != (int *)0x0) {
    if (iVar2 < 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = param_1[0x1665];
    }
    *param_4 = iVar3;
  }
  if (param_5 != (int *)0x0) {
    if (iVar2 < 0) {
      iVar3 = 0;
    }
    else {
      iVar3 = param_1[0x1666];
    }
    *param_5 = iVar3;
  }
  if (param_6 != (int *)0x0) {
    if (iVar2 < 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = param_1[0x1667];
    }
    *param_6 = iVar2;
  }
  return;
}

