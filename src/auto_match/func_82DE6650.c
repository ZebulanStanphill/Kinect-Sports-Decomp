typedef struct { unsigned __int64 lo, hi; } V16;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *auStack_30;
extern int fn_82CEBE20();
extern int fn_82DE52A0();
extern unsigned int lbl_821AAD20;
extern unsigned int stack0x00000000;
extern V16 loadVectorLeftIndexed128();


unsigned __int64
fn_82DE6650(double param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,unsigned __int64 param_5,
             int param_6)

{
  unsigned int *puVar1;
  unsigned __int64 in_r0;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int in_register_000100d0;
  unsigned int in_register_000100d4;
  unsigned int in_register_000100d8;
  unsigned int in_vr13;
  unsigned char auStack_30 [32];
  
  uVar2 = ZEXT48(&stack0x00000000);
  if ((param_1 <= (double)lbl_821AAD20) || (param_4 < 1)) {
    uVar3 = 1;
  }
  else {
    fn_82DE52A0(uVar2 - 0x48,param_3,param_6);
    *(float *)(param_6 + 4) = (float)param_1;
    loadVectorLeftIndexed128(in_r0,uVar2 - 0x50);
    puVar1 = (unsigned int *)((unsigned int)(auStack_30 + (int)in_r0) & 0xfffffff0);
    *puVar1 = in_register_000100d0;
    puVar1[1] = in_register_000100d4;
    puVar1[2] = in_register_000100d8;
    puVar1[3] = in_vr13;
    fn_82CEBE20(param_6 + 0x20,uVar2 - 0x30);
    uVar3 = 0;
  }
  return uVar3;
}

