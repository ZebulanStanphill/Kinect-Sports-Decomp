void fn_82699338(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  int *piVar2;
  char cVar3;
  int iVar4;
  unsigned int uVar5;
  
  uVar1 = param_1[1];
  uVar5 = 0;
  if (uVar1 != 0) {
    iVar4 = 0;
    do {
      piVar2 = *(int **)(iVar4 + *param_1);
      cVar3 = (**(int (***)())(*piVar2 + 8))(piVar2);
      if ((cVar3 != '\0') &&
         ((**(int (***)())(*piVar2 + 0x90))(piVar2,param_2,param_3), (unsigned int)param_1[1] <= uVar5 + 1)) {
        return;
      }
      uVar5 = uVar5 + 1;
      iVar4 = iVar4 + 4;
    } while (uVar5 < uVar1);
  }
  return;
}

