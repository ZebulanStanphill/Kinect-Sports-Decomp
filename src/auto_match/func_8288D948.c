extern int fn_8288BD68();
extern int fn_828A12E8();
extern int fn_828EA268();


void fn_8288D948(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int aiStack_30;
  
  iVar1 = fn_828A12E8(param_2);
  aiStack_30 = **(int **)(iVar1 + 0x98);
  if ((int *)aiStack_30 != *(int **)(iVar1 + 0x98)) {
    do {
      iVar2 = aiStack_30;
      (**(int (***)())(**(int **)(aiStack_30 + 0x40) + 4))();
      uVar3 = (unsigned __int64)*(unsigned int *)(*(int *)(iVar2 + 0x40) + 8);
      if ((uVar3 != 0) && (iVar2 = fn_828EA268(uVar3 - 1), *(int *)(param_1 + 8) < iVar2)) {
        *(int *)(param_1 + 8) = iVar2;
      }
      fn_8288BD68(&aiStack_30);
    } while (aiStack_30 != *(int *)(iVar1 + 0x98));
  }
  return;
}

