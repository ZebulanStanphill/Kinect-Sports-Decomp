#define CONCAT13(h,l) ((unsigned int)((((unsigned char)(h)) << 24) | ((unsigned int)(l))))
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82F68CC0();
extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FFA6E8();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642F0;
extern unsigned int uStack_48;


unsigned __int64
fn_82FE7428(unsigned int param_1,unsigned int param_2,unsigned char param_3,unsigned int param_4,
             unsigned int param_5,unsigned int *param_6,int param_7,char param_8)

{
  unsigned int *puVar2;
  unsigned __int64 uVar1;
  unsigned int uStack_48;
  
  if ((param_7 == 0) || (param_6 == (unsigned int *)0x0)) {
    uVar1 = 0x1f;
  }
  else {
    uStack_48 = CONCAT13(param_3,(((unsigned __int64)(uStack_48) >> 8) & 0xFFFFFF));
    if (param_7 == 1) {
      param_6 = (unsigned int *)*param_6;
    }
    else if (param_8 != '\0') {
      puVar2 = (unsigned int *)fn_82FA5060(lbl_831BC768,param_7 << 2);
      if (puVar2 == (unsigned int *)0x0) {
        return 0x34;
      }
      fn_82F68CC0(puVar2,param_6,param_7 << 2);
      param_6 = puVar2;
    }
    uVar1 = fn_82FFA6E8(lbl_832642F0,CONCAT44(4,param_1),(unsigned __int64)param_2 << 0x20,
                              CONCAT44(param_4,param_5),CONCAT44(uStack_48,param_7),
                              ZEXT48(param_6) << 0x20);
    if (((int)uVar1 != 1) && (param_7 != 1)) {
      fn_82FA5190(lbl_831BC768,param_6);
    }
  }
  return uVar1;
}

