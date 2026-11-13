extern unsigned int *auStack_70;
extern int fn_82F6F870();
extern int fn_82F8DD20();
extern int fn_82F8DDF0();
extern int fn_82F8E4A0();
extern int fn_82F8EF78();
extern int fn_82F8F000();
extern int fn_82F8F070();
extern int fn_82F93A00();
extern unsigned int lbl_831BB8F0;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack0000002c;
extern unsigned int uStack_2c;


int fn_82F8DBA0(unsigned int param_1,unsigned int param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar6;
  unsigned __int64 uVar5;
  unsigned int uStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned int uStack0000002c;
  unsigned char auStack_70 [52];
  unsigned int uStack_2c;
  
  uVar1 = lbl_831BB8F0;
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack00000024 = param_3;
  uStack0000002c = param_4;
  iVar6 = fn_82F8F070(0xa0);
  if (iVar6 == 0) {
    uStack_2c = 0;
  }
  else {
    uStack_2c = fn_82F8DD20(iVar6);
  }
  fn_82F8EF78(auStack_70,uStack_2c);
  iVar6 = fn_82F93A00(auStack_70);
  uVar2 = uStack00000024;
  if (iVar6 == 0) {
    fn_82F8F000(auStack_70);
    fn_82F6F870(uVar1);
    iVar6 = -0x7ff8fff2;
  }
  else {
    uVar5 = fn_82F93A00(auStack_70);
    iVar6 = fn_82F8E4A0(uVar5,uVar2);
    uVar4 = uStack0000002c;
    uVar3 = uStack0000001c;
    uVar2 = uStack00000014;
    if (iVar6 < 0) {
      fn_82F8F000(auStack_70);
      fn_82F6F870(uVar1);
    }
    else {
      uVar5 = fn_82F93A00(auStack_70);
      iVar6 = fn_82F8DDF0(uVar5,uVar2,uVar3,uVar4);
      fn_82F8F000(auStack_70);
      fn_82F6F870(uVar1);
    }
  }
  return iVar6;
}

