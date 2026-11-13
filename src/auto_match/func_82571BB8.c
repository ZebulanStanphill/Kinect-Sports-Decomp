typedef struct { unsigned __int64 lo, hi; } V16;
extern unsigned int *auStack_50;
extern unsigned int *auStack_c0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_e0;
extern unsigned int *auStack_f0;
extern int fn_82CE5040();
extern int fn_82D80A40();
extern int fn_82D93168();
extern int fn_82DED480();
extern unsigned int lbl_82192734;
extern V16 vectorSubtractFloatingPoint();
extern void *memcpy(void *, const void *, unsigned int);


void fn_82571BB8(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned __int64 in_r0;
  int iVar6;
  unsigned char *puVar7;
  unsigned int uVar8;
  double dVar9;
  unsigned char in_vs32 [16];
  unsigned char in_vs45 [16];
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uVar12;
  unsigned char auStack_f0 [16];
  unsigned char auStack_e0 [16];
  unsigned char auStack_d0 [16];
  unsigned char auStack_c0 [112];
  unsigned char auStack_50 [80];
  
  uVar8 = *(unsigned int *)(param_1 + 0x490);
  uVar1 = *(unsigned int *)(param_1 + 0x494);
  if (uVar8 < uVar1) {
    dVar9 = (double)lbl_82192734;
    do {
      iVar6 = *(int *)(uVar8 + 0x20);
      iVar2 = *(int *)(iVar6 + 0x14);
      iVar3 = *(int *)(iVar6 + 0x18);
      iVar6 = fn_82DED480(iVar6,auStack_f0,auStack_d0);
      if (iVar6 == 1) {
        fn_82D80A40(*(unsigned int *)(iVar2 + 8));
        fn_82D93168(iVar2 + 0xe0);
        puVar7 = auStack_50;
      }
      else {
        fn_82D80A40(*(unsigned int *)(iVar2 + 8));
        fn_82D93168(iVar2 + 0xe0);
        fn_82CE5040(auStack_e0,auStack_c0,auStack_f0);
        puVar7 = auStack_e0;
      }
      puVar4 = (unsigned int *)((unsigned int)(puVar7 + (int)in_r0) & 0xfffffff0);
      uVar10 = puVar4[1];
      uVar11 = puVar4[2];
      uVar12 = puVar4[3];
      iVar6 = *(int *)(uVar8 + 0x20);
      puVar5 = (unsigned int *)((int)in_r0 + uVar8 & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar10;
      puVar5[2] = uVar11;
      puVar5[3] = uVar12;
      iVar6 = (**(int (***)())(**(int **)(iVar6 + 0xc) + 0x20))();
      if (iVar6 == 2) {
        iVar6 = *(int *)(*(int *)(uVar8 + 0x20) + 0xc);
        *(float *)(uVar8 + 0x2c) =
             (float)((double)*(float *)(*(int *)(*(int *)(*(int *)(uVar8 + 0x20) + 0x30) + 0x1c) +
                                       0x14) * dVar9);
        *(unsigned int *)(uVar8 + 0x24) = *(unsigned int *)(iVar6 + 0xc4);
        *(unsigned int *)(uVar8 + 0x28) = *(unsigned int *)(iVar6 + 200);
      }
      puVar4 = (unsigned int *)(iVar3 + 0x1c0U & 0xfffffff0);
      uVar10 = puVar4[1];
      uVar11 = puVar4[2];
      uVar12 = puVar4[3];{ V16 _vt0 = vectorSubtractFloatingPoint(in_vs45,in_vs32); memcpy(in_vs32, &_vt0, 16); }
      puVar5 = (unsigned int *)(uVar8 + 0x10 & 0xfffffff0);
      *puVar5 = *puVar4;
      puVar5[1] = uVar10;
      puVar5[2] = uVar11;
      puVar5[3] = uVar12;
      uVar8 = uVar8 + 0x60;
    } while (uVar8 < uVar1);
  }
  return;
}

