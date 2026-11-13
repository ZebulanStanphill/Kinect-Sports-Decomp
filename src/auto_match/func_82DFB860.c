#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82CE50D8();
extern unsigned int stack0x00000000;
extern unsigned int uStack_40;
extern unsigned __int64 storeVectorElementWordIndexed();


void fn_82DFB860(int param_1,unsigned __int64 param_2,int param_3,int param_4,float *param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  float fVar4;
  __int64 lVar5;
  unsigned char in_vs44 [16];
  unsigned int uStack_40;
  
  uVar1 = *(unsigned int *)(param_3 + 0x18);
  uVar2 = *(unsigned int *)(param_3 + 0x1c);
  *param_5 = *(float *)(param_4 + 8) * *(float *)(param_1 + 8);
  fn_82CE50D8(ZEXT48(&stack0x00000000) - 0x30,(unsigned __int64)uVar1 + 0xf0,(unsigned __int64)uVar2 + 0x40);
  lVar5 = ZEXT48(&stack0x00000000) - 0x40;
  uVar3 = storeVectorElementWordIndexed(in_vs44,0,lVar5);
  *(unsigned int *)lVar5 = uVar3;
  if (*(float *)(param_1 + 0xc) < uStack_40) {
    fVar4 = *(float *)(param_1 + 0xc) / uStack_40;
    *param_5 = *param_5 * fVar4 * fVar4;
  }
  return;
}

