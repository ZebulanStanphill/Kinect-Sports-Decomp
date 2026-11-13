#define true 1
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_82F55D50();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000020;


double fn_82F55DD0(int param_1)

{
  float fVar1;
  float *pfVar2;
  float *pfVar3;
  unsigned int *puVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int in_r0;
  int iVar8;
  unsigned __int64 uVar9;
  double dVar10;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  float in_stack_00000020;
  float in_stack_00000024;
  float in_stack_00000028;
  
  puVar4 = (unsigned int *)((int)&stack0x00000020 + in_r0 & 0xfffffff0);
  *puVar4 = in_register_00010010;
  puVar4[1] = in_register_00010014;
  puVar4[2] = in_register_00010018;
  puVar4[3] = in_vr1;
  iVar8 = fn_82F55D50();
  dVar10 = (double)lbl_821AAD20;
  if (((iVar8 != 0) && (pfVar2 = *(float **)(param_1 + 0xb8), (double)pfVar2[3] != dVar10)) &&
     (((double)*pfVar2 != dVar10 || (((double)pfVar2[1] != dVar10 || ((double)pfVar2[2] != dVar10)))
      ))) {
    pfVar3 = *(float **)(param_1 + 0xb8);
    uVar9 = 2;
    fVar1 = *pfVar3;
    in_stack_00000020 = fVar1 * in_stack_00000020;
    fVar5 = lbl_82002AE0;
    while( true ) {
      if ((uVar9 & 1) != 0) {
        fVar5 = fVar5 * fVar1;
      }
      uVar9 = uVar9 >> 1;
      if (uVar9 == 0) break;
      fVar1 = fVar1 * fVar1;
    }
    fVar1 = pfVar2[1];
    uVar9 = 2;
    fVar7 = lbl_82002AE0;
    while( true ) {
      if ((uVar9 & 1) != 0) {
        fVar7 = fVar7 * fVar1;
      }
      uVar9 = uVar9 >> 1;
      if (uVar9 == 0) break;
      fVar1 = fVar1 * fVar1;
    }
    fVar1 = pfVar2[2];
    uVar9 = 2;
    fVar6 = lbl_82002AE0;
    while( true ) {
      if ((uVar9 & 1) != 0) {
        fVar6 = fVar6 * fVar1;
      }
      uVar9 = uVar9 >> 1;
      if (uVar9 == 0) break;
      fVar1 = fVar1 * fVar1;
    }
    dVar10 = (double)((pfVar3[2] * in_stack_00000028 +
                       in_stack_00000020 + pfVar3[1] * in_stack_00000024 + pfVar3[3]) /
                     SQRT(fVar6 + fVar7 + fVar5));
  }
  return dVar10;
}

