extern int fn_8240D928();
extern int fn_82897BA8();
extern int fn_8289AC08();
extern int fn_828A1318();


void fn_828AB5B8(int param_1,unsigned int param_2,unsigned __int64 param_3)

{
  int iVar1;
  int iVar2;
  char cVar3;
  
  if ((((*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x5c) <= param_2) &&
       (param_2 <= *(unsigned int *)(*(int *)(param_1 + 0x18) + 0x60))) &&
      (*(int **)(param_1 + 0x20) != (int *)0x0)) &&
     (iVar1 = (**(int (***)())(**(int **)(param_1 + 0x20) + 0x14))(), iVar1 != 0)) {
    if (*(int **)(param_1 + 0x20) == (int *)0x0) {
      iVar1 = 0;
    }
    else {
      iVar1 = (**(int (***)())(**(int **)(param_1 + 0x20) + 0x14))();
    }
    iVar2 = fn_8240D928(param_3);
    iVar2 = (iVar2 + 5) * 4;
    if (param_2 != *(unsigned int *)(iVar2 + iVar1)) {
      fn_8289AC08(param_1,1,0,1,param_3);
      *(unsigned int *)(iVar2 + iVar1) = param_2;
      fn_8289AC08(param_1,1,1,1,param_3);
      cVar3 = fn_82897BA8(*(unsigned int *)(param_1 + 0x18));
      if (cVar3 == '\0') {
        fn_828A1318(*(unsigned int *)(param_1 + 0x28),param_1);
      }
    }
  }
  return;
}

