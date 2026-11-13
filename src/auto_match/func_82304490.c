typedef struct { unsigned __int64 lo, hi; } V16;
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_822C6B30();
extern int fn_825613E0();
extern unsigned int ltcg_pool_0_0f;
extern V16 loadVectorLeftIndexed128();


void fn_82304490(int param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  float *pfVar2;
  unsigned __int64 in_r0;
  float in_register_00010000;
  float in_ACC;
  float in_register_00010008;
  float in_vr0;
  
  if ((*(unsigned int **)(param_1 + 0x54))[1] != 0) {
    uVar1 = *(unsigned int *)(param_1 + 0x24);
    fn_822C6B30(param_2,*(unsigned int *)(param_1 + 0x20),(unsigned __int64)uVar1,
                      CONCAT44(ltcg_pool_0_0f,**(unsigned int **)(param_1 + 0x54)),
                      (unsigned __int64)ltcg_pool_0_0f << 0x20);
    pfVar2 = (float *)((int)in_r0 + (int)param_2 & 0xfffffff0);
    loadVectorLeftIndexed128(in_r0,(unsigned __int64)uVar1 + 0x40);
    in_register_00010000 = *pfVar2 * in_register_00010000;
    in_ACC = pfVar2[1] * in_ACC;
    in_register_00010008 = pfVar2[2] * in_register_00010008;
    in_vr0 = pfVar2[3] * in_vr0;
    fn_825613E0(-(double)*(float *)(uVar1 + 0x40),(double)*(float *)(uVar1 + 0x40));
    pfVar2 = (float *)(uVar1 + 0x10 & 0xfffffff0);
    *pfVar2 = in_register_00010000;
    pfVar2[1] = in_ACC;
    pfVar2[2] = in_register_00010008;
    pfVar2[3] = in_vr0;
  }
  return;
}

