typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_82755588();
extern int fn_827555D8();
extern int fn_82756488();
extern int fn_82756F70();
extern int fn_827912D8();
extern int fn_827A0BD0();
extern int fn_827A9228();
extern unsigned int iStack_60;
extern unsigned int iStack_64;
extern unsigned int lbl_820153EC;
extern unsigned int lbl_820885C8;
extern unsigned int uStack_c8;


unsigned __int64 fn_827A1B60(int param_1,float *param_2,unsigned __int64 param_3)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  unsigned short uVar5;
  int *piVar6;
  float fVar7;
  bool bVar8;
  float fVar9;
  unsigned __int64 uVar10;
  unsigned int uVar11;
  unsigned __int64 uVar12;
  int iVar13;
  unsigned __int64 uVar14;
  int iVar15;
  double dVar16;
  int * apiStack_d0;
  unsigned int uStack_c8;
  unsigned short *puStack_b0;
  unsigned short *puStack_ac;
  int iStack_64;
  int iStack_60;
  
  uVar10 = fn_827912D8(*(unsigned int *)(param_1 + 8));
  if ((param_2 == (float *)0x0) || ((uVar10 & 0xffffffff) < (param_3 & 0xffffffff))) {
    uVar12 = 0;
  }
  else {
    fn_827A0BD0(param_1);
    fn_827A9228(&apiStack_d0,param_1 + 0x24,param_3);
    uVar12 = 0;
    if (((apiStack_d0 == (int *)0x0) || ((unsigned int)apiStack_d0[1] <= uStack_c8)) ||
       (bVar8 = false, (int)uStack_c8 < 0)) {
      bVar8 = true;
    }
    if (!bVar8) {
      piVar6 = *(int **)(uStack_c8 * 4 + *apiStack_d0);
      uVar10 = (unsigned __int64)(unsigned int)piVar6[2];
      if ((*piVar6 < 0) && (uVar10 = (unsigned __int64)(unsigned int)piVar6[2] & 0xffffff, uVar10 == 0xffffff)) {
        uVar10 = 0xffffffffffffffff;
      }
      fn_82756F70(&puStack_b0,piVar6);
      iVar13 = 0;
      uVar14 = 0;
      while( true ) {
        if ((puStack_b0 == (unsigned short *)0x0) || (bVar8 = false, puStack_ac <= puStack_b0)) {
          bVar8 = true;
        }
        if (bVar8) goto LAB_827a1ef0;
        if ((uVar14 & 0xffffffff) == (param_3 - uVar10 & 0xffffffff)) break;
        uVar11 = (unsigned int)puStack_b0[1];
        if ((puStack_b0[3] >> 6 & 1) != 0) {
          uVar11 = -uVar11;
        }
        iVar13 = uVar11 + iVar13;
        fn_827555D8(&puStack_b0);
        uVar14 = uVar14 + 1;
      }
      uVar12 = 1;
      if ((puStack_b0[3] >> 0xb & 1) == 0) {
        if (iStack_64 == 0) {
          iVar15 = 0;
        }
        else {
          iVar15 = *(int *)(iStack_64 + 0x14);
        }
        dVar16 = (double)fn_82755588(puStack_b0);
        uVar10 = (unsigned __int64)*puStack_b0;
        dVar16 = (double)(float)(dVar16 * (double)lbl_820153EC);
        if (0xfffe < uVar10) {
          uVar10 = 0xffffffffffffffff;
        }
        (**(int (***)())(**(int **)(iVar15 + 0xc) + 0x30))(*(int **)(iVar15 + 0xc),uVar10,param_2);
        if ((puStack_b0[3] & 0x100) != 0) {
          param_2[2] = (param_2[2] - *param_2) * 0.333333343f + *param_2;
        }
        fVar1 = *param_2;
        fVar2 = param_2[2];
        fVar3 = *(float *)(*(int *)(iVar15 + 0xc) + 8);
        fVar4 = *(float *)(*(int *)(iVar15 + 0xc) + 0xc);
        *param_2 = (float)((double)fVar1 * dVar16);
        param_2[2] = (float)((double)fVar2 * dVar16);
        fVar9 = lbl_820885C8;
        if (*piVar6 < 0) {
          uVar5 = *(unsigned short *)((int)piVar6 + 0x1a);
        }
        else {
          uVar5 = *(unsigned short *)((int)piVar6 + 0x26);
        }
        fVar7 = -(float)((double)*(float *)(*(int *)(iVar15 + 0xc) + 8) * dVar16 - (double)uVar5) +
                lbl_820885C8;
        param_2[1] = fVar7;
        param_2[3] = fVar7 + (float)((double)(fVar4 + fVar3) * dVar16);
        iVar15 = piVar6[4];
        *param_2 = (float)(__int64)iVar13 + fVar9 + (float)((double)fVar1 * dVar16);
        param_2[2] = (float)(__int64)iVar13 + fVar9 + (float)((double)fVar2 * dVar16);
        fVar7 = fVar7 + (float)(__int64)iVar15;
        fVar1 = param_2[3] + (float)(__int64)iVar15;
      }
      else {
        fVar7 = -(float)(__int64)*(int *)(iStack_60 + 0x10);
        *param_2 = fVar7;
        param_2[1] = -(float)(__int64)*(int *)(iStack_60 + 0x14);
        param_2[2] = (float)*(unsigned int *)(iStack_60 + 0x18) + fVar7;
        param_2[3] = (float)*(unsigned int *)(iStack_60 + 0x1c) + param_2[1];
        fVar2 = (float)(__int64)iVar13 + lbl_820885C8;
        fVar1 = (float)(__int64)piVar6[4] + lbl_820885C8;
        *param_2 = fVar2 + fVar7;
        param_2[2] = param_2[2] + fVar2;
        fVar7 = param_2[1] + fVar1;
        fVar1 = param_2[3] + fVar1;
      }
      param_2[3] = fVar1;
      param_2[1] = fVar7;
LAB_827a1ef0:
      fn_82756488(&puStack_b0);
    }
  }
  return uVar12;
}

