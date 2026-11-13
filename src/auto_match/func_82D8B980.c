typedef unsigned char bool;
#define true 1
#define false 0


void fn_82D8B980(int param_1,char param_2)

{
  int iVar1;
  unsigned short uVar2;
  unsigned short uVar3;
  bool bVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  
  if (param_2 == '\0') {
    uVar8 = 0;
    uVar7 = 0;
    uVar6 = 0;
    uVar5 = 0;
    bVar4 = false;
  }
  else {
    iVar1 = *(int *)(param_1 + 8);
    bVar4 = true;
    uVar5 = *(unsigned int *)(param_1 + 0xd4);
    if (iVar1 == 0) {
      uVar8 = 0;
      uVar7 = 0;
      uVar6 = 0;
    }
    else {
      uVar8 = (unsigned int)*(unsigned char *)(iVar1 + 0x307);
      uVar7 = (unsigned __int64)*(unsigned char *)(iVar1 + 0x306);
      uVar6 = (unsigned __int64)*(unsigned char *)(iVar1 + 0x305);
    }
  }
  if (bVar4) {
    *(char *)(param_1 + 0xe9) = (char)(uVar5 & 0xf);
    if ((uVar8 & 3) < (uVar5 & 3)) {
      uVar2 = (unsigned short)((~uVar6 & 0xffffffff) << 0xe);
    }
    else {
      uVar2 = (unsigned short)(uVar6 << 0xe);
    }
    if (uVar8 < (uVar5 & 0xf)) {
      uVar3 = (unsigned short)((~uVar7 & 0xffffffff) << 0xe);
    }
    else {
      uVar3 = (unsigned short)(uVar7 << 0xe);
    }
    *(unsigned short *)(param_1 + 0xea) = *(unsigned short *)(param_1 + 0xea) & 0x3fff | uVar2;
    *(unsigned short *)(param_1 + 0xec) = *(unsigned short *)(param_1 + 0xec) & 0x3fff | uVar3;
    return;
  }
  *(unsigned short *)(param_1 + 0xea) = 0;
  *(unsigned char *)(param_1 + 0xe9) = 0xff;
  *(unsigned short *)(param_1 + 0xec) = 0;
  return;
}

