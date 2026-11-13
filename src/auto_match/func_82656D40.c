void fn_82656D40(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar3;
  unsigned __int64 uVar2;
  unsigned int uVar4;
  unsigned int uVar6;
  unsigned __int64 uVar5;
  
  uVar6 = param_2 + *(int *)(param_1 + 0x17c);
  uVar1 = *(unsigned int *)(param_1 + 0x254) >> 0x14 & 0x3f;
  *(unsigned int *)(param_1 + 0x17c) = uVar6;
  uVar4 = (*(unsigned short *)(param_1 + 0xe) + 0xac) * 0x200 + uVar6;
  if (uVar1 == (*(unsigned int *)(param_1 + 0x254) >> 0xe & 0x3f) - 1) {
    uVar3 = *(unsigned int *)(param_1 + 0x180);
  }
  else {
    uVar3 = 0xfff00000;
  }
  if (uVar6 <= uVar4) {
    if (uVar4 <= uVar3) {
      return;
    }
    if (uVar3 == 0) {
      return;
    }
  }
  *(unsigned int *)((uVar1 + 0x2e) * 4 + param_1) = uVar6;
  uVar1 = *(unsigned int *)(param_1 + 0x254);
  uVar2 = (unsigned __int64)(uVar1 >> 0xe) & 0x3f;
  uVar5 = ((unsigned __int64)(uVar1 >> 0x14) & 0x3f) + 1;
  trapWord(6,uVar2,0);
  uVar2 = uVar5 - (__int64)(int)(uVar5 / uVar2) * (__int64)(int)uVar2 & 0x3f;
  *(unsigned int *)(param_1 + 0x254) = (unsigned int)(uVar2 << 0x14) | uVar1 & 0xfc0fffff;
  if (uVar2 == 0) {
    *(unsigned int *)(param_1 + 0x17c) = 0x800;
    *(unsigned char *)(param_1 + 0x260) = *(unsigned char *)(param_1 + 0x260) | 0x20;
    return;
  }
  *(unsigned int *)(param_1 + 0x17c) = 0;
  return;
}

