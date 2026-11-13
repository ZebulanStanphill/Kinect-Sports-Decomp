extern int fn_8261F510();
extern int fn_82F6A52C();
extern int fn_82F6A578();
extern unsigned int lbl_82192AEC;
extern unsigned int lbl_821954EC;
extern unsigned int lbl_82195590;
extern float lbl_821955A0;
extern unsigned int lbl_821956B4;
extern unsigned int lbl_82195DD4;
extern unsigned int ltcg_pool_0_0f;


void fn_8261FA78(unsigned __int64 param_1,double param_2,unsigned __int64 param_3,double param_4)

{
  float fVar1;
  int iVar3;
  int iVar4;
  unsigned __int64 uVar2;
  float *in_r8;
  int in_r9;
  int iVar5;
  __int64 lVar6;
  int iVar7;
  unsigned int uVar8;
  double extraout_f1;
  double dVar9;
  double dVar10;
  double dVar11;
  double dVar12;
  double dVar13;
  double dVar14;
  double dVar15;
  double dVar16;
  
  iVar3 = fn_82F6A52C();
  if (*(int *)(iVar3 + 0x68) != 0) {
    uVar8 = 0;
    dVar9 = (double)lbl_82192AEC;
    dVar12 = (double)lbl_82195DD4;
    dVar10 = (double)lbl_821956B4;
    dVar11 = (double)lbl_821954EC;
    dVar13 = extraout_f1;
    fVar1 = ltcg_pool_0_0f;
    do {
      dVar15 = (double)fVar1;
      fVar1 = (float)dVar13;
      dVar16 = (double)(float)(param_2 - dVar15);
      dVar14 = (double)(float)(dVar15 + param_2);
      iVar4 = fn_8261F510(dVar13,dVar16,param_3,param_4,iVar3);
      if ((iVar4 == 0) && (param_4 <= (double)fVar1)) {
        dVar14 = dVar16 * (double)lbl_82195590;
LAB_8261fc10:
        uVar2 = 1;
        *in_r8 = (float)(((double)(float)dVar14 - (double)(__int64)dVar14) * lbl_821955A0);
        goto LAB_8261fbf0;
      }
      if ((((double)(__int64)(int)uVar8 < dVar10) &&
          (iVar4 = fn_8261F510(dVar13,dVar14,param_3,param_4,iVar3), iVar4 == 0)) &&
         (param_4 <= (double)fVar1)) {
        dVar14 = dVar14 * (double)lbl_82195590;
        goto LAB_8261fc10;
      }
      dVar14 = dVar12;
      if (in_r9 == 0) {
        iVar7 = 0;
        iVar5 = 1;
        lVar6 = (__int64)((int)uVar8 >> 2) + (unsigned __int64)((int)uVar8 < 0 && (uVar8 & 3) != 0) + 1;
        iVar4 = 1;
        if (0 < lVar6) {
          do {
            iVar7 = iVar7 + 1;
            iVar5 = iVar4 << 1;
            iVar4 = iVar5;
          } while (iVar7 < (int)lVar6);
        }
        dVar14 = (double)(__int64)iVar5 * dVar11;
      }
      fVar1 = (float)(dVar15 + dVar14);
      uVar8 = uVar8 + 1;
    } while ((double)(__int64)(int)uVar8 < dVar9);
  }
  uVar2 = 0;
LAB_8261fbf0:
  fn_82F6A578(uVar2);
  return;
}

