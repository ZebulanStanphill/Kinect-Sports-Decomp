typedef unsigned char bool;
#define false 0
typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern int fn_82539A78();
extern V16 vectorSubtractFloatingPoint();


bool fn_82539B80(float *param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  int in_r0;
  int iVar8;
  __int64 lVar7;
  bool bVar9;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  float fStack_40;
  float fStack_3c;
  float fStack_38;
  
  puVar5 = (unsigned int *)(in_r0 + (int)param_1 & 0xfffffff0);
  uVar10 = puVar5[1];
  uVar11 = puVar5[2];
  uVar12 = puVar5[3];
  vectorSubtractFloatingPoint(in_vs45,in_vs32);
  fVar1 = *param_2;
  fVar2 = *param_1;
  fVar3 = *param_4;
  fVar4 = *param_3;
  puVar6 = (unsigned int *)((int)&fStack_40 + in_r0 & 0xfffffff0);
  *puVar6 = *puVar5;
  puVar6[1] = uVar10;
  puVar6[2] = uVar11;
  puVar6[3] = uVar12;
  iVar8 = fn_82539A78((double)fVar4,(double)fVar3,(double)fVar2,(double)fVar1,(double)fStack_40);
  if ((iVar8 == 0) ||
     (iVar8 = fn_82539A78((double)param_3[1],(double)param_4[1],(double)param_1[1],
                           (double)param_2[1],(double)fStack_3c), iVar8 == 0)) {
    bVar9 = false;
  }
  else {
    lVar7 = fn_82539A78((double)param_3[2],(double)param_4[2],(double)param_1[2],(double)param_2[2]
                         ,(double)fStack_38);
    bVar9 = lVar7 != 0;
  }
  return bVar9;
}

