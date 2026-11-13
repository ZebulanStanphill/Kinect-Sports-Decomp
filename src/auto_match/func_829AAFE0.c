extern int fn_82F68CC0();
extern unsigned int lbl_820520E4;


void fn_829AAFE0(int param_1,int param_2,unsigned __int64 param_3)

{
  unsigned char bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  __int64 lVar5;
  
  lVar5 = 4;
  iVar2 = 0;
  iVar4 = 0;
  do {
    iVar3 = iVar4;
    bVar1 = *(unsigned char *)(param_1 + 0x60c + iVar2);
    iVar2 = iVar2 + 1;
    if (((bVar1 < 0x29) || (0x7a < bVar1)) || ((0x5a < bVar1 && (bVar1 < 0x61)))) {
      *(unsigned char *)(iVar3 + param_2) = 0x5b;
      *(unsigned char *)(iVar3 + 1 + param_2) = (&lbl_820520E4)[(int)(unsigned int)bVar1 >> 4];
      *(unsigned char *)(iVar3 + 2 + param_2) = (&lbl_820520E4)[bVar1 & 0xf];
      iVar3 = iVar3 + 3;
      *(unsigned char *)(iVar3 + param_2) = 0x5d;
    }
    else {
      *(unsigned char *)(iVar3 + param_2) = bVar1;
    }
    iVar4 = iVar3 + 1;
    lVar5 = lVar5 + -1;
  } while (lVar5 != 0);
  if ((param_3 & 0xffffffff) == 0) {
    *(unsigned char *)(iVar4 + param_2) = 0;
  }
  else {
    *(unsigned char *)(iVar4 + param_2) = 0x3a;
    *(unsigned char *)(iVar3 + 2 + param_2) = 0x20;
    param_2 = iVar3 + 3 + param_2;
    fn_82F68CC0(param_2,param_3,0x40);
    *(unsigned char *)(param_2 + 0x3f) = 0;
  }
  return;
}

