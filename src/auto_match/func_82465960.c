#define NAN(x) ((x) != (x))
extern int fn_82270AC0();
extern int fn_824656C8();
extern int fn_82465C10();
extern int fn_82465FA8();
extern int fn_82465C10();
extern int fn_824660C0();
extern int fn_82520780();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821955F4;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D3870;
extern unsigned int lbl_831D3874;
extern unsigned int lbl_831D3908;
extern unsigned int lbl_831D3918;


void fn_82465960(double param_1,int param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  int iVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;

  fVar4 = ltcg_pool_0_0f;
  uVar7 = 0;
  if (*(int *)(param_2 + 0xd0) == 1) {
    if (*(int *)(param_2 + 0xdc) != 0) {
      fVar1 = (float)((double)*(float *)(param_2 + 0xdc) - param_1);
      fVar3 = -fVar1;
      fVar2 = ltcg_pool_0_0f;
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((fVar3 < ltcg_pool_0_0f) << 2) |
                    (unsigned int)(NAN(fVar3) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
        fVar2 = fVar1;
      }
      *(float *)(param_2 + 0xdc) = fVar2;
      if ((fVar2 == fVar4) && (*(int *)(param_2 + 0xd0) != 0)) {
        *(unsigned int *)(param_2 + 0xd0) = 0;
        if (*(int *)(param_2 + 0xd4) != 0) {
          *(unsigned int *)(param_2 + 0xd4) = 0;
        }
        *(float *)(param_2 + 0xdc) = fVar4;
      }
    }
    if (*(int *)(param_2 + 0xe0) != 0) {
      fVar1 = (float)((double)*(float *)(param_2 + 0xe0) - param_1);
      fVar3 = -fVar1;
      fVar2 = fVar4;
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((fVar3 < fVar4) << 2) | (unsigned int)(NAN(fVar3) || NAN(fVar4)) << 2)) <
          0.0) {
        fVar2 = fVar1;
      }
      *(float *)(param_2 + 0xe0) = fVar2;
      if (fVar2 == fVar4) {
        iVar5 = fn_824656C8(1,5,*(unsigned int *)(param_2 + 0xd4));
        if (iVar5 != *(int *)(param_2 + 0xd4)) {
          *(int *)(param_2 + 0xd4) = iVar5;
          if (iVar5 == 1) {
            *(unsigned int *)(param_2 + 0xe4) = lbl_831D3908;
          }
          else if (iVar5 == 2) {
            *(unsigned int *)(param_2 + 0xe8) = lbl_821955F4;
          }
          else if (iVar5 == 4) {
            *(unsigned int *)(param_2 + 0xf4) = 0;
            *(unsigned int *)(param_2 + 0xf8) = 1;
            *(unsigned int *)(param_2 + 0xf0) = lbl_821955F4;
          }
        }
        *(unsigned int *)(param_2 + 0xe0) = lbl_831D3870;
      }
    }
  }
  iVar5 = *(int *)(param_2 + 0xd4);
  if (iVar5 == 1) {
    fn_82465C10(param_2);
  }
  else if (iVar5 == 2) {
    fn_82465FA8(param_2);
  }
  else if (iVar5 == 3) {
    uVar6 = lbl_831D3874;
    if (lbl_831D3874 != 0) {
      do {
        iVar5 = fn_82520780((double)lbl_831D3918,0xffffffff83265a28);
        if (iVar5 != 0) {
          fn_824660C0(param_2,uVar7,1);
          fn_82270AC0(0xffffffff831d38ec);
          uVar6 = lbl_831D3874;
        }
        uVar7 = uVar7 + 1;
      } while ((uVar7 & 0xffffffff) < (unsigned __int64)uVar6);
    }
  }
  else if (iVar5 == 4) {
    fn_82465C10(param_2);
  }
  return;
}
