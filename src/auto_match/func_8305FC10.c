extern int fn_83066788();


unsigned __int64 fn_8305FC10(unsigned __int64 param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  int iVar1;
  int iVar2;
  __int64 lVar3;
  
  iVar2 = 0;
  if (0 < (int)param_2[6]) {
    lVar3 = 0;
    do {
      iVar1 = fn_83066788(param_1,param_3,lVar3 + (unsigned __int64)*param_2);
      if (iVar1 != 2) {
        return 0;
      }
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + 0xc;
    } while (iVar2 < (int)param_2[6]);
  }
  return 1;
}

