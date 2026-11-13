#define NAN(x) ((x) != (x))
extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern unsigned int fStack_3c;
extern unsigned int fStack_4c;
extern int fn_8252D6E0();
extern int fn_8255DEA0();
extern int fn_82F4EBC0();
extern int fn_82F4EFF8();
extern unsigned int lbl_82192734;
extern unsigned int lbl_82192F70;
extern unsigned int lbl_82193AF0;
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;


void fn_82503DA8(int param_1)

{
  unsigned int uVar1;
  int *piVar2;
  unsigned int *puVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  int in_r0;
  __int64 lVar7;
  char cVar9;
  unsigned __int64 uVar8;
  unsigned int uVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned char auStack_50 [4];
  float fStack_4c;
  unsigned char auStack_40 [4];
  float fStack_3c;
  
  lVar7 = fn_82F4EBC0(*(unsigned int *)(param_1 + 0xb60) & 0xff);
  if (lVar7 != 0) {
    cVar9 = fn_82F4EFF8(lVar7);
    dVar14 = (double)ltcg_pool_0_0f;
    if ((cVar9 != '\0') && (*(char *)(param_1 + 0xc20) != '\0')) {
      uVar1 = *(unsigned int *)(param_1 + 0x4c);
      puVar3 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
      *puVar3 = in_register_000104d0;
      puVar3[1] = in_register_000104d4;
      puVar3[2] = in_register_000104d8;
      puVar3[3] = in_vr77;
      puVar3 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
      *puVar3 = in_register_000104d0;
      puVar3[1] = in_register_000104d4;
      puVar3[2] = in_register_000104d8;
      puVar3[3] = in_vr77;
      fn_8252D6E0(param_1,uVar1);
      if ((*(int *)(param_1 + 0x8c0) == 0) ||
         (piVar2 = *(int **)(*(int *)(param_1 + 0x8c0) + 0x1b4), piVar2 == (int *)0x0)) {
        uVar8 = 0xffffffffffffffff;
      }
      else {
        uVar8 = (**(int (***)())(*piVar2 + 0x14))(piVar2,0x15);
      }
      if ((int)uVar8 != -1) {
        fn_8255DEA0(param_1,uVar8,auStack_50);
        fStack_4c = fStack_4c - *(float *)(param_1 + 0xb84);
      }
      dVar13 = (double)fStack_4c;
      if ((*(int *)(param_1 + 0x8c0) == 0) ||
         (piVar2 = *(int **)(*(int *)(param_1 + 0x8c0) + 0x1b4), piVar2 == (int *)0x0)) {
        uVar8 = 0xffffffffffffffff;
      }
      else {
        uVar8 = (**(int (***)())(*piVar2 + 0x14))(piVar2,0x14);
      }
      if ((int)uVar8 != -1) {
        fn_8255DEA0(param_1,uVar8,auStack_40);
        fStack_3c = fStack_3c - *(float *)(param_1 + 0xb84);
      }
      fVar4 = *(float *)(param_1 + 0xb78) - *(float *)(param_1 + 0xb3c);
      dVar11 = (double)fVar4;
      *(float *)(param_1 + 0xb78) = fVar4;
      if (dVar14 < dVar11) {
        if (*(int *)(param_1 + 0xb88) == 0x32) goto LAB_82503f20;
      }
      else {
        *(float *)(param_1 + 0xb78) = (float)(dVar11 + (double)lbl_82193AF0);
LAB_82503f20:
        dVar12 = (double)(float)(dVar13 - (double)fStack_3c);
        dVar11 = (double)fStack_3c;
        if (*(float *)(&lbl_821954D8 +
                      ((unsigned int)(unsigned char)((dVar12 < dVar14) << 2) |
                      (unsigned int)(NAN(dVar12) || NAN(dVar14)) << 2)) < 0.0) {
          dVar11 = dVar13;
        }
        *(float *)(param_1 + 0xb7c) = (float)((double)*(float *)(param_1 + 0xb80) - dVar11);
      }
      fVar6 = lbl_82192F70;
      dVar13 = (double)(*(float *)(param_1 + 0xb7c) - lbl_82192734);
      fVar4 = *(float *)(param_1 + 0xb7c);
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((dVar13 < dVar14) << 2) | (unsigned int)(NAN(dVar13) || NAN(dVar14)) << 2)
                    ) < 0.0) {
        fVar4 = lbl_82192734;
      }
      fVar5 = lbl_821CA460;
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)(((double)(fVar4 - lbl_821CA460) < dVar14) << 2) |
                    (unsigned int)(NAN((double)(fVar4 - lbl_821CA460)) || NAN(dVar14)) << 2)) < 0.0) {
        fVar5 = fVar4;
      }
      *(float *)(param_1 + 0xb7c) = fVar5;
      *(float *)(param_1 + 0xb80) =
           (fVar5 - *(float *)(param_1 + 0xb80)) * *(float *)(param_1 + 0xb3c) * fVar6 +
           *(float *)(param_1 + 0xb80);
    }
    cVar9 = fn_82F4EFF8(lVar7);
    if (cVar9 == '\0') {
      *(float *)(param_1 + 0xb7c) = (float)dVar14;
      *(float *)(param_1 + 0xb80) = (float)dVar14;
    }
    cVar9 = fn_82F4EFF8(lVar7);
    if (cVar9 != '\0') {
      uVar10 = *(int *)(param_1 + 0xb88) + 1;
      goto LAB_82504004;
    }
  }
  uVar10 = 0;
LAB_82504004:
  *(unsigned int *)(param_1 + 0xb88) = uVar10;
  uVar10 = -((int)uVar10 >> 0x1f) - 1U & uVar10;
  if (0x32 < (int)uVar10) {
    uVar10 = 0x33;
  }
  *(unsigned int *)(param_1 + 0xb88) = uVar10;
  return;
}

