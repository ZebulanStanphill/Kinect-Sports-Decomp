extern unsigned int *auStack_48;
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern int fn_8273D588();
extern int fn_8277B730();
extern unsigned int stack0x0000001c;


int fn_82782F20(int *param_1,int param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned int *puVar2;
  int *piVar3;
  unsigned __int64 uVar4;
  int *piVar5;
  int iVar6;
  __int64 lVar7;
  int in_stack_0000001c;
  float fStack_50;
  float fStack_4c;
  unsigned char auStack_48 [72];
  
  iVar6 = param_2 * 4;
  piVar5 = param_1 + 1;
  iVar1 = *(int *)(*param_1 + 0xc);
  piVar3 = *(int **)(iVar1 + 8);
  uVar4 = (__int64)*(int *)(iVar1 + 4) * (__int64)param_2 + (unsigned __int64)*(unsigned int *)(*param_1 + 8);
  if (*(int *)(iVar6 + param_1[1]) == -1) {
    *(int *)(iVar6 + param_1[1]) = param_2;
    iVar1 = *piVar3;
  }
  else {
    uVar4 = (**(int (***)())(*piVar3 + 0x1c))(piVar3,uVar4);
    if ((uVar4 & 0xffffffff) == (param_3 & 0xffffffff)) {
      return param_2;
    }
    while (iVar1 = *(int *)(iVar6 + *piVar5), iVar1 != param_2) {
      iVar6 = *(int *)(*param_1 + 0xc);
      piVar3 = *(int **)(iVar6 + 8);
      uVar4 = (**(int (***)())(*piVar3 + 0x1c))
                        (piVar3,(__int64)*(int *)(iVar6 + 4) * (__int64)iVar1 +
                                (unsigned __int64)*(unsigned int *)(*param_1 + 8));
      if ((uVar4 & 0xffffffff) == (param_3 & 0xffffffff)) {
        return iVar1;
      }
      param_2 = iVar1;
      iVar6 = iVar1 << 2;
    }
    iVar1 = *(int *)(*param_1 + 0xc);
    piVar3 = *(int **)(iVar1 + 8);
    lVar7 = (__int64)*(int *)(iVar1 + 4) * (__int64)param_2 + (unsigned __int64)*(unsigned int *)(*param_1 + 8);
    (**(int (***)())(*piVar3 + 0x18))(piVar3,lVar7);
    (**(int (***)())(*piVar3 + 0xc))(piVar3,lVar7,&fStack_4c,&fStack_50);
    *(unsigned int *)(iVar6 + *piVar5) = *(unsigned int *)*param_1;
    param_2 = *(int *)*param_1;
    in_stack_0000001c = param_2;
    fn_8273D588(piVar5,&stack0x0000001c);
    puVar2 = (unsigned int *)fn_8277B730(auStack_48,*param_1);
    piVar3 = (int *)puVar2[1];
    uVar4 = (unsigned __int64)*puVar2;
    (**(int (***)())(*piVar3 + 4))((double)fStack_4c,(double)fStack_50,piVar3,uVar4);
    iVar1 = *piVar3;
  }
  (**(int (***)())(iVar1 + 0x14))(piVar3,uVar4,param_3);
  return param_2;
}

