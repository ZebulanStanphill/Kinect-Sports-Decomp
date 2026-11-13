extern int fn_82A39788();


void fn_82A39AA8(int param_1,int *param_2,unsigned int param_3,int param_4,unsigned __int64 param_5)

{
  unsigned char bVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  
  iVar3 = param_3 + 0x105 + param_4;
  iVar4 = iVar3 + 0x3010;
  if ((param_5 & 1) == 0) {
    if ((param_5 & 0x80000000) != 0) {
      iVar4 = iVar3 + 0xb010;
    }
  }
  else {
    iVar4 = iVar3 + 0xc81a;
  }
  *param_2 = iVar4 + 0x8000;
  if (param_1 != 0) {
    piVar5 = (int *)(param_1 + param_4);
    fn_82A39788(piVar5);
    uVar2 = 4;
    piVar5[1] = param_3;
    piVar5[0xbb6] = 0;
    piVar5[2999] = 0;
    piVar5[2] = param_3 - 1;
    piVar5[3000] = 0;
    *(unsigned char *)((int)piVar5 + 0x2eb5) = 4;
    do {
      bVar1 = *(unsigned char *)((int)piVar5 + *(unsigned char *)((int)piVar5 + 0x2eb5) + 0x2ee4);
      *(unsigned char *)((int)piVar5 + 0x2eb5) = *(unsigned char *)((int)piVar5 + 0x2eb5) + 1;
      uVar2 = (1 << (bVar1 & 0x3f)) + uVar2;
    } while (uVar2 < param_3);
    iVar3 = (int)(piVar5 + 0xc04) + param_3 + 0x105;
    *piVar5 = (int)(piVar5 + 0xc04);
    piVar5[0xbfb] = 0;
    piVar5[0xbfa] = iVar3;
    iVar3 = iVar3 + 0x8000;
    piVar5[0xbfc] = 0;
    piVar5[0xbfd] = 0;
    piVar5[0xbfe] = 0;
    piVar5[0xbff] = 0;
    piVar5[0xc00] = 0;
    piVar5[0xc01] = 0;
    piVar5[0xc02] = 0;
    if ((param_5 & 1) == 0) {
      if ((param_5 & 0x80000000) != 0) {
        piVar5[0xc03] = iVar3;
      }
    }
    else {
      piVar5[0xbfd] = iVar3;
    }
  }
  return;
}

