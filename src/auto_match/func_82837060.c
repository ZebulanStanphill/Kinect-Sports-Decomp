void fn_82837060(unsigned int *param_1,unsigned int *param_2,__int64 param_3,__int64 param_4,int param_5,
                  int param_6,unsigned int param_7,unsigned int param_8)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  
  uVar2 = param_3 - 7;
  uVar5 = param_4 - 7;
  uVar1 = ((int)((uVar2 & 0xffffffff) >> 0x1f) + -1 + (unsigned int)(uVar2 == 0) & (unsigned int)uVar2) + 7 &
          0xfffffff8;
  uVar3 = (int)param_3 + param_5;
  *param_2 = uVar1;
  param_2[1] = ((int)((uVar5 & 0xffffffff) >> 0x1f) + -1 + (unsigned int)(uVar5 == 0) & (unsigned int)uVar5) + 7 &
               0xfffffff8;
  if ((int)param_7 <= (int)uVar3) {
    uVar3 = param_7;
  }
  uVar4 = (int)param_4 + param_6;
  uVar3 = uVar3 + 7 & 0xfffffff8;
  param_2[2] = uVar3;
  if ((int)param_8 <= (int)uVar4) {
    uVar4 = param_8;
  }
  uVar4 = uVar4 + 7 & 0xfffffff8;
  param_2[3] = uVar4;
  if (((int)param_7 < (int)uVar3) || ((int)param_8 < (int)uVar4)) {
    param_2[2] = param_7;
    param_2[3] = param_8;
  }
  *param_1 = uVar1;
  param_1[1] = param_2[1];
  return;
}

