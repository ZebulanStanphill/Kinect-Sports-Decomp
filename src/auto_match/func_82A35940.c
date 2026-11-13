extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A34310();
extern int fn_82A35648();
extern int memcpy();


__int64 fn_82A35940(int param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  __int64 lVar3;
  int aiStack_50 [9];
  
  if ((param_2 & 0xffffffff) == 0) {
    aiStack_50[3] = 4;
    aiStack_50[1] = 0;
    aiStack_50[2] = 0;
    aiStack_50[4] = 0;
    aiStack_50[5] = 0x20000;
    aiStack_50[7] = 0x40;
    aiStack_50[6] = 0x10;
    aiStack_50[8] = 0x40000;
  }
  else {
    memcpy(aiStack_50,param_2,0x24);
    if (aiStack_50[0] != 0) goto code_r0x82a359b4;
  }
  aiStack_50[0] = 1;
code_r0x82a359b4:
  uVar1 = fn_82A34310(param_1,aiStack_50);
  lVar2 = fn_8265C940(uVar1,0x24830000);
  if (lVar2 == 0) {
    lVar3 = -0x3fffffe9;
  }
  else {
    lVar3 = fn_82A35648(param_1,aiStack_50,lVar2,uVar1);
    if (lVar3 < 0) {
      fn_8265C990(lVar2,0x24830000);
    }
    else {
      *(unsigned int *)(param_1 + 0x1b4) = 1;
    }
  }
  return lVar3;
}

