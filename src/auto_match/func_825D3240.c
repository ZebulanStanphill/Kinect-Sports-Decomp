typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int lbl_8218E3E4;
extern unsigned int lbl_82195680;
extern V16 vectorSubtractFloatingPoint();


unsigned __int64
fn_825D3240(unsigned __int64 param_1,int *param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7,unsigned __int64 param_8,
             unsigned int param_9)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  float *pfVar3;
  unsigned char *pbVar4;
  float fVar5;
  int in_r0;
  unsigned __int64 uVar6;
  int iVar7;
  int iVar8;
  unsigned char *pbVar9;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  float fVar14;
  float fVar15;
  int in_stack_00000054;
  unsigned int in_stack_0000005c;
  float afStack_80 [32];
  
  fVar5 = lbl_82195680;
  puVar1 = (unsigned int *)(in_r0 + (int)param_6 & 0xfffffff0);
  uVar10 = *puVar1;
  uVar11 = puVar1[1];
  uVar12 = puVar1[2];
  uVar13 = puVar1[3];
  uVar2 = in_r0 + (int)param_7 & 0xfffffff0;
  fVar14 = *(float *)(uVar2 + 4);
  fVar15 = *(float *)(uVar2 + 8);
  vectorSubtractFloatingPoint(in_vs32,in_vs45);
  fVar14 = fVar14 * fVar14 + 0.0 + fVar15 * fVar15;
  pfVar3 = (float *)((int)afStack_80 + in_r0 & 0xfffffff0);
  *pfVar3 = fVar14;
  pfVar3[1] = fVar14;
  pfVar3[2] = fVar14;
  pfVar3[3] = fVar14;
  if (fVar5 < afStack_80[0]) {
    pbVar9 = (unsigned char *)(param_2 + 2);
    uVar6 = 0;
    iVar8 = 0;
    if (0 < *param_2) {
      do {
        if (pbVar9 == (unsigned char *)0x0) {
          return uVar6;
        }
        if ((((*(unsigned int *)(*(short *)(pbVar9 + 2) * 4 + in_stack_00000054) & *(unsigned int *)(pbVar9 + 4) &
              param_9) != 0) &&
            ((int (**)())(&lbl_8218E3E4)[(unsigned int)*pbVar9 * 5] != (int (**)())0x0)) &&
           (iVar7 = (*(int (**)())(&lbl_8218E3E4)[(unsigned int)*pbVar9 * 5])
                              (param_1,pbVar9,param_3,param_4,param_5,param_6,param_7,param_8,
                               in_stack_0000005c), iVar7 != 0)) {
          uVar6 = 1;
        }
        pbVar4 = pbVar9 + 1;
        iVar8 = iVar8 + 1;
        pbVar9 = pbVar9 + *pbVar4;
        if (*pbVar4 == 0) {
          pbVar9 = (unsigned char *)0x0;
        }
      } while (iVar8 < *param_2);
    }
  }
  else {
    puVar1 = (unsigned int *)(in_r0 + (int)param_7 & 0xfffffff0);
    *puVar1 = uVar10;
    puVar1[1] = uVar11;
    puVar1[2] = uVar12;
    puVar1[3] = uVar13;
    uVar6 = 0;
  }
  return uVar6;
}

