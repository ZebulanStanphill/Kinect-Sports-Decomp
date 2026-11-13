typedef unsigned char bool;
#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern double dRam831bb928;
extern int fn_82F718E8();
extern int fn_82F79464();
extern unsigned int lbl_82005710;
extern unsigned int lbl_831BB918;
extern unsigned int uStack_40;


bool fn_82F78D40(unsigned __int64 param_1,double *param_2,unsigned __int64 param_3)

{
  bool bVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  int iVar6;
  unsigned __int64 uVar5;
  unsigned int uVar7;
  double dVar8;
  double dVar9;
  double dVar10;
  unsigned __int64 uStack_40;
  
  uVar2 = (unsigned int)param_1;
  uVar7 = uVar2 & 0x1f;
  if (((param_1 & 8) != 0) && ((param_3 & 0x80) != 0)) {
    fn_82F79464(0x20000000);
    uVar7 = uVar2 & 0x17;
    goto LAB_82f78f64;
  }
  if (((param_1 & 4) != 0) && ((param_3 & 0x10) != 0)) {
    fn_82F79464(0x4000000);
    uVar7 = uVar2 & 0x1b;
    goto LAB_82f78f64;
  }
  if (((param_1 & 1) == 0) || ((param_3 & 0x40) == 0)) {
    if (((param_1 & 2) != 0) && ((param_3 & 0x20) != 0)) {
      bVar1 = (param_1 & 0x10) != 0;
      if (*param_2 == lbl_82005710) {
        bVar1 = true;
      }
      else {
        dVar10 = lbl_82005710;
        dVar8 = (double)fn_82F718E8(param_1,&uStack_40);
        lVar4 = ((unsigned __int64)uStack_40 >> 0x20) - 0x600;
        iVar6 = (int)lVar4;
        if (iVar6 < -0x432) {
          bVar1 = true;
          dVar9 = dVar8 * dVar10;
          uStack_40 = dVar8;
        }
        else {
          uStack_40 = (double)((unsigned __int64)dVar8 & 0xfffffffffffff | 0x10000000000000);
          if (iVar6 < -0x3fd) {
            lVar4 = -0x3fd - lVar4;
            uVar3 = (unsigned __int64)uStack_40 >> 0x20;
            uVar5 = (unsigned __int64)dVar8 & 0xffffffff;
            do {
              if (((uVar5 & 1) != 0) && (!bVar1)) {
                bVar1 = true;
              }
              uVar5 = uVar5 >> 1;
              if ((uVar3 & 1) != 0) {
                uVar5 = uVar5 | 0x80000000;
              }
              uVar3 = uVar3 >> 1;
              lVar4 = lVar4 + -1;
            } while (lVar4 != 0);
            uStack_40 = (double)CONCAT44((int)uVar3,(int)uVar5);
          }
          dVar9 = uStack_40;
          if (dVar8 < dVar10) {
            dVar9 = -uStack_40;
          }
        }
        *param_2 = dVar9;
      }
      if (bVar1) {
        fn_82F79464(0x8000000);
      }
      uVar7 = uVar2 & 0x1d;
    }
    goto LAB_82f78f64;
  }
  fn_82F79464(0x10000000);
  uVar5 = param_3 & 3;
  dVar10 = lbl_831BB918;
  if (uVar5 == 0) {
    dVar9 = *param_2;
    dVar8 = lbl_831BB918;
joined_r0x82f78e2c:
    if (dVar9 <= lbl_82005710) {
      dVar8 = -dVar10;
    }
    *param_2 = dVar8;
  }
  else {
    dVar8 = dRam831bb928;
    if (uVar5 == 1) {
      dVar9 = *param_2;
      dVar10 = dRam831bb928;
      goto joined_r0x82f78e2c;
    }
    if (uVar5 < 3) {
      dVar9 = *param_2;
      dVar10 = dRam831bb928;
      dVar8 = lbl_831BB918;
      goto joined_r0x82f78e2c;
    }
    if (uVar5 == 3) {
      dVar9 = *param_2;
      goto joined_r0x82f78e2c;
    }
  }
  uVar7 = uVar2 & 0x1e;
LAB_82f78f64:
  if (((param_1 & 0x10) != 0) && ((param_3 & 8) != 0)) {
    fn_82F79464(0x2000000);
    uVar7 = uVar7 & 0xffffffef;
  }
  return uVar7 == 0;
}

