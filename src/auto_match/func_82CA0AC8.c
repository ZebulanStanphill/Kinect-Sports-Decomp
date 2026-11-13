extern unsigned int lbl_83232478;


void fn_82CA0AC8(unsigned __int64 param_1,int param_2,int param_3,int param_4,__int64 param_5,
                  __int64 param_6)

{
  int iVar1;
  int iVar2;
  __int64 lVar3;
  
  iVar1 = lbl_83232478;
  if (param_2 == 0) {
    return;
  }
  if (param_3 == 0) {
    return;
  }
  if (param_4 == 0) {
    return;
  }
  iVar2 = 0;
  if (0 < (int)param_5) {
    do {
      *(unsigned char *)(iVar2 + param_2) =
           *(unsigned char *)((*(unsigned char *)(iVar2 + param_2) - 0x40) * 2 + iVar1);
      iVar2 = iVar2 + 1;
      param_5 = param_5 + -1;
    } while (param_5 != 0);
  }
  iVar2 = 0;
  lVar3 = param_6;
  if (0 < (int)param_6) {
    do {
      *(unsigned char *)(iVar2 + param_3) =
           *(unsigned char *)((*(unsigned char *)(iVar2 + param_3) - 0x40) * 2 + iVar1);
      iVar2 = iVar2 + 1;
      lVar3 = lVar3 + -1;
    } while (lVar3 != 0);
  }
  iVar2 = 0;
  if (0 < (int)param_6) {
    do {
      *(unsigned char *)(iVar2 + param_4) =
           *(unsigned char *)((*(unsigned char *)(iVar2 + param_4) - 0x40) * 2 + iVar1);
      iVar2 = iVar2 + 1;
      param_6 = param_6 + -1;
    } while (param_6 != 0);
    return;
  }
  return;
}

