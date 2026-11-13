extern int fn_82CE5410();


int * fn_82CFCB58(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  iVar2 = param_2[1];
  iVar1 = fn_82CE5410();
  iVar2 = (**(int (***)())(**(int **)(iVar1 + 0x10) + 4))(*(int **)(iVar1 + 0x10),iVar2);
  iVar1 = 0;
  if (0 < (__int64)((unsigned __int64)(unsigned int)param_2[1] - 1)) {
    do {
      cVar3 = *(char *)(*param_2 + iVar1);
      if (('`' < cVar3) && (cVar3 < '{')) {
        cVar3 = cVar3 + -0x20;
      }
      *(char *)(iVar1 + iVar2) = cVar3;
      iVar1 = iVar1 + 1;
    } while (iVar1 < param_2[1] + -1);
  }
  iVar1 = param_2[1];
  *param_1 = iVar2;
  *(unsigned char *)(iVar2 + iVar1 + -1) = 0;
  iVar2 = param_2[1];
  param_1[1] = iVar2;
  param_1[2] = iVar2;
  return param_1;
}

