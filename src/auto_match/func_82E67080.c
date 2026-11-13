void fn_82E67080(int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  uVar1 = param_1[0xb];
  uVar2 = param_1[0xf];
  iVar3 = param_1[1];
  iVar4 = *param_1;
  iVar5 = param_1[2];
  param_1[7] = iVar3;
  param_1[0x1e] = iVar3;
  param_1[6] = iVar4;
  param_1[8] = iVar5;
  param_1[0x1d] = iVar4;
  param_1[0x1f] = iVar5;
  param_1[9] = iVar4;
  param_1[0x11] = 0;
  param_1[0x12] = 0;
  *(unsigned __int64 *)(param_1 + 0x18) = (unsigned __int64)(unsigned int)param_1[0x1a] * (unsigned __int64)(unsigned int)param_1[0x14];
  *(unsigned __int64 *)(param_1 + 0x16) = (unsigned __int64)(unsigned int)param_1[0x1a] * (unsigned __int64)(unsigned int)param_1[0x14];
  *(unsigned char *)(param_1 + 0x20) = 0;
  *(unsigned char *)((int)param_1 + 0x81) = 0;
  param_1[0x21] = 0;
  param_1[0x22] = 0;
  param_1[0x23] = 0;
  param_1[0x24] = 0;
  param_1[0x26] = 0;
  param_1[0x27] = 0;
  param_1[0x2a] = 0;
  param_1[0x2b] = 0;
  param_1[3] = (int)uVar1 / (int)uVar2 + iVar4 + uVar1;
  trapWord(6,(unsigned __int64)uVar2,0);
  param_1[4] = iVar3 + uVar2 * 4 + 4;
  trapWord(5,(unsigned __int64)uVar2 &
             ~((((unsigned __int64)uVar1 & 0x7fffffff) << 1 | (unsigned __int64)(uVar1 >> 0x1f)) - 1),0xffff);
  param_1[5] = iVar5 + uVar2 * 4 + 4;
  param_1[0x2c] = 0;
  param_1[0x2d] = 0;
  param_1[0x2e] = 0;
  param_1[0x2f] = 0;
  param_1[0x30] = 0;
  param_1[0x31] = 0;
  param_1[0x32] = 0;
  return;
}

