typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_8225F160();
extern int fn_8225F3C0();
extern int fn_8249D008();
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


unsigned __int64 fn_8249CF88(unsigned __int64 param_1,unsigned int param_2,unsigned __int64 param_3)

{
  float *pfVar1;
  unsigned __int64 in_r0;
  int iVar2;
  float in_register_00010000;
  float in_ACC;
  float in_register_00010008;
  float in_vr0;
  float in_register_00010440;
  float in_register_00010444;
  float in_register_00010448;
  float in_vr68;
  
  fn_8225F160();
  iVar2 = fn_8225F3C0();
  if (iVar2 < 2) {
    loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x30);
    pfVar1 = (float *)((int)in_r0 + (int)param_1 & 0xfffffff0);
    *pfVar1 = in_register_00010440 * in_register_00010000;
    pfVar1[1] = in_register_00010444 * in_ACC;
    pfVar1[2] = in_register_00010448 * in_register_00010008;
    pfVar1[3] = in_vr68 * in_vr0;
  }
  else {
    fn_8249D008(param_1,param_2,param_3);
  }
  return param_1;
}

