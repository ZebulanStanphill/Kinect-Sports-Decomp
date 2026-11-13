#define CONCAT22(h,l) ((unsigned int)((((unsigned short)(h)) << 16) | ((unsigned short)(l))))
extern unsigned int *auStack_40;
extern unsigned int *auStack_70;
extern int fn_82BF9D18();
extern int fn_82BF9EC0();
extern int fn_82BFA140();
extern int fn_82F6D460();
extern unsigned int lbl_831751CC;
extern unsigned int lbl_831751D0;
extern unsigned int lbl_83175598;
extern unsigned int lbl_8322B4F0;
extern unsigned int uStack_28;
extern unsigned int uStack_30;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;


unsigned __int64 fn_82BF3718(unsigned __int64 param_1,unsigned int *param_2)

{
  unsigned __int64 uVar1;
  int iVar3;
  __int64 lVar2;
  unsigned __int64 uVar4;
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
  iVar3 = fn_82BF9D18(auStack_70,&puStack_60,auStack_40);
  if (iVar3 == 0) {
    uVar1 = auStack_40[0] & 0xffffffff;
    if (uVar1 != 0) {
      lVar2 = (*(int (**)())lbl_831751D0)(uVar1);
      *param_2 = (int)lVar2;
      uVar4 = 0;
      if ((lVar2 != 0) &&
         (iVar3 = fn_82BF9EC0(auStack_70[0],lVar2,uVar1), uVar4 = uVar1, iVar3 != 0)) {
        (*(int (**)())lbl_831751CC)(*param_2);
        *param_2 = 0;
        uVar4 = 0;
      }
      fn_82BFA140(auStack_70[0],0);
      return uVar4;
    }
    fn_82BFA140(auStack_70[0],0);
  }
  return 0;
}

