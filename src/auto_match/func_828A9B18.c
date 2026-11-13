extern int fn_82248B90();
extern int fn_8288F948();
extern int fn_828A12E8();


int * fn_828A9B18(unsigned __int64 param_1,__int64 *param_2)

{
  int *piVar1;
  unsigned __int64 uVar2;
  int iVar4;
  __int64 lVar3;
  int aiStack_30;
  
  uVar2 = fn_828A12E8();
  iVar4 = fn_8288F948(uVar2,1);
  aiStack_30 = **(int **)(iVar4 + 4);
  if ((int *)aiStack_30 != *(int **)(iVar4 + 4)) {
    do {
      piVar1 = *(int **)(aiStack_30 + 0x14);
      lVar3 = (**(int (***)())(*piVar1 + 0x48))(piVar1);
      if (lVar3 == *param_2) {
        return piVar1;
      }
      fn_82248B90(&aiStack_30);
    } while (aiStack_30 != *(int *)(iVar4 + 4));
  }
  return (int *)0x0;
}

