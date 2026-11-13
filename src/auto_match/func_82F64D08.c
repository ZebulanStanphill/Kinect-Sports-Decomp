__int64 __ascii_stricmp(unsigned short *param_1,unsigned short *param_2)

{
  int iVar1;
  unsigned __int64 uVar2;
  __int64 lVar3;
  
  uVar2 = (unsigned __int64)*param_2;
  lVar3 = *param_1 - uVar2;
  if (lVar3 == 0) {
    iVar1 = (int)param_1 - (int)param_2;
    do {
      if (uVar2 == 0) break;
      param_2 = param_2 + 1;
      uVar2 = (unsigned __int64)*param_2;
      lVar3 = *(unsigned short *)(iVar1 + (int)param_2) - uVar2;
    } while (lVar3 == 0);
  }
  if ((int)lVar3 < 0) {
    lVar3 = -1;
  }
  else if (0 < (int)lVar3) {
    lVar3 = 1;
  }
  return lVar3;
}

