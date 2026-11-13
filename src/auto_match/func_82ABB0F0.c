extern int fn_82ABA770();
extern int fn_82ABAB58();


__int64 fn_82ABB0F0(unsigned int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                      unsigned __int64 param_5,int *param_6,unsigned __int64 param_7)

{
  __int64 lVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  int iVar6;
  int aiStack_30 [12];
  
  *param_1 = 0xc;
  aiStack_30[0] = 1;
  lVar1 = fn_82ABA770(param_1 + 1,param_2,param_3,aiStack_30,param_7);
  uVar4 = 0xe40000;
  uVar5 = -(unsigned int)((param_4 & 0xf000000) == 0xd000000) & 0x10000;
  *(unsigned int *)lVar1 = 0x440020;
  if ((param_4 & 0xff0000) == 0xe40000) {
    lVar1 = lVar1 + 4;
    *(unsigned int *)lVar1 = uVar5 | 0x3210;
  }
  else {
    uVar2 = fn_82ABAB58(param_4);
    lVar1 = lVar1 + 4;
    *(unsigned int *)lVar1 = uVar2 | uVar5;
  }
  lVar1 = lVar1 + 4;
  iVar6 = aiStack_30[0] + 2;
  if ((param_5 & 0xffffffff) == (uVar4 & 0xffffffff)) {
    aiStack_30[0] = aiStack_30[0] + 3;
    *(unsigned int *)lVar1 = 0x40021;
  }
  else {
    *(unsigned int *)lVar1 = 0x440021;
    uVar3 = fn_82ABAB58(param_5);
    lVar1 = lVar1 + 4;
    *(unsigned int *)lVar1 = uVar3;
    aiStack_30[0] = iVar6 + 2;
  }
  *param_6 = *param_6 + aiStack_30[0];
  return lVar1 + 4;
}

