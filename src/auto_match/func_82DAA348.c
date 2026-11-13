extern int fn_82CE5410();


int * fn_82DAA348(__int64 param_1,unsigned __int64 param_2)

{
  int iVar1;
  int *piVar2;
  __int64 lVar3;
  __int64 lVar4;
  int *piVar5;
  
  iVar1 = fn_82CE5410();
  piVar2 = (int *)(**(int (***)())(**(int **)(iVar1 + 0x10) + 4))
                            (*(int **)(iVar1 + 0x10),
                             ((__int64)(short)param_1 + 3U & 0x3fffffff) << 2);
  lVar4 = (param_2 & 0xfffffff) * 0x10;
  iVar1 = (int)param_1;
  piVar2[1] = iVar1;
  *piVar2 = iVar1;
  lVar3 = lVar4 + 0x20;
  piVar5 = piVar2 + 3;
  piVar2[2] = (int)lVar3;
  if (0 < iVar1) {
    do {
      iVar1 = fn_82CE5410();
      iVar1 = (**(int (***)())(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),lVar3);
      *piVar5 = iVar1;
      if (iVar1 != 0) {
        *(int *)(iVar1 + 0x18) = (int)lVar4;
        *(unsigned int *)(iVar1 + 0x14) = 0;
        *(unsigned int *)(iVar1 + 0x10) = 0x10;
      }
      param_1 = param_1 + -1;
      piVar5 = piVar5 + 1;
    } while (param_1 != 0);
  }
  return piVar2;
}

