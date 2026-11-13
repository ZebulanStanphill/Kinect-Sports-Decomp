extern unsigned int *auStack_820;
extern unsigned int *auStack_a20;
extern unsigned int *auStack_a60;
extern unsigned int *auStack_aa0;
extern int fn_8229DCA8();
extern int fn_8229E410();
extern int fn_82528BF8();
extern int fn_8265C9E0();
extern unsigned int lbl_821A8C90;
extern unsigned int lbl_83276730;


void fn_82353ED8(int *param_1)

{
  int iVar1;
  unsigned char auStack_aa0 [64];
  unsigned char auStack_a60 [64];
  unsigned char auStack_a20 [512];
  unsigned char auStack_820 [2056];
  
  fn_82528BF8(lbl_83276730,0xffffffff82196330,auStack_a20,0x100,0,1);
  fn_82528BF8(lbl_83276730,0xffffffff821b22e4,auStack_820,0x400,0,1);
  fn_82528BF8(lbl_83276730,0xffffffff82196344,auStack_aa0,0x20,0,1);
  fn_82528BF8(lbl_83276730,0xffffffff821a9874,auStack_a60,0x20,0,1);
  if (*param_1 == 0) {
    iVar1 = fn_8265C9E0(0x434);
    if (iVar1 == 0) {
      iVar1 = 0;
    }
    else {
      *(unsigned char ***)(iVar1 + 0x41c) = &lbl_821A8C90;
      fn_8229DCA8(iVar1,auStack_a20,auStack_820,auStack_aa0,auStack_a60,0xffffffff82354128,
                        param_1,1);
    }
    *param_1 = iVar1;
    fn_8229E410();
  }
  return;
}

