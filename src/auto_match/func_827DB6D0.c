extern unsigned int *auStack_68;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_827D9D98();
extern int fn_827DAB30();
extern int fn_827DADC8();
extern int fn_827E58F0();
extern int fn_827E5BE8();
extern unsigned int iStack_5c;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_60;


unsigned __int64
fn_827DB6D0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6)

{
  __int64 lVar1;
  unsigned __int64 uVar2;
  unsigned char auStack_68 [8];
  unsigned int uStack_60;
  int iStack_5c;
  unsigned int uStack_58;
  unsigned int uStack_54;
  
  fn_827DADC8(&uStack_60,param_1,param_4,param_5,param_6,0);
  lVar1 = fn_827E58F0(0x34);
  if (lVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uStack_58 = 0;
    uStack_54 = 0;
    fn_82517978(&uStack_58,uStack_60,iStack_5c,0);
    uVar2 = fn_827D9D98(param_2);
    uVar2 = fn_827E5BE8(lVar1,0,param_2,uVar2,param_3,param_4,param_5,&uStack_58);
  }
  fn_82517978(auStack_68,uStack_60,iStack_5c,0);
  uVar2 = fn_827DAB30(param_1,uVar2,param_6,auStack_68,0);
  if (iStack_5c != 0) {
    fn_822315A0();
  }
  return uVar2;
}

