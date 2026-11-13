#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int memcpy();
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FFA6E8();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642F0;
extern unsigned int uStack_40;
extern unsigned int uStack_48;


unsigned __int64
fn_82FE7320(int param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4,int param_5,
             char param_6)

{
  unsigned __int64 uVar1;
  unsigned int *puVar2;
  unsigned __int64 uStack_48;
  unsigned int uStack_40;
  
  if (param_5 == 0) {
    uVar1 = 0x1f;
  }
  else {
    if (param_5 == 1) {
      param_4 = (unsigned int *)*param_4;
    }
    else if (param_6 != '\0') {
      puVar2 = (unsigned int *)fn_82FA5060(lbl_831BC768,param_5 << 2);
      if (puVar2 == (unsigned int *)0x0) {
        return 0x34;
      }
      memcpy(puVar2,param_4,param_5 << 2);
      param_4 = puVar2;
    }
    uVar1 = fn_82FFA6E8(lbl_832642F0,CONCAT44((param_1 == 0 ^ 1) + 2,param_2),
                              (unsigned __int64)param_3 << 0x20,CONCAT44(param_5,param_4),uStack_48,
                              (unsigned __int64)uStack_40 << 0x20);
    if (((int)uVar1 != 1) && (param_5 != 1)) {
      fn_82FA5190(lbl_831BC768,param_4);
    }
  }
  return uVar1;
}

