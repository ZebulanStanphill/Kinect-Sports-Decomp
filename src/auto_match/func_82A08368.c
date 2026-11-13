extern unsigned int fStack_18;
extern unsigned int fStack_1c;
extern unsigned int fStack_20;
extern int fn_82A05578();
extern unsigned int lbl_821AAD20;


unsigned char fn_82A08368(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  __int64 lVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  int aiStack_30 [4];
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  
  puVar1 = (unsigned int *)((int)((param_3 & 0xffffffff) << 4) + param_1 & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar2 = (unsigned int *)((int)&fStack_20 + in_r0 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  if (((fStack_20 != lbl_821AAD20) || (fStack_1c != lbl_821AAD20)) || (fStack_18 != lbl_821AAD20)) {
    if (*(int *)((int)((param_3 + 0x103c & 0xffffffff) << 2) + param_1) == 2) {
      aiStack_30[0] = 0;
      lVar3 = fn_82A05578(param_2,7,7,aiStack_30);
      if (aiStack_30[0] == 0x31) {
        return -(lVar3 != 0x31) & 1;
      }
    }
  }
  return 1;
}

