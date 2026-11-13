extern int fn_826913D8();
extern int fn_826931A8();
extern unsigned int lbl_831F129C;


void fn_82691AF0(unsigned int *param_1,int *param_2)

{
  int *piVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  int (**pcVar5)();
  
  piVar1 = (int *)param_1[0x89];
  uVar3 = param_2[6];
  uVar4 = (unsigned __int64)uVar3;
  if (piVar1 != (int *)0x0) {
    (**(int (***)())(*piVar1 + 8))(piVar1,*param_1,uVar4);
  }
  param_1[0x83] = param_1[0x83] - uVar3;
  fn_826931A8(lbl_831F129C,param_2[7],uVar4);
  uVar3 = 1 << (*(unsigned short *)((int)param_2 + 0xe) & 0x3f);
  if ((param_2[4] & 0x80000000U) == 0) {
    if (uVar3 < 0x1001) {
      uVar3 = 0x1000;
    }
    piVar1 = (int *)param_1[1];
    uVar2 = (unsigned __int64)(unsigned int)param_2[7];
    pcVar5 = *(int (***)())(*piVar1 + 8);
  }
  else {
    piVar1 = (int *)param_1[1];
    param_1[0x83] = param_1[0x83] - (param_2[4] & 0x7fffffffU);
    pcVar5 = *(int (***)())(*piVar1 + 0x14);
    uVar4 = ((unsigned __int64)(unsigned int)param_2[4] & 0x7fffffff) + uVar4;
    uVar2 = (unsigned __int64)(unsigned int)param_2[7] - ((unsigned __int64)(unsigned int)param_2[4] & 0x7fffffff);
  }
  (*pcVar5)(piVar1,uVar2,uVar4,uVar3);
  *(int *)(*param_2 + 4) = param_2[1];
  *(int *)param_2[1] = *param_2;
  fn_826913D8(param_1[2],param_2,param_2[2]);
  return;
}

