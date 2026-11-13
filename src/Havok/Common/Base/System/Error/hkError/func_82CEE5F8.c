extern unsigned int *auStack_220;
extern unsigned int *auStack_230;
extern int fn_82CED958();
extern int fn_82CED9E8();
extern int fn_82CEDB38();
extern int fn_82CEDC88();
extern int fn_82CEE578();
extern unsigned int *lbl_8323B464;


void fn_82CEE5F8(int param_1,unsigned __int64 param_2)

{
  unsigned short uVar1;
  unsigned __int64 in_r0;
  unsigned __int64 uVar2;
  int iVar3;
  unsigned char auStack_230 [16];
  unsigned char auStack_220 [512];
  
  fn_82CEE578(auStack_230,auStack_220,0x200);
  uVar1 = *(unsigned short *)(param_1 + 6);
  uVar2 = fn_82CEDB38(auStack_230,0xffffffff82132f90);
  uVar2 = fn_82CED9E8(uVar2,param_1);
  uVar2 = fn_82CEDB38(uVar2,0xffffffff82132f7c);
  uVar2 = fn_82CEDC88(uVar2,uVar1);
  uVar2 = fn_82CEDB38(uVar2,0xffffffff82132f74);
  uVar2 = fn_82CEDB38(uVar2,param_2);
  uVar2 = fn_82CEDB38(uVar2,0xffffffff82132f70);
  uVar2 = fn_82CEDB38(uVar2,0xffffffff82132f38);
  uVar2 = fn_82CEDB38(uVar2,0xffffffff82132f04);
  uVar2 = fn_82CEDB38(uVar2,0xffffffff82132e98);
  uVar2 = fn_82CEDB38(uVar2,0xffffffff82132e7c);
  fn_82CEDB38(uVar2,0xffffffff82132e44);
  iVar3 = (**(int (***)())(*lbl_8323B464 + 0xc))
                    (lbl_8323B464,3,0x2c66f2d8,auStack_220,0xffffffff82132e28,0x21);
  if (iVar3 != 0) {
    trapWord(0x1f,in_r0,0x16);
  }
  fn_82CED958(auStack_230);
  return;
}

