extern int fn_82690288();


int fn_826902E0(unsigned __int64 param_1,int param_2)

{
  char cVar1;
  int iVar2;
  
  iVar2 = param_2;
  if (param_2 != 0) {
    do {
      cVar1 = fn_82690288(iVar2);
      if (cVar1 != '\0') {
        return iVar2;
      }
      iVar2 = *(int *)(iVar2 + 4);
    } while (iVar2 != param_2);
  }
  return 0;
}

