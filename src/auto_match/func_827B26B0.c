extern int fn_827B11C8();


int fn_827B26B0(int *param_1,int param_2)

{
  unsigned int iVar1;
  int iVar2;
  unsigned int uVar3;
  int lVar4;
  
  iVar1 = *param_1;
  if (iVar1 != 0) {
    iVar2 = 2;
    uVar3 = 0x1505;
    lVar4 = 2;
    do {
      iVar2 = iVar2 + -1;
      uVar3 = (unsigned int)*(unsigned char *)(iVar2 + param_2) + uVar3 * 0x1003f;
      lVar4 = lVar4 + -1;
    } while (lVar4 != 0);
    iVar2 = fn_827B11C8(param_1,param_2,*(unsigned int *)(iVar1 + 4) & uVar3);
    if (iVar2 >= 0) {
      return iVar2 * 0xc + iVar1 + 0x10;
    }
  }
  return 0;
}

