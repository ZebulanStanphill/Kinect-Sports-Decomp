extern int fn_829E59D8();
extern unsigned int iStack_40;
extern unsigned int lbl_82057B3C;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned __int64
fn_829E3E10(unsigned __int64 param_1,double param_2,int param_3,int param_4,unsigned __int64 param_5,
             unsigned __int64 param_6,unsigned int *param_7,unsigned int *param_8)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  int iStack_40;
  
  uVar2 = 0;
  if (((*(int *)(param_3 + 0x8c) == 0) && (param_4 != 1)) && (*(int *)(param_3 + 0x94) == 0)) {
    uVar1 = fn_829E59D8((double)*(float *)(param_3 + 0x98),(double)*(float *)(param_3 + 0x9c),
                            param_1,param_2,param_3 + 0x24);
    if ((int)uVar1 < 0) {
      return uVar1;
    }
    if ((iStack_40 != 0) ||
       ((float)((double)*(float *)(param_3 + 0x9c) * (double)lbl_82057B3C) <
        ABS((float)((double)*(float *)(param_3 + 0x9c) - param_2)))) {
      uVar2 = 1;
    }
  }
  *param_7 = uVar2;
  *param_8 = 0;
  return 0;
}

