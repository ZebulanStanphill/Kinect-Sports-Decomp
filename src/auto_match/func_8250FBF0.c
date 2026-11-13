extern unsigned int fStack_10;


void fn_8250FBF0(unsigned __int64 *param_1,unsigned __int64 *param_2)

{
  unsigned __int64 *puVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 *puVar6;
  float fStack_10;
  
  puVar1 = param_1;
  if (param_1 == param_2) {
    return;
  }
  while (puVar6 = puVar1 + 4, puVar6 != param_2) {
    uVar5 = *puVar6;
    uVar4 = puVar1[5];
    uVar3 = puVar1[6];
    uVar2 = puVar1[7];
    fStack_10 = (float)((unsigned __int64)uVar3 >> 0x20);
    puVar1 = puVar6;
    if (*(float *)(param_1 + 2) <= fStack_10) {
      while (fStack_10 < *(float *)(puVar6 + -2)) {
        *puVar6 = puVar6[-4];
        puVar6[1] = puVar6[-3];
        puVar6[2] = puVar6[-2];
        puVar6[3] = puVar6[-1];
        puVar6 = puVar6 + -4;
      }
      *puVar6 = uVar5;
      puVar6[1] = uVar4;
      puVar6[2] = uVar3;
      puVar6[3] = uVar2;
    }
    else {
      while (param_1 != puVar6) {
        *puVar6 = puVar6[-4];
        puVar6[1] = puVar6[-3];
        puVar6[2] = puVar6[-2];
        puVar6[3] = puVar6[-1];
        puVar6 = puVar6 + -4;
      }
      *param_1 = uVar5;
      param_1[1] = uVar4;
      param_1[2] = uVar3;
      param_1[3] = uVar2;
    }
  }
  return;
}

