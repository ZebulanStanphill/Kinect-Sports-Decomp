void fn_82C507A8(int param_1,int param_2,int param_3,unsigned int *param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  
  uVar1 = param_2 + 0xfU & 0xfffffff0;
  uVar4 = param_3 + 0xfU & 0xfffffff0;
  if (*(int *)(param_1 + 0xf8c) != 0) { uVar2 = (int)uVar1 >> 2; uVar3 = uVar4; } else { uVar2 = (int)uVar1 >> 1; uVar3 = (int)uVar4 >> 1; }
  if (*(int *)(param_1 + 0x3cb0) == 7) {
    uVar4 = uVar4 + 0x1f & 0xffffffe0;
    uVar3 = (int)uVar4 >> 1;
  }
  *param_4 = uVar1;
  param_4[1] = uVar4;
  param_4[2] = uVar2;
  param_4[3] = uVar3;
  param_4[4] = 0x20;
  param_4[5] = 0x10;
  return;
}

