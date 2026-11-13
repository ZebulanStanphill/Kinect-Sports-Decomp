#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define _uStack_18 ((*(unsigned __int64*)&uStack_18))
extern int fn_828233A8();
extern unsigned int uStack_14;
extern unsigned int uStack_18;


unsigned __int64 fn_82824640(__int64 param_1,unsigned int param_2,unsigned int param_3,int *param_4)

{
  unsigned __int64 uVar1;
  int aiStack_20;
  unsigned int uStack_18;
  unsigned int uStack_14;
  
  _uStack_18 = CONCAT44(param_2,param_3);
  fn_828233A8(param_1 + 0x38c,&aiStack_20,0xffffffff82824558,&uStack_18);
  if (aiStack_20 == 0) {
    uVar1 = 0xe;
  }
  else {
    uVar1 = 0;
    *param_4 = (int)(*(unsigned int *)(aiStack_20 + 0x14) << 5 | *(unsigned int *)(aiStack_20 + 0x14) >> 0x1b)
               >> 5;
  }
  return uVar1;
}

