#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82FF9460();
extern int fn_82FFA6E8();
extern unsigned int lbl_832642F0;
extern unsigned int uStack_40;


unsigned __int64
fn_82FE77D0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int param_4,
             unsigned int *param_5)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned int uStack_40;
  
  if ((((param_1 & 0x7ff) == 0) && ((param_1 & 0xffffffff) != 0)) && (0x17 < (param_2 & 0xffffffff))
     ) {
    uVar2 = fn_82FF9460(param_1,param_2);
    *param_5 = uVar2;
    uVar1 = fn_82FFA6E8(lbl_832642F0,param_3,CONCAT44(param_4,1),CONCAT44(uVar2,0xffffffff),
                              CONCAT44((int)param_1,(int)param_2),(unsigned __int64)uStack_40 << 0x20);
  }
  else {
    uVar1 = 0x1f;
  }
  return uVar1;
}

