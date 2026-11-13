void fn_82ED1D40(unsigned __int64 param_1,unsigned char *param_2,int param_3,int param_4,int param_5)

{
  __int64 lVar1;
  __int64 lVar2;
  int iVar3;
  __int64 lVar4;
  
  lVar2 = 0;
  lVar1 = 0;
  lVar4 = 4;
  do {
    iVar3 = param_4 + param_5;
    lVar2 = (unsigned __int64)*(unsigned char *)(param_3 + 1 + param_4) +
            (unsigned __int64)*(unsigned char *)(param_3 + 2 + param_4) +
            (unsigned __int64)*(unsigned char *)(param_3 + 3 + param_4) +
            (unsigned __int64)*(unsigned char *)(param_3 + 4 + param_4) +
            (unsigned __int64)*(unsigned char *)(param_3 + 5 + param_4) +
            (unsigned __int64)*(unsigned char *)(param_3 + 6 + param_4) +
            (unsigned __int64)*(unsigned char *)(param_3 + 7 + param_4) + (unsigned __int64)*(unsigned char *)(param_4 + param_3) +
            lVar2;
    param_4 = iVar3 + param_5;
    lVar1 = (unsigned __int64)*(unsigned char *)(param_3 + 1 + iVar3) + (unsigned __int64)*(unsigned char *)(param_3 + 2 + iVar3) +
            (unsigned __int64)*(unsigned char *)(param_3 + 3 + iVar3) + (unsigned __int64)*(unsigned char *)(param_3 + 4 + iVar3) +
            (unsigned __int64)*(unsigned char *)(param_3 + 5 + iVar3) + (unsigned __int64)*(unsigned char *)(param_3 + 6 + iVar3) +
            (unsigned __int64)*(unsigned char *)(param_3 + 7 + iVar3) + (unsigned __int64)*(unsigned char *)(iVar3 + param_3) +
            lVar1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  *param_2 = (char)((lVar1 + lVar2 & 0xffffffffU) >> 6);
  return;
}

