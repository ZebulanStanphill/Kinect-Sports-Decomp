void fn_82ED1E18(unsigned __int64 param_1,unsigned char *param_2,int param_3,int param_4,int param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  __int64 lVar4;
  
  iVar2 = 0;
  iVar1 = 0;
  lVar4 = 8;
  do {
    iVar3 = param_4 + param_5;
    iVar2 = (unsigned int)*(unsigned char *)(param_3 + 1 + param_4) + (unsigned int)*(unsigned char *)(param_3 + 2 + param_4) +
            (unsigned int)*(unsigned char *)(param_3 + 3 + param_4) + (unsigned int)*(unsigned char *)(param_3 + 4 + param_4) +
            (unsigned int)*(unsigned char *)(param_3 + 5 + param_4) + (unsigned int)*(unsigned char *)(param_3 + 6 + param_4) +
            (unsigned int)*(unsigned char *)(param_3 + 7 + param_4) + (unsigned int)*(unsigned char *)(param_3 + 8 + param_4) +
            (unsigned int)*(unsigned char *)(param_3 + 9 + param_4) + (unsigned int)*(unsigned char *)(param_3 + 10 + param_4) +
            (unsigned int)*(unsigned char *)(param_3 + 0xb + param_4) + (unsigned int)*(unsigned char *)(param_3 + 0xc + param_4) +
            (unsigned int)*(unsigned char *)(param_3 + 0xd + param_4) + (unsigned int)*(unsigned char *)(param_3 + 0xe + param_4) +
            (unsigned int)*(unsigned char *)(param_3 + 0xf + param_4) + (unsigned int)*(unsigned char *)(param_4 + param_3) + iVar2;
    param_4 = iVar3 + param_5;
    iVar1 = (unsigned int)*(unsigned char *)(param_3 + 1 + iVar3) + (unsigned int)*(unsigned char *)(param_3 + 2 + iVar3) +
            (unsigned int)*(unsigned char *)(param_3 + 3 + iVar3) + (unsigned int)*(unsigned char *)(param_3 + 4 + iVar3) +
            (unsigned int)*(unsigned char *)(param_3 + 5 + iVar3) + (unsigned int)*(unsigned char *)(param_3 + 6 + iVar3) +
            (unsigned int)*(unsigned char *)(param_3 + 7 + iVar3) + (unsigned int)*(unsigned char *)(param_3 + 8 + iVar3) +
            (unsigned int)*(unsigned char *)(param_3 + 9 + iVar3) + (unsigned int)*(unsigned char *)(param_3 + 10 + iVar3) +
            (unsigned int)*(unsigned char *)(param_3 + 0xb + iVar3) + (unsigned int)*(unsigned char *)(param_3 + 0xc + iVar3) +
            (unsigned int)*(unsigned char *)(param_3 + 0xd + iVar3) + (unsigned int)*(unsigned char *)(param_3 + 0xe + iVar3) +
            (unsigned int)*(unsigned char *)(param_3 + 0xf + iVar3) + (unsigned int)*(unsigned char *)(iVar3 + param_3) + iVar1;
    lVar4 = lVar4 + -1;
  } while (lVar4 != 0);
  *param_2 = (char)((unsigned int)(iVar1 + iVar2) >> 8);
  return;
}

