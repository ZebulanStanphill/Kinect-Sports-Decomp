extern int fn_8286A1E0();
extern int fn_82878410();
extern unsigned int uStack_40;


unsigned int * fn_82878620(unsigned int *param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned char uStack_40;
  
  *param_1 = (int)param_3;
  if ((param_3 & 0xffffffff) != (param_4 & 0xffffffff)) {
    uVar1 = *(unsigned int *)(param_2 + 4);
    if ((param_4 & 0xffffffff) != (unsigned __int64)uVar1) {
      do {
        fn_82878410(param_3,param_4);
        param_4 = param_4 + 0x30;
        param_3 = param_3 + 0x30;
      } while ((param_4 & 0xffffffff) != (unsigned __int64)uVar1);
    }
    fn_8286A1E0(param_3,*(unsigned int *)(param_2 + 4),param_2 + 0xc,uStack_40);
    *(int *)(param_2 + 4) = (int)param_3;
  }
  return param_1;
}

