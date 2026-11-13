typedef unsigned char bool;
#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
extern unsigned int *auStack_40;
extern unsigned int *auStack_70;
extern int fn_82BF9D18();
extern int fn_82BFA140();
extern int fn_82F6D460();
extern unsigned int lbl_83175598;
extern unsigned int lbl_8322B4F0;
extern unsigned int uStack_28;
extern unsigned int uStack_30;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;


bool fn_82BF3860(unsigned __int64 param_1)

{
  int iVar1;
  unsigned int auStack_70 [4];
  unsigned char *puStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned __int64 auStack_40 [2];
  unsigned __int64 uStack_30;
  unsigned int uStack_28;
  
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  puStack_60 = lbl_83175598;
  if (lbl_83175598 == (unsigned char *)0x0) {
    uStack_5c = 0;
  }
  else {
    uStack_5c = fn_82F6D460(lbl_83175598,lbl_8322B4F0);
  }
  uStack_58 = (unsigned int)param_1;
  uStack_50 = CONCAT22(0x50,(((unsigned __int64)(uStack_50) >> 16) & 0xFFFF));
  if ((param_1 & 0xffffffff) == 0) {
    uStack_54 = 0;
  }
  else {
    uStack_54 = fn_82F6D460(param_1,0x104);
  }
  auStack_40[0] = 0;
  auStack_70[0] = 0;
  uStack_30 = 0;
  uStack_28 = 0;
  iVar1 = fn_82BF9D18(auStack_70,&puStack_60,auStack_40);
  if (iVar1 == 0) {
    fn_82BFA140(auStack_70[0],1);
  }
  return iVar1 == 0;
}

