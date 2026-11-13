extern int fn_82CE5410();
extern int fn_82E17878();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;
extern unsigned int uStack_38;


unsigned __int64 fn_82E17B38(unsigned __int64 param_1,unsigned __int64 param_2,int *param_3)

{
  int *piVar1;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar2;
  int iVar5;
  struct { int first; int second; } stack_pair_40;

  unsigned int uStack_38;
  
  stack_pair_40.first = 0;
  stack_pair_40.second = 0;
  uStack_38 = 0x80000000;
  iVar3 = fn_82E17878(param_1,param_2,&stack_pair_40.first);
  if ((iVar3 == 0) &&
     (iVar3 = (**(int (***)())(*param_3 + 4))(param_3,param_1,param_2,&stack_pair_40.first), iVar3 == 0)) {
    iVar3 = 0;
    if (0 < stack_pair_40.second) {
      iVar5 = 0;
      do {
        piVar1 = *(int **)(iVar5 + stack_pair_40.first);
        if ((*piVar1 != 0) &&
           (iVar4 = fn_82E17B38(*piVar1,((unsigned int *)(iVar5 + stack_pair_40.first))[1],param_3),
           iVar4 == 1)) goto LAB_82e17c3c;
        iVar3 = iVar3 + 1;
        iVar5 = iVar5 + 8;
      } while (iVar3 < stack_pair_40.second);
    }
    iVar3 = fn_82CE5410();
    stack_pair_40.second = 0;
    if ((uStack_38 & 0x80000000) == 0) {
      (**(int (***)())(**(int **)(iVar3 + 0xc) + 0x10))
                (*(int **)(iVar3 + 0xc),stack_pair_40.first,uStack_38 & 0x3fffffff,8);
    }
    uVar2 = 0;
  }
  else {
LAB_82e17c3c:
    iVar3 = fn_82CE5410();
    stack_pair_40.second = 0;
    if ((uStack_38 & 0x80000000) == 0) {
      (**(int (***)())(**(int **)(iVar3 + 0xc) + 0x10))
                (*(int **)(iVar3 + 0xc),stack_pair_40.first,uStack_38 & 0x3fffffff,8);
    }
    uVar2 = 1;
  }
  return uVar2;
}

