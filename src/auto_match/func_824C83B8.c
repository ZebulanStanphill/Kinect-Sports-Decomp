#define NAN(x) ((x) != (x))
extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern unsigned int *auStack_100;
extern unsigned int *auStack_f0;
extern unsigned int fStack_48;
extern int fn_824C8610();
extern int fn_82562820();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821956D0;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83280B98;


/* WARNING: Removing unreachable block (ram,0x824c83f0) */

void fn_824C83B8(int param_1)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned __int64 in_r0;
  int iVar4;
  int *piVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  double dVar11;
  unsigned int uVar12;
  unsigned int uVar13;
  unsigned int uVar14;
  unsigned char auStack_100 [16];
  unsigned char auStack_f0 [168];
  float fStack_48;
  
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 != *(int *)(param_1 + 0x14)) {
    for (iVar4 = iVar1; iVar4 != *(int *)(param_1 + 0x14); iVar4 = iVar4 + 0xc0) {
    }
    *(int *)(param_1 + 0x14) = iVar1;
  }
  piVar5 = &lbl_83280B98;
  dVar9 = (double)ltcg_pool_0_0f;
  dVar11 = (double)lbl_821CA460;
  dVar10 = (double)lbl_821956D0;
  do {
    iVar1 = *piVar5;
    if (iVar1 != 0) {
      puVar2 = (unsigned int *)(iVar1 + 0x10U & 0xfffffff0);
      uVar12 = puVar2[1];
      uVar13 = puVar2[2];
      uVar14 = puVar2[3];
      puVar3 = (unsigned int *)((unsigned int)(auStack_100 + (int)in_r0) & 0xfffffff0);
      *puVar3 = *puVar2;
      puVar3[1] = uVar12;
      puVar3[2] = uVar13;
      puVar3[3] = uVar14;
      dVar6 = (double)SQRT((float)((double)*(float *)(iVar1 + 0x60) * dVar10));
      dVar8 = (double)(float)(dVar11 - dVar6);
      dVar7 = dVar11;
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((dVar8 < dVar9) << 2) | (unsigned int)(NAN(dVar8) || NAN(dVar9)) << 2)) <
          0.0) {
        dVar7 = dVar6;
      }
      fStack_48 = (float)dVar7;
      fn_82562820(iVar1,auStack_f0);
      fn_824C8610(param_1 + 0x10,auStack_100);
    }
    piVar5 = piVar5 + 1;
  } while ((int)piVar5 < -0x7cd7f460);
  return;
}

