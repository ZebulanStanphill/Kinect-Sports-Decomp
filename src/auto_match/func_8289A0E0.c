extern int fn_82898540();
extern int fn_82898C40();


unsigned __int64 fn_8289A0E0(int param_1)

{
  int iVar1;
  char cVar2;
  
  if ((*(int **)(param_1 + 0x20) == (int *)0x0) ||
     (iVar1 = (**(int (***)())(**(int **)(param_1 + 0x20) + 0xc))(), iVar1 == 0)) {
    if ((*(int **)(param_1 + 0x20) != (int *)0x0) &&
       (iVar1 = (**(int (***)())(**(int **)(param_1 + 0x20) + 0x10))(), iVar1 != 0)) {
      return 1;
    }
  }
  else if (*(int *)(iVar1 + 4) != 0) {
    if (*(char *)(*(int *)(iVar1 + 4) + 0x26) != '\0') {
      return 1;
    }
    cVar2 = fn_82898540(param_1);
    if ((cVar2 == '\0') && (cVar2 = fn_82898C40(iVar1 + 0xc,0,param_1 + 4,0), cVar2 != '\0')) {
      return 1;
    }
    return 0;
  }
  return 0;
}

