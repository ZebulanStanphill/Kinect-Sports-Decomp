typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_8249ABC0();
extern int fn_8249CF88();
extern int fn_82F4ECF8();
extern int fn_82F50D98();
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


unsigned __int64 fn_824A2220(unsigned __int64 param_1,int param_2)

{
  float *pfVar1;
  unsigned __int64 in_r0;
  int iVar2;
  int iVar3;
  int *piVar4;
  __int64 lVar5;
  float in_register_00010000;
  float in_ACC;
  float in_register_00010008;
  float in_vr0;
  float in_register_00010440;
  float in_register_00010444;
  float in_register_00010448;
  float in_vr68;
  
  fn_82F50D98(*(unsigned int *)(param_2 + 0xb8));
  iVar2 = fn_82F4ECF8();
  iVar3 = fn_8249ABC0();
  lVar5 = 0;
  piVar4 = (int *)(iVar3 + 0x14);
  do {
    if (*(int *)(*piVar4 + 0x20) == iVar2) goto LAB_824a2280;
    lVar5 = lVar5 + 1;
    piVar4 = piVar4 + 1;
  } while ((int)lVar5 < 2);
  if (iVar2 < 6) {
    loadVectorLeftIndexed128(in_r0,ZEXT48(&stack0x00000000) - 0x20);
    pfVar1 = (float *)((int)in_r0 + (int)param_1 & 0xfffffff0);
    *pfVar1 = in_register_00010440 * in_register_00010000;
    pfVar1[1] = in_register_00010444 * in_ACC;
    pfVar1[2] = in_register_00010448 * in_register_00010008;
    pfVar1[3] = in_vr68 * in_vr0;
  }
  else {
    lVar5 = 1;
LAB_824a2280:
    fn_8249CF88(param_1,*(unsigned int *)(iVar3 + 0xec),lVar5);
  }
  return param_1;
}

