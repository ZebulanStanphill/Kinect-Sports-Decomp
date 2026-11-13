extern int fn_826913D8();
extern int fn_826931A8();
extern unsigned int lbl_831F129C;


void fn_826920F0(unsigned int *param_1,int *param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  int *piVar5;
  int (**pcVar6)();
  
  uVar4 = (unsigned __int64)(unsigned int)param_2[7];
  uVar2 = (unsigned __int64)(*(unsigned short *)(param_2 + 3) + 1 << (param_1[3] & 0x3f));
  uVar3 = (unsigned int)param_2[6] / uVar2;
  trapWord(6,uVar2,0);
  if ((int)uVar3 != 0) {
    do {
      piVar5 = (int *)uVar4;
      *(int *)(*piVar5 + 4) = piVar5[1];
      uVar4 = uVar4 + uVar2;
      *(int *)piVar5[1] = *piVar5;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  param_1[0x84] = param_1[0x84] - param_2[6];
  piVar5 = (int *)param_1[0x89];
  uVar1 = param_2[6];
  uVar2 = (unsigned __int64)uVar1;
  if (piVar5 != (int *)0x0) {
    (**(int (***)())(*piVar5 + 8))(piVar5,*param_1,uVar2);
  }
  param_1[0x83] = param_1[0x83] - uVar1;
  fn_826931A8(lbl_831F129C,param_2[7],uVar2);
  uVar1 = 1 << (*(unsigned short *)((int)param_2 + 0xe) & 0x3f);
  if ((param_2[4] & 0x80000000U) == 0) {
    if (uVar1 < 0x1001) {
      uVar1 = 0x1000;
    }
    piVar5 = (int *)param_1[1];
    uVar3 = (unsigned __int64)(unsigned int)param_2[7];
    pcVar6 = *(int (***)())(*piVar5 + 8);
  }
  else {
    piVar5 = (int *)param_1[1];
    param_1[0x83] = param_1[0x83] - (param_2[4] & 0x7fffffffU);
    pcVar6 = *(int (***)())(*piVar5 + 0x14);
    uVar2 = ((unsigned __int64)(unsigned int)param_2[4] & 0x7fffffff) + uVar2;
    uVar3 = (unsigned __int64)(unsigned int)param_2[7] - ((unsigned __int64)(unsigned int)param_2[4] & 0x7fffffff);
  }
  (*pcVar6)(piVar5,uVar3,uVar2,uVar1);
  *(int *)(*param_2 + 4) = param_2[1];
  *(int *)param_2[1] = *param_2;
  fn_826913D8(param_1[2],param_2,param_2[2]);
  return;
}

