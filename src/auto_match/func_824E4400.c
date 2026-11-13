typedef struct { unsigned __int64 lo, hi; } V16;
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int *auStack_30;
extern unsigned int fStack_38;
extern int fn_82F512E8();
extern unsigned int lbl_82191FC8;
extern V16 vectorSubtractFloatingPoint();


void fn_824E4400(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  float fVar3;
  int in_r0;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  float afStack_40 [2];
  float fStack_38;
  unsigned char auStack_30 [24];
  
  fn_82F512E8(afStack_40,param_2,*param_1,0);
  fn_82F512E8(auStack_30,param_2,0,0);
  fVar3 = lbl_82191FC8;
  puVar1 = (unsigned int *)((int)afStack_40 + in_r0 & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  vectorSubtractFloatingPoint(in_vs32,in_vs45);
  puVar2 = (unsigned int *)((int)afStack_40 + in_r0 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  param_1[1] = (unsigned int)(SQRT(fStack_38 * fStack_38 + afStack_40[0] * afStack_40[0]) <= fVar3);
  return;
}

