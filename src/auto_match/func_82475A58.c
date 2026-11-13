extern int fn_82461E68();
extern int fn_8251FA58();
extern int fn_82529A38();
extern int fn_8252AFE0();
extern int fn_82587AC0();
extern int fn_8265CAA0();
extern unsigned int iStack_4c;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uStack_50;
extern unsigned __int64 storeVectorElementWordIndexed();


void fn_82475A58(int param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  float fVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  double dVar7;
  unsigned char in_vs32 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int uStack_50;
  int iStack_4c;
  
  fn_82461E68(&uStack_50,param_3);
  uVar6 = (unsigned __int64)uStack_50;
  lVar5 = uVar6 + 0x98;
  uVar1 = (unsigned int)lVar5;
  uVar4 = storeVectorElementWordIndexed(in_vs32,0,lVar5);
  *(unsigned int *)(uVar1 & 0xfffffffc) = uVar4;
  uVar4 = storeVectorElementWordIndexed(in_vs45,lVar5,4);
  *(unsigned int *)(uVar1 + 4 & 0xfffffffc) = uVar4;
  uVar4 = storeVectorElementWordIndexed(in_vs44,lVar5,8);
  *(unsigned int *)(uVar1 + 8 & 0xfffffffc) = uVar4;
  fVar2 = ltcg_pool_0_0f;
  uVar4 = lbl_821CA460;
  dVar7 = (double)ltcg_pool_0_0f;
  *(float *)(uStack_50 + 0xa4) = ltcg_pool_0_0f;
  *(float *)(uStack_50 + 0xa8) = fVar2;
  *(float *)(uStack_50 + 0xac) = fVar2;
  *(unsigned int *)(uStack_50 + 0xb0) = uVar4;
  *(unsigned int *)(uStack_50 + 0x84) = *(unsigned int *)(param_1 + 0x50);
  uVar3 = fn_82587AC0(uVar6 + 0x4b);
  uVar4 = fn_82529A38(uVar3,uVar6,0);
  param_2[1] = (float)dVar7;
  *param_2 = uVar4;
  fn_8252AFE0(dVar7);
  fn_8265CAA0(uVar6);
  if (iStack_4c != 0) {
    fn_8251FA58();
  }
  return;
}

