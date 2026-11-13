#define NAN(x) ((x) != (x))
extern int fn_82270AC0();
extern int fn_82465390();
extern int fn_824656C8();
extern int fn_824660C0();
extern unsigned int lbl_821917B4;
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D3874;
extern unsigned int uRam831d3914;


void fn_82465D80(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  double dVar10;
  
  fVar5 = ltcg_pool_0_0f;
  dVar10 = (double)((float)lbl_831D3874 * lbl_821917B4);
  if (*(int *)(param_2 + 0xe8) != 0) {
    fVar1 = (float)((double)*(float *)(param_2 + 0xe8) - param_1);
    fVar3 = -fVar1;
    fVar4 = ltcg_pool_0_0f;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar3 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar3) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      fVar4 = fVar1;
    }
    *(float *)(param_2 + 0xe8) = fVar4;
    if (fVar4 == fVar5) {
      uVar6 = fn_824656C8(1,5,*(unsigned int *)(param_2 + 0xec));
      *(unsigned int *)(param_2 + 0xec) = uVar6;
      fn_82465390(*(unsigned int *)(param_2 + 0xcc),param_2 + 0x10);
      fn_82270AC0(0xffffffff831d38d0);
      iVar2 = *(int *)(param_2 + 0xec);
      if (0 < iVar2) {
        if (iVar2 < 3) {
          uVar7 = 0;
          uVar8 = lbl_831D3874;
          if (lbl_831D3874 != 0) {
            do {
              if ((uVar7 & 1) == (unsigned __int64)(*(int *)(param_2 + 0xec) == 1)) {
                fn_824660C0(param_2,uVar7,0);
                uVar8 = lbl_831D3874;
              }
              uVar7 = uVar7 + 1;
            } while ((uVar7 & 0xffffffff) < (unsigned __int64)uVar8);
          }
        }
        else if (iVar2 == 3) {
          uVar7 = (unsigned __int64)lbl_831D3874;
          uVar9 = 0;
          if (uVar7 != 0) {
            do {
              if (((double)(uVar9 & 0xffffffff) < dVar10) ||
                 ((double)((uVar7 - uVar9) - 1 & 0xffffffff) < dVar10)) {
                fn_824660C0(param_2,uVar9,0);
                uVar7 = (unsigned __int64)lbl_831D3874;
              }
              uVar9 = uVar9 + 1;
            } while ((uVar9 & 0xffffffff) < uVar7);
          }
        }
        else if (iVar2 == 4) {
          uVar7 = (unsigned __int64)lbl_831D3874;
          uVar9 = 0;
          if (uVar7 != 0) {
            do {
              if ((dVar10 <= (double)(uVar9 & 0xffffffff)) &&
                 (dVar10 <= (double)((uVar7 - uVar9) - 1 & 0xffffffff))) {
                fn_824660C0(param_2,uVar9,0);
                uVar7 = (unsigned __int64)lbl_831D3874;
              }
              uVar9 = uVar9 + 1;
            } while ((uVar9 & 0xffffffff) < uVar7);
          }
        }
      }
      *(unsigned int *)(param_2 + 0xe8) = uRam831d3914;
    }
  }
  return;
}

