#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82529508();
extern int fn_82529A38();
extern int fn_82558210();
extern int fn_82587AC0();
extern int fn_827F6308();
extern float lbl_821916FC;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementWordIndexed();


void fn_82421F38(unsigned int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int iVar4;
  unsigned char in_vs32 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  
  uVar2 = ZEXT48(&stack0x00000000);
  *param_1 = param_2;
  fn_82529508(uVar2 - 0x5f0);
  uVar1 = storeVectorElementWordIndexed(in_vs32,0,uVar2 - 0x558);
  *(unsigned int *)(uVar2 - 0x558) = uVar1;
  storeVectorElementWordIndexed(in_vs45,uVar2 - 0x558,4);
  storeVectorElementWordIndexed(in_vs44,uVar2 - 0x558,8);
  fn_82558210(uVar2 - 0x5f0,0x19);
  uVar3 = fn_82587AC0(uVar2 - 0x5a5);
  iVar4 = fn_82529A38(uVar3,uVar2 - 0x5f0,0);
  param_1[1] = iVar4;
  if ((*(int *)(iVar4 + 400) != 0) &&
     (iVar4 = *(int *)(**(int **)(*(int *)(iVar4 + 400) + 400) + 0x110), iVar4 != 0)) {
    fn_827F6308(iVar4,1);
  }
  if (*(int *)(param_1[1] + 400) != 0) {
    *(unsigned int *)(**(int **)(*(int *)(param_1[1] + 400) + 400) + 0x118) = 1;
  }
  uVar1 = ltcg_pool_0_0f;
  *(float *)(param_1[1] + 0x2f0) = *(float *)(param_1[1] + 0x2f0) * lbl_821916FC;
  param_1[6] = uVar1;
  param_1[2] = 0;
  param_1[7] = uVar1;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  return;
}

