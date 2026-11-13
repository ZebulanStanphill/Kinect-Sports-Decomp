#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82FE90B0();
extern int fn_82FFA6E8();
extern unsigned int lbl_832642F0;
extern unsigned int uStack_20;
extern unsigned int uStack_28;


void fn_82FE96D0(int param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int param_4,unsigned int param_5
                  )

{
  unsigned int uVar1;
  unsigned __int64 uStack_28;
  unsigned int uStack_20;
  
  uVar1 = fn_82FE90B0(param_2);
  fn_82FFA6E8(lbl_832642F0,CONCAT44((param_1 == 0 ^ 1) + 6,param_3),(unsigned __int64)param_4 << 0x20
                    ,CONCAT44(uVar1,param_5),uStack_28,(unsigned __int64)uStack_20 << 0x20);
  return;
}

