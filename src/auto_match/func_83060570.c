extern int fn_830602B8();


unsigned __int64 fn_83060570(int *param_1,unsigned int *param_2)

{
  int iVar1;
  char cVar3;
  unsigned __int64 uVar2;
  int iVar4;
  
  if ((param_1[7] == param_1[6]) &&
     ((*(char *)(param_1 + 9) != '\0' ||
      (cVar3 = fn_830602B8(param_1,(unsigned __int64)(unsigned int)param_1[8] + (unsigned __int64)(unsigned int)param_1[7]),
      cVar3 == '\0')))) {
    uVar2 = 0xffffffffffffffff;
  }
  else {
    iVar1 = param_1[6];
    iVar4 = *param_1;
    *(unsigned int *)(iVar1 * 0xc + iVar4) = *param_2;
    iVar4 = iVar1 * 0xc + iVar4;
    *(unsigned int *)(iVar4 + 4) = param_2[1];
    *(unsigned int *)(iVar4 + 8) = param_2[2];
    uVar2 = (unsigned __int64)(unsigned int)param_1[6];
    param_1[6] = param_1[6] + 1;
  }
  return uVar2;
}

