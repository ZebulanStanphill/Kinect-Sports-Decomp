typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();
extern V16 vectorMultiplyAddFloatingPoint();


void fn_82DFC6C0(int param_1,unsigned __int64 param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned __int64 in_r0;
  unsigned char in_vs32 [16];
  unsigned char in_vs44 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  
  if (*(float *)(*(int *)(param_1 + 0x1c) + 0x6c) == lbl_821AAD20) {
    return;
  }
  puVar1 = (unsigned int *)(*(int *)(param_1 + 0x1c) + 0x180U & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar4 = puVar1[2];
  uVar5 = puVar1[3];
  loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x10);
  vectorMultiplyAddFloatingPoint(in_vs44,in_vs32,in_vs45);
  puVar2 = (unsigned int *)((int)in_r0 + param_3 + 0x20 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar4;
  puVar2[3] = uVar5;
  return;
}

