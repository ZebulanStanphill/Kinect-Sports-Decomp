extern int fn_82FA5060();
extern int fn_82FECBF0();
extern int fn_82FEF1C8();
extern int fn_82FEF6B8();
extern int fn_82FEF6F8();
extern int fn_8301B9F0();
extern int fn_8301BB18();
extern int fn_8301D200();
extern unsigned int lbl_831BC770;


unsigned __int64 fn_82FED298(int param_1,unsigned int *param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  __int64 lVar4;
  
  *param_2 = 0;
  uVar1 = fn_82FA5060(lbl_831BC770,0x1dc);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar2 = 2;
  }
  else {
    fn_82FEF1C8();
    lVar4 = uVar1 + 8;
    if ((*(unsigned char *)(param_1 + 0xda) & 2) == 0) {
      uVar3 = 0x400;
      uVar2 = 48000;
    }
    else {
      uVar3 = 8;
      uVar2 = 0x177;
    }
    uVar2 = fn_8301B9F0(lVar4,uVar2,uVar3);
    if ((int)uVar2 == 1) {
      uVar2 = fn_8301D200(lVar4,param_1,1);
      *param_2 = (int)uVar1;
      return uVar2;
    }
    if ((int)uVar2 == 0x2e) {
      return uVar2;
    }
    fn_8301BB18(lVar4);
    fn_82FECBF0(uVar1);
  }
  fn_82FEF6F8(param_1);
  fn_82FEF6B8(param_1,1);
  *param_2 = 0;
  return uVar2;
}

