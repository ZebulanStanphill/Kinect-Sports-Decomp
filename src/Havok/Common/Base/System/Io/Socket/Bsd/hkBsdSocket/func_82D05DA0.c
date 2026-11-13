extern unsigned int *auStack_220;
extern unsigned int *auStack_250;
extern unsigned int *auStack_260;
extern unsigned int *auStack_2b0;
extern int fn_82CE07D8();
extern int fn_82CE08B8();
extern int fn_82CE0908();
extern int fn_82CE0978();
extern int fn_82CE09A8();
extern int fn_82CE7EE0();
extern int fn_82CED958();
extern int fn_82CEDB38();
extern int fn_82CEDC88();
extern int fn_82CEE238();
extern int fn_82CEE578();
extern int fn_82D04AB8();
extern int fn_82D04B90();
extern unsigned int *lbl_8323B464;
extern unsigned int uStack_26c;
extern unsigned int uStack_26e;
extern unsigned int uStack_270;
extern unsigned int uStack_29c;
extern unsigned int uStack_2a0;


unsigned __int64 fn_82D05DA0(int *param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int auStack_2b0 [4];
  unsigned int uStack_2a0;
  unsigned int uStack_29c;
  unsigned short uStack_270;
  unsigned short uStack_26e;
  unsigned int uStack_26c;
  unsigned char auStack_260 [16];
  unsigned char auStack_250 [48];
  unsigned char auStack_220 [544];
  
  (**(int (***)())(*param_1 + 0x10))();
  uVar1 = fn_82CE08B8(2,1,0);
  param_1[8] = (int)uVar1;
  if ((int)uVar1 == -1) {
    return 1;
  }
  uStack_26e = (unsigned short)param_2;
  uStack_270 = 2;
  auStack_2b0[0] = 1;
  uStack_26c = 0;
  fn_82CE0908(uVar1,0xffff,4,auStack_2b0,4);
  iVar2 = fn_82CE0978(param_1[8],&uStack_270,0x10);
  if ((iVar2 == -1) || (iVar2 = fn_82CE09A8(param_1[8],2), iVar2 == -1)) {
    (**(int (***)())(*param_1 + 0x10))(param_1);
    return 1;
  }
  fn_82CE7EE0(auStack_250);
  do {
    iVar2 = fn_82CE07D8(&uStack_2a0);
  } while (iVar2 == 0);
  if (iVar2 == 1) {
    uStack_2a0 = 0;
  }
  else if (uStack_2a0 != 0) {
    fn_82D04B90(auStack_250,0xffffffff820eb130,(((unsigned __int64)(uStack_2a0) >> 0) & 0xFF),(((unsigned __int64)(uStack_2a0) >> 8) & 0xFF),(((unsigned __int64)(uStack_2a0) >> 16) & 0xFF),
                  (unsigned char)uStack_2a0);
    goto LAB_82d05ef0;
  }
  if (uStack_29c == 0) {
    fn_82D04AB8(auStack_250,0xffffffff82196ea4);
  }
  else {
    fn_82D04B90(auStack_250,0xffffffff820eb130,(((unsigned __int64)(uStack_29c) >> 0) & 0xFF),(((unsigned __int64)(uStack_29c) >> 8) & 0xFF),(((unsigned __int64)(uStack_29c) >> 16) & 0xFF),
                  (unsigned char)uStack_29c);
  }
LAB_82d05ef0:
  fn_82CEE578(auStack_260,auStack_220,0x200);
  uVar1 = fn_82CEDB38(auStack_260,0xffffffff8213406c);
  uVar1 = fn_82CEE238(uVar1,auStack_250);
  uVar1 = fn_82CEDB38(uVar1,0xffffffff82134064);
  fn_82CEDC88(uVar1,param_2);
  (**(int (***)())(*lbl_8323B464 + 0xc))
            (lbl_8323B464,0,0xffffffffffffffff,auStack_220,0xffffffff82133fbc,0x16c);
                    /* WARNING: Subroutine does not return */
  fn_82CED958(auStack_260);
}

