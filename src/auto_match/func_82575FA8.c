extern int fn_8251F720();
extern int fn_825758D0();
extern int fn_82575C78();


unsigned __int64
fn_82575FA8(unsigned __int64 param_1,unsigned __int64 param_2,int param_3,unsigned int *param_4,unsigned __int64 param_5,
             unsigned __int64 param_6,unsigned __int64 param_7)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  unsigned int uVar3;
  
  if (*(char *)(param_3 + 8) == '\0') {
    uVar1 = 0;
    uVar3 = *param_4 >> 0x18;
    if (*param_4 == 0) {
      uVar3 = 0x7a;
    }
    if (uVar3 == 0x1b) {
      uVar1 = fn_82575C78(param_1,param_2,param_3,param_4,param_5,0,param_6,param_7);
    }
    else {
      lVar2 = fn_8251F720(param_4,0);
      if (lVar2 != 0) {
        uVar1 = fn_825758D0(param_1,param_2,param_3,*param_4,0,lVar2,0,param_5,0,param_6);
      }
    }
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}

