extern int fn_8267BE38();
extern int fn_8267C4F0();
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_8269A608();
extern int fn_826BD8C8();


void fn_82682748(unsigned __int64 param_1,int param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  
  uVar1 = *(unsigned int *)(param_2 + 4) & 0x8f;
  if (uVar1 == 4) {
    uVar1 = param_3[2];
    param_3[2] = (unsigned int)((unsigned __int64)uVar1 - 1);
    if ((unsigned __int64)uVar1 - 1 == 0) {
      fn_826944C8(param_3);
    }
  }
  else if (uVar1 == 5) {
    fn_8267C4F0(param_3 + -3);
  }
  else if (5 < uVar1) {
    if (uVar1 < 8) {
      fn_826BD8C8(param_3);
      fn_826824B0();
    }
    else if (uVar1 == 8) {
      uVar1 = *param_3;
      *param_3 = (unsigned int)((unsigned __int64)uVar1 - 1);
      if ((__int64)((unsigned __int64)uVar1 - 1) < 1) {
        fn_8269A608(param_3);
        fn_8267BE38(param_3);
      }
    }
  }
  return;
}

