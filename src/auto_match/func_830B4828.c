extern int fn_830B4380();


unsigned __int64 fn_830B4828(int *param_1,unsigned int *param_2,int *param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int aiStack_30;
  
  if ((param_2 == (unsigned int *)0x0) || (param_3 == (int *)0x0)) {
    return 0xffffffff80004003;
  }
  *param_2 = 0;
  uVar2 = 0;
  *param_3 = 0;
  uVar1 = param_1[1];
  if (uVar1 == 0) {
    uVar2 = fn_830B4380(param_1);
    if ((int)uVar2 < 0) {
      return uVar2;
    }
    piVar5 = param_1 + 0x26;
    if (0xf < (unsigned int)param_1[0x2b]) {
      piVar5 = (int *)*piVar5;
    }
    *param_2 = piVar5;
    iVar4 = 1;
    iVar3 = param_1[0x2a];
  }
  else if (uVar1 == 1) {
    piVar5 = param_1 + 0x2d;
    if (0xf < (unsigned int)param_1[0x32]) {
      piVar5 = (int *)*piVar5;
    }
    *param_2 = piVar5;
    iVar4 = 2;
    iVar3 = param_1[0x31];
  }
  else {
    if (uVar1 < 3) {
      uVar2 = (**(int (***)())(*param_1 + 0x18))(param_1,param_2,param_3);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      aiStack_30 = 0;
      uVar2 = (**(int (***)())(*param_1 + 0x14))(param_1,&aiStack_30);
      if ((int)uVar2 < 0) {
        return uVar2;
      }
      if (aiStack_30 != 0) {
        return uVar2;
      }
      iVar4 = 3;
      goto LAB_830b4960;
    }
    if (uVar1 != 3) {
      return 0xffffffff80040001;
    }
    piVar5 = param_1 + 0x34;
    if (0xf < (unsigned int)param_1[0x39]) {
      piVar5 = (int *)*piVar5;
    }
    *param_2 = piVar5;
    iVar4 = 4;
    iVar3 = param_1[0x38];
  }
  *param_3 = iVar3;
LAB_830b4960:
  param_1[1] = iVar4;
  return uVar2;
}

