extern unsigned int *auStack_10;


void fn_827F1F30(unsigned short *param_1,unsigned int param_2,unsigned short *param_3)

{
  unsigned short uVar1;
  unsigned short uVar2;
  unsigned int uVar3;
  unsigned short *puVar4;
  __int64 lVar5;
  unsigned short auStack_10 [8];
  
  if (param_2 == 0) {
    auStack_10[0] = *param_3;
  }
  else {
    auStack_10[0] = 0;
    if (param_2 < 0x10) {
      lVar5 = -(unsigned __int64)(param_2 >> 4);
      uVar3 = param_2 & 0xf;
      puVar4 = auStack_10;
      param_3 = (unsigned short *)((int)param_3 - (param_2 >> 3 & 0x1ffffffe));
      if (-1 < (int)lVar5 + -1) {
        uVar2 = *param_3;
        do {
          param_3 = param_3 + -1;
          uVar1 = *param_3;
          *puVar4 = uVar2 << uVar3;
          *puVar4 = uVar1 >> (0x10 - uVar3 & 0x3f) | *puVar4;
          puVar4 = puVar4 + -1;
          lVar5 = lVar5 + -1;
          uVar2 = uVar1;
        } while (lVar5 != 0);
      }
      *puVar4 = *param_3 << uVar3;
    }
  }
  *param_1 = auStack_10[0];
  return;
}

