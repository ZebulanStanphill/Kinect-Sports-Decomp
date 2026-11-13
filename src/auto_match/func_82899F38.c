extern int fn_8240D928();
extern int fn_82898430();
extern int fn_828997F0();


unsigned __int64 fn_82899F38(int param_1,int param_2)

{
  int iVar3;
  int *piVar4;
  unsigned __int64 uVar1;
  char cVar5;
  __int64 lVar2;
  
  if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
     (iVar3 = (**(int (***)())(**(int **)(param_1 + 0x20) + 4))(), iVar3 == 0)) {
    if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
       (iVar3 = (**(int (***)())(**(int **)(param_1 + 0x20) + 0x14))(), iVar3 == 0)) {
      return 0;
    }
    if (*(int **)(param_1 + 0x20) == (int *)0x0) {
      lVar2 = 0;
    }
    else {
      lVar2 = (**(int (***)())(**(int **)(param_1 + 0x20) + 0x14))();
    }
    if (*(char *)(param_2 + 0x26) == '\0') {
      uVar1 = fn_8240D928(param_2);
      cVar5 = fn_82898430(param_1,param_2);
      if ((cVar5 == '\0') &&
         (cVar5 = fn_828997F0(lVar2 + 0x28,uVar1,lVar2 + 0xc,uVar1), cVar5 != '\0')) {
        return 1;
      }
      return 0;
    }
  }
  else {
    if (*(int **)(param_1 + 0x20) == (int *)0x0) {
      piVar4 = (int *)0x0;
    }
    else {
      piVar4 = (int *)(**(int (***)())(**(int **)(param_1 + 0x20) + 4))();
    }
    if (*(char *)(param_2 + 0x26) == '\0') {
      uVar1 = fn_8240D928(param_2);
      cVar5 = fn_82898430(param_1,param_2);
      if ((cVar5 == '\0') &&
         (cVar5 = (**(int (***)())(*piVar4 + 0x5c))(piVar4,uVar1,param_1 + 4), cVar5 != '\0')) {
        return 1;
      }
      return 0;
    }
  }
  return 1;
}

