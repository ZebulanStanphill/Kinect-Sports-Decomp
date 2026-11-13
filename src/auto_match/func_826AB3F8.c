#define true 1


unsigned int fn_826AB3F8(int *param_1,int *param_2,unsigned int param_3)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  int iVar5;
  __int64 lVar6;
  
  iVar1 = *param_1;
  iVar5 = param_3 * 0xc + iVar1;
  if (*(int *)(iVar5 + 8) != -2) {
    iVar4 = 4;
    uVar3 = 0x1505;
    lVar6 = 4;
    do {
      iVar4 = iVar4 + -1;
      uVar3 = (unsigned int)*(unsigned char *)(iVar5 + 0xc + iVar4) + uVar3 * 0x1003f;
      lVar6 = lVar6 + -1;
    } while (lVar6 != 0);
    uVar2 = param_3;
    if ((uVar3 & *(unsigned int *)(iVar1 + 4)) == param_3) {
      while( true ) {
        iVar4 = 4;
        uVar3 = 0x1505;
        lVar6 = 4;
        do {
          iVar4 = iVar4 + -1;
          uVar3 = (unsigned int)*(unsigned char *)(iVar5 + 0xc + iVar4) + uVar3 * 0x1003f;
          lVar6 = lVar6 + -1;
        } while (lVar6 != 0);
        if (((uVar3 & *(unsigned int *)(iVar1 + 4)) == param_3) && (*(int *)(iVar5 + 0xc) == *param_2)) {
          return uVar2;
        }
        uVar2 = *(unsigned int *)(iVar5 + 8);
        if (uVar2 == 0xffffffff) break;
        iVar5 = uVar2 * 0xc + iVar1;
      }
    }
  }
  return 0xffffffff;
}

