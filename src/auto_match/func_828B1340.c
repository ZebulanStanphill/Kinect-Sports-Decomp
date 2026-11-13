extern int fn_8289D8D0();
extern int fn_828B0528();
extern int fn_828B0ED0();


unsigned __int64 fn_828B1340(unsigned __int64 param_1)

{
  char cVar3;
  int iVar1;
  unsigned int uVar2;
  
  cVar3 = fn_828B0528();
  if (cVar3 != '\0') {
    iVar1 = fn_8289D8D0(param_1);
    uVar2 = fn_828B0ED0((unsigned __int64)*(unsigned int *)(*(int *)(*(int *)(iVar1 + 100) + 0x18) + 0x4c) + 0x38
                          ,0,0);
    if ((uVar2 < 8) && (uVar2 != 0)) {
      return 1;
    }
  }
  return 0;
}

