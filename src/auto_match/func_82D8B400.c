typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int fStack_4c;
extern unsigned int fStack_50;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern unsigned __int64 storeVectorElementWordIndexed();
extern V16 vectorSubtractFloatingPoint();


void fn_82D8B400(int param_1,int *param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned __int64 uVar3;
  unsigned char in_vs32 [16];
  unsigned char in_vs39 [16];
  unsigned char in_vs40 [16];
  unsigned char in_vs43 [16];
  unsigned char in_vs45 [16];
  unsigned int in_register_000100c0;
  unsigned int in_register_000100c4;
  unsigned int in_register_000100c8;
  unsigned int in_vr12;
  float fStack_50;
  float fStack_4c;
  
  uVar3 = ZEXT48(&stack0x00000000);
  (**(int (***)())(*param_2 + 0x1c))
            ((double)lbl_821AAD20,param_2,0xffffffff8323b1d0,param_3,uVar3 - 0x40);
  vectorSubtractFloatingPoint(in_vs32,in_vs45);
  puVar2 = (unsigned int *)(in_r0 + (int)param_3 & 0xfffffff0);
  *puVar2 = in_register_000100c0;
  puVar2[1] = in_register_000100c4;
  puVar2[2] = in_register_000100c8;
  puVar2[3] = in_vr12;
  vectorSubtractFloatingPoint(in_vs32,in_vs43);
  vectorSubtractFloatingPoint(in_vs45,in_vs43);
  uVar1 = storeVectorElementWordIndexed(in_vs40,0,uVar3 - 0x50);
  *(unsigned int *)(uVar3 - 0x50) = uVar1;
  uVar1 = storeVectorElementWordIndexed(in_vs39,0,uVar3 - 0x4c);
  *(unsigned int *)(uVar3 - 0x4c) = uVar1;
  if (fStack_50 - fStack_4c < 0.0) {
    fStack_50 = fStack_4c;
  }
  *(float *)(param_1 + 400) = SQRT(fStack_50);
  return;
}

