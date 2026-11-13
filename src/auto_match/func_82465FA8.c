#define NAN(x) ((x) != (x))
extern int fn_82270AC0();
extern int fn_824660C0();
extern unsigned int lbl_821954D8;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D3874;
extern unsigned int lbl_831D391C;


void fn_82465FA8(double param_1,int param_2)

{
  float fVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  unsigned __int64 uVar6;
  unsigned int uVar8;
  unsigned __int64 uVar7;
  
  fVar5 = ltcg_pool_0_0f;
  if (*(int *)(param_2 + 0xf0) != 0) {
    fVar1 = (float)((double)*(float *)(param_2 + 0xf0) - param_1);
    fVar3 = -fVar1;
    fVar4 = ltcg_pool_0_0f;
    if (*(float *)(&lbl_821954D8 +
                  ((unsigned int)(unsigned char)((fVar3 < ltcg_pool_0_0f) << 2) |
                  (unsigned int)(NAN(fVar3) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
      fVar4 = fVar1;
    }
    *(float *)(param_2 + 0xf0) = fVar4;
    if (fVar4 == fVar5) {
      iVar2 = *(int *)(param_2 + 0xf4);
      if (iVar2 == 0) {
        uVar8 = 1;
        *(unsigned int *)(param_2 + 0xf8) = 1;
      }
      else if (iVar2 == lbl_831D3874 - 1) {
        uVar8 = lbl_831D3874 - 2;
        *(unsigned int *)(param_2 + 0xf8) = 0xffffffff;
      }
      else {
        uVar8 = *(int *)(param_2 + 0xf8) + iVar2;
      }
      *(unsigned int *)(param_2 + 0xf4) = uVar8;
      uVar6 = (unsigned __int64)(uVar8 >> 0x1f) - 1 & (unsigned __int64)uVar8;
      uVar7 = (unsigned __int64)lbl_831D3874 - 1;
      if ((int)uVar6 < (int)((unsigned __int64)lbl_831D3874 - 1)) {
        uVar7 = uVar6;
      }
      *(int *)(param_2 + 0xf4) = (int)uVar7;
      fn_824660C0(param_2,uVar7,1);
      fn_82270AC0(0xffffffff831d38ec);
      *(unsigned int *)(param_2 + 0xf0) = lbl_831D391C;
    }
  }
  return;
}

