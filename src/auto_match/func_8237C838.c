extern int fn_822B6C98();
extern int fn_822CEEC8();
extern int fn_82A1E1A8();
extern float lbl_821954C8;
extern unsigned int uStack_30;


void fn_8237C838(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned __int64 uStack_30;
  
  if (*(int *)(param_2 + 0x24) != 0) {
    fn_822B6C98(&uStack_30,param_2,9);
    if (*(float *)(param_1 + 0x194) < (((unsigned __int64)(uStack_30) >> 32) & 0xFFFFFFFF)) {
      uVar2 = (unsigned int)(*(float *)(param_1 + 400) < (((unsigned __int64)(uStack_30) >> 0) & 0xFFFFFFFF));
      uVar1 = fn_822CEEC8(param_2);
      if (uVar2 != uVar1) {
        uStack_30 = (__int64)(*(float *)(param_1 + 0x118) * lbl_821954C8);
        fn_82A1E1A8((((unsigned __int64)(uStack_30) >> 32) & 0xFFFFFFFF));
      }
    }
  }
  return;
}

