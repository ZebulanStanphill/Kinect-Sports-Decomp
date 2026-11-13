typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_20;
extern unsigned int fStack_1c;
extern int fn_8257E880();
extern int fn_8257E950();
extern unsigned int lbl_82192480;
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_821CA460;
extern V16 vectorAddFloatingPoint();


void fn_82464F40(double param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5,unsigned __int64 param_6)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  float fVar7;
  int in_r0;
  double dVar8;
  double dVar9;
  unsigned char in_vs32 [16];
  unsigned char in_vs33 [16];
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned char auStack_20 [4];
  float fStack_1c;
  
  dVar9 = (double)*(float *)(param_2 + 0x10);
  dVar8 = (double)*(float *)(param_2 + 0x14);
  if ((dVar8 < (double)(float)(dVar9 - (double)lbl_82193AF0)) ||
     ((double)(float)(dVar9 + (double)lbl_82193AF0) < dVar8)) {
    if (dVar8 <= dVar9) {
      dVar8 = dVar8 + param_1;
    }
    else {
      dVar8 = dVar8 - param_1;
    }
    *(float *)(param_2 + 0x14) = (float)dVar8;
  }
  fVar7 = lbl_82192480;
  puVar5 = (unsigned int *)(param_2 + 0x30U & 0xfffffff0);
  uVar10 = puVar5[1];
  uVar11 = puVar5[2];
  uVar12 = puVar5[3];
  if (*(char *)(param_2 + 0x40) != '\0') {
    vectorAddFloatingPoint(in_vs33,in_vs32);
  }
  fVar1 = *(float *)(param_2 + 0x18);
  fVar2 = *(float *)(param_2 + 0x20);
  fVar3 = *(float *)(param_2 + 0x1c);
  fVar4 = *(float *)(param_2 + 0x24);
  puVar6 = (unsigned int *)((unsigned int)(auStack_20 + in_r0) & 0xfffffff0);
  *puVar6 = *puVar5;
  puVar6[1] = uVar10;
  puVar6[2] = uVar11;
  puVar6[3] = uVar12;
  fStack_1c = fStack_1c + fVar7;
  fn_8257E950(-(double)((fVar2 - fVar4) * *(float *)(param_2 + 0x14) - fVar2),
                    -(double)((fVar1 - fVar3) * *(float *)(param_2 + 0x14) - fVar1),
                    *(unsigned int *)(param_2 + 8),0,1,param_5,param_6,0);
  fn_8257E880((double)(lbl_821CA460 - *(float *)(param_2 + 0x14)),*(unsigned int *)(param_2 + 8)
                   );
  return;
}

