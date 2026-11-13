#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
extern unsigned int *auStack_50;
extern unsigned int *auStack_80;
extern int fn_82BF99F0();
extern int fn_82BF9FC0();
extern int fn_82BFA140();
extern int fn_82F6D460();
extern unsigned int lbl_83175598;
extern unsigned int lbl_8322B4F0;
extern unsigned int uStack_38;
extern unsigned int uStack_40;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;


unsigned __int64 fn_82BF3608(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  unsigned int auStack_80 [4];
  unsigned char *puStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned __int64 auStack_50 [2];
  unsigned __int64 uStack_40;
  unsigned __int64 uStack_38;
  
  uStack_6c = 0;
  uStack_68 = 0;
  uStack_64 = 0;
  uStack_60 = 0;
  puStack_70 = lbl_83175598;
  if (lbl_83175598 == (unsigned char *)0x0) {
    uStack_6c = 0;
  }
  else {
    uStack_6c = fn_82F6D460(lbl_83175598,lbl_8322B4F0);
  }
  uStack_68 = (unsigned int)param_1;
  uStack_60 = CONCAT22(0x50,(((unsigned __int64)(uStack_60) >> 16) & 0xFFFF));
  if ((param_1 & 0xffffffff) == 0) {
    uStack_64 = 0;
  }
  else {
    uStack_64 = fn_82F6D460(param_1,0x104);
  }
  auStack_80[0] = 0;
  auStack_50[0] = param_3 & 0xffffffff;
  uStack_38 = 0;
  uStack_40 = 0;
  iVar1 = fn_82BF99F0(auStack_80,&puStack_70,auStack_50);
  if (iVar1 == 0) {
    iVar1 = fn_82BF9FC0(auStack_80[0],param_2,param_3);
    if (iVar1 == 0) {
      fn_82BFA140(auStack_80[0],0);
      return param_3;
    }
    fn_82BFA140(auStack_80[0],1);
  }
  return 0;
}

