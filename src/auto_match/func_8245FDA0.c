extern int fn_82460D38();


void fn_8245FDA0(int param_1,int param_2,unsigned int *param_3,int *param_4,unsigned int *param_5,
                  unsigned int *param_6,unsigned __int64 param_7)

{
  float fVar1;
  unsigned __int64 uVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = 0;
  iVar4 = 0x10;
  do {
    if (*(int *)(iVar4 + *(int *)(param_1 + 0x28)) == param_2) goto LAB_8245fde0;
    iVar4 = iVar4 + 4;
    iVar3 = iVar3 + 1;
  } while (iVar4 < 0x18);
  iVar3 = -1;
LAB_8245fde0:
  iVar4 = *(int *)(param_1 + 0x50);
  *param_4 = (int)*(float *)(iVar4 + 0xd8);
  if (iVar3 == 0) {
    fVar1 = *(float *)(iVar4 + 0xdc);
  }
  else if (iVar3 == 1) {
    fVar1 = *(float *)(iVar4 + 0xe0);
  }
  else {
    fVar1 = *(float *)(iVar4 + 0xe4);
  }
  *param_5 = (int)(__int64)fVar1;
  *param_3 = *(unsigned int *)(*(int *)(param_1 + 0x3c) + iVar3 * 0x11c + 0x108);
  *param_6 = *(unsigned int *)(*(int *)(param_1 + 0x3c) + iVar3 * 0x11c + 0x10c);
  if (iVar3 == 0) {
    uVar2 = 0xffffffff821bbcc4;
  }
  else {
    uVar2 = 0xffffffff821bbcd4;
  }
  fn_82460D38(param_1,uVar2,param_7,0x20);
  return;
}

