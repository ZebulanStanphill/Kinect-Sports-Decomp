extern int fn_82E76C40();
extern int fn_82E798F8();


unsigned __int64 fn_82E7AB58(int param_1)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  
  uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x148);
  *(unsigned int *)(param_1 + 0x14c) = 1;
  *(unsigned char *)(param_1 + 0x150) = 3;
  if (*(unsigned int *)(param_1 + 0x148) == 0xffffffff) {
    *(unsigned char *)(param_1 + 0x151) = 2;
  }
  else {
    *(unsigned char *)(param_1 + 0x151) = 0;
  }
  *(unsigned char *)(param_1 + 0x153) = 0;
  *(unsigned char *)(param_1 + 0x152) = 2;
  *(unsigned int *)(param_1 + 0x154) = 0;
  *(unsigned char *)(param_1 + 0x158) = 4;
  *(unsigned char *)(param_1 + 0x159) = 3;
  *(unsigned char *)(param_1 + 0x15a) = 1;
  *(unsigned char *)(param_1 + 0x15b) = 1;
  *(unsigned char *)(param_1 + 0x15c) = 1;
  *(unsigned char *)(param_1 + 0x15d) = 1;
  *(unsigned int *)(param_1 + 0x164) = 0;
  lVar1 = fn_82E76C40(param_1);
  if ((uVar4 & 0xffffffff) < (lVar1 + 3U & 0xffffffff)) {
    uVar2 = 0xffffffffc00d3a9a;
  }
  else {
    lVar5 = (uVar4 + 1) - (uVar4 + (uVar4 + 1 == 0));
    if (lVar5 == 0) {
      uVar3 = fn_82E798F8(param_1);
      *(unsigned int *)(param_1 + 0x160) = uVar3;
      *(unsigned int *)(param_1 + 0x148) = uVar3;
    }
    else {
      *(unsigned int *)(param_1 + 0x160) = 0;
    }
    if ((int)lVar5 == 0) {
      *(unsigned int *)(param_1 + 0x168) = 0;
      *(unsigned char *)(param_1 + 0x152) = 0;
    }
    else {
      *(int *)(param_1 + 0x168) = *(int *)(param_1 + 0x148) - (int)(lVar1 + 3U);
    }
    uVar2 = 0;
  }
  return uVar2;
}

