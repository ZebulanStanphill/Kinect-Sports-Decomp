extern int fn_82523220();
extern int fn_8265C9E0();
extern unsigned int lbl_821C1A3C;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


unsigned int * fn_824F0B80(unsigned int *param_1,int param_2,unsigned __int64 param_3)

{
  float fVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  double dVar4;
  
  param_1[1] = param_2;
  param_1[0x14] = 0;
  fVar1 = ltcg_pool_0_0f;
  dVar4 = (double)ltcg_pool_0_0f;
  param_1[0x16] = ltcg_pool_0_0f;
  param_1[0x2f] = fVar1;
  *param_1 = &lbl_821C1A3C;
  param_1[0x15] = 0;
  param_1[0x2e] = 0;
  if ((param_3 & 0xffffffff) == 0) {
    param_1[2] = 0;
  }
  else {
    uVar2 = fn_8265C9E0(0x319c0);
    if ((uVar2 & 0xffffffff) == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_82523220(uVar2,param_3,1);
    }
    param_1[2] = uVar3;
    param_1[4] = *(unsigned int *)(param_2 + 0xc0);
    param_1[5] = *(unsigned int *)(param_2 + 0xc4);
    param_1[6] = *(unsigned int *)(param_2 + 200);
    param_1[7] = (float)dVar4;
    param_1[8] = *(unsigned int *)(param_2 + 0xd0);
    param_1[9] = *(unsigned int *)(param_2 + 0xd4);
    param_1[10] = *(unsigned int *)(param_2 + 0xd8);
    param_1[0xb] = (float)dVar4;
    param_1[0xc] = *(unsigned int *)(param_2 + 0xb0);
    param_1[0xd] = *(unsigned int *)(param_2 + 0xb4);
    param_1[0xe] = *(unsigned int *)(param_2 + 0xb8);
    param_1[0xf] = (float)dVar4;
    param_1[0x10] = *(unsigned int *)(param_2 + 0xa0);
    param_1[0x11] = *(unsigned int *)(param_2 + 0xa4);
    uVar3 = lbl_821CA460;
    param_1[0x12] = *(unsigned int *)(param_2 + 0xa8);
    param_1[0x13] = uVar3;
  }
  return param_1;
}

