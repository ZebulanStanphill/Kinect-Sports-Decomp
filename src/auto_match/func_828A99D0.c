extern int fn_82248B90();
extern int fn_8288F948();
extern int fn_828A12E8();


int * fn_828A99D0(unsigned __int64 param_1,int param_2,int param_3)

{
  int *piVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int iVar4;
  int aiStack_30;
  
  uVar2 = fn_828A12E8();
  iVar3 = fn_8288F948(uVar2,1);
  aiStack_30 = **(int **)(iVar3 + 4);
  if ((int *)aiStack_30 != *(int **)(iVar3 + 4)) {
    do {
      piVar1 = *(int **)(aiStack_30 + 0x14);
      iVar4 = (**(int (***)())(*piVar1 + 0x44))(piVar1);
      if ((iVar4 == param_3) && (*(int *)(piVar1[0xd] + 0x38) == param_2)) {
        return piVar1;
      }
      fn_82248B90(&aiStack_30);
    } while (aiStack_30 != *(int *)(iVar3 + 4));
  }
  return (int *)0x0;
}

