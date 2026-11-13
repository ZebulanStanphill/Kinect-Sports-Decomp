typedef struct { unsigned __int64 lo, hi; } V16;
extern int fn_82F593C8();
extern int fn_82F5CC68();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82006848;
extern unsigned int lbl_8200BF40;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_83263164;
extern unsigned int uStack_30;
extern V16 vectorSubtractFloatingPoint();


void fn_82F5CF30(double param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  unsigned int uVar3;
  int iVar4;
  double dVar5;
  double dVar6;
  unsigned char in_vs32 [16];
  unsigned char in_vs33 [16];
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned __int64 uStack_30;
  
  puVar1 = (unsigned int *)(in_r0 + param_2 & 0xfffffff0);
  uVar3 = puVar1[1];
  uVar7 = puVar1[2];
  uVar8 = puVar1[3];
  vectorSubtractFloatingPoint(in_vs33,in_vs32);
  puVar2 = (unsigned int *)((int)&uStack_30 + in_r0 & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar3;
  puVar2[2] = uVar7;
  puVar2[3] = uVar8;
  if (ABS((((unsigned __int64)(uStack_30) >> 0) & 0xFFFFFFFF)) < ABS((((unsigned __int64)(uStack_30) >> 32) & 0xFFFFFFFF))) {
    dVar6 = (double)lbl_821AAD20;
    goto LAB_82f5cfe0;
  }
  dVar6 = (double)((((unsigned __int64)(uStack_30) >> 0) & 0xFFFFFFFF) / (float)(param_1 * (double)lbl_82006848));
  if (dVar6 <= (double)lbl_821AAD20) {
    if ((double)lbl_821AAD20 <= dVar6) goto LAB_82f5cfe0;
    if (*(int *)(param_2 + 0x1c) == 2) goto LAB_82f5cfd4;
    uVar3 = 2;
LAB_82f5cfac:
    iVar4 = 1;
    *(unsigned int *)(param_2 + 0x1c) = uVar3;
  }
  else {
    if (*(int *)(param_2 + 0x1c) != 3) {
      uVar3 = 3;
      goto LAB_82f5cfac;
    }
LAB_82f5cfd4:
    iVar4 = *(int *)(param_2 + 0x34) + 1;
  }
  *(int *)(param_2 + 0x34) = iVar4;
LAB_82f5cfe0:
  if (0 < *(int *)(param_2 + 0x34)) {
    uStack_30 = (__int64)(int)lbl_83263164;
    if (*(int *)(param_2 + 0x34) == (int)lbl_83263164) {
      fn_82F5CC68(param_2,*(unsigned int *)(param_2 + 0x1c));
    }
    uStack_30 = (__int64)*(int *)(param_2 + 0x34);
    dVar5 = (double)fn_82F593C8((double)lbl_8200BF40,(double)uStack_30);
    *(float *)(param_2 + 0x10) =
         (float)((double)(float)(dVar6 - (double)*(float *)(param_2 + 0x10)) *
                 (double)(float)((double)lbl_82002AE0 / dVar5) + (double)*(float *)(param_2 + 0x10))
    ;
  }
  return;
}

