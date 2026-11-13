extern double sqrt(double);
#define SQRT(x) sqrt(x)
extern int fn_829E6288();
extern int fn_829E6388();
extern float lbl_82057B90;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned __int64
fn_829E4DF8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,int param_5,
             unsigned int *param_6)

{
  float fVar1;
  float fVar2;
  unsigned __int64 uVar3;
  
  if (*(int *)(param_1 + 4) != 0) {
    uVar3 = fn_829E6388();
    if ((int)uVar3 != 0) {
      return uVar3;
    }
    fVar1 = *(float *)(param_5 + 0x14) - *(float *)(param_5 + 0x1c);
    fVar2 = *(float *)(param_5 + 0x10) - *(float *)(param_5 + 0x18);
    fVar1 = SQRT(fVar2 * fVar2 + fVar1 * fVar1) * lbl_82057B90;
    if ((fVar1 <= *(float *)(param_5 + 0x14)) && (fVar1 <= *(float *)(param_5 + 0x1c))) {
      uVar3 = fn_829E6288(param_2,param_3,param_4,param_5);
      return uVar3;
    }
    *param_6 = *param_6 | 0x200;
  }
  return 0xffffffff80004005;
}

