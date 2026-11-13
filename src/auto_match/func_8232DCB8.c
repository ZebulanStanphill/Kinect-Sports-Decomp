#define NAN(x) ((x) != (x))
extern int fn_8232C5F0();
extern int fn_82520780();
extern unsigned int lbl_821954D8;
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_83265A28;


void fn_8232DCB8(int param_1,unsigned int param_2,unsigned __int64 param_3,int param_4,int param_5)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  unsigned __int64 uVar5;
  
  if (param_5 == 0) {
    if ((param_2 < 3) || ((5 < param_2 && (param_2 == 6)))) {
      uVar5 = 1;
    }
    else {
      uVar5 = 0;
    }
    fn_8232C5F0((double)*(float *)(param_1 + 0x14),*(unsigned int *)(param_1 + 0xc),uVar5);
  }
  else {
    iVar4 = fn_82520780((double)*(float *)(param_1 + 0x34),0xffffffff83265a28);
    fVar1 = lbl_821CA460;
    if (((iVar4 != 0) && (*(int *)(param_1 + 100) == 0)) ||
       ((*(int *)(param_1 + 0x6c) == param_4 && (*(int *)(param_1 + 100) != 0)))) {
      *(unsigned int *)(param_1 + 100) = 1;
      lbl_83265A28 = lbl_83265A28 * 0x19660d + 0x3c6ef35f;
      *(float *)(param_1 + 0x68) =
           (*(float *)(param_1 + 0x3c) - *(float *)(param_1 + 0x38)) *
           ((float)(lbl_83265A28 & 0x7fffff | 0x3f800000) - fVar1) + *(float *)(param_1 + 0x38);
    }
    if (*(int *)(param_1 + 0x6c) == param_4) {
      fVar2 = *(float *)(param_1 + 0x60) - *(float *)(param_1 + 0x44);
      fVar3 = fVar2 - *(float *)(param_1 + 0x40);
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((fVar3 < ltcg_pool_0_0f) << 2) |
                    (unsigned int)(NAN(fVar3) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
        fVar2 = *(float *)(param_1 + 0x40);
      }
      if (*(float *)(&lbl_821954D8 +
                    ((unsigned int)(unsigned char)((fVar2 - fVar1 < ltcg_pool_0_0f) << 2) |
                    (unsigned int)(NAN(fVar2 - fVar1) || NAN(ltcg_pool_0_0f)) << 2)) < 0.0) {
        fVar1 = fVar2;
      }
      *(float *)(param_1 + 0x60) = fVar1;
    }
  }
  *(int *)(param_1 + 0x6c) = param_4;
  return;
}

