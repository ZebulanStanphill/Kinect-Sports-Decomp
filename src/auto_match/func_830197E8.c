extern int fn_82FA5190();


int * fn_830197E8(int *param_1,unsigned int *param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  unsigned int uVar3;
  int *piVar4;
  int iVar5;
  unsigned __int64 uVar6;
  
  piVar1 = (int *)param_3[2];
  iVar2 = *param_3;
  uVar3 = param_3[1];
  piVar4 = (int *)param_3[3];
  iVar5 = *piVar1;
  *param_1 = iVar2;
  param_1[1] = uVar3;
  param_1[3] = (int)piVar4;
  param_1[2] = iVar5;
  uVar6 = (unsigned __int64)uVar3;
  while (iVar5 == 0) {
    uVar6 = uVar6 + 1;
    param_1[1] = (int)uVar6;
    if (0xc0 < (uVar6 & 0xffffffff)) break;
    param_1[3] = 0;
    iVar5 = *(int *)((int)((uVar6 & 0xffffffff) << 2) + iVar2);
    param_1[2] = iVar5;
  }
  if (piVar4 == (int *)0x0) {
    *(int *)((int)(((unsigned __int64)uVar3 + 1 & 0xffffffff) << 2) + (int)param_2) = *piVar1;
  }
  else {
    *piVar4 = *piVar1;
  }
  fn_82FA5190(*param_2);
  param_2[0xc2] = param_2[0xc2] + -1;
  return param_1;
}

