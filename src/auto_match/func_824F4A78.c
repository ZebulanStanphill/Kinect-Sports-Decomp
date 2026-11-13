extern unsigned int *auStack_24;
extern unsigned int *auStack_28;
extern unsigned int *auStack_2c;
extern int fn_8262F8D8();
extern int fn_8263C7F0();
extern int fn_8262FBD8();
extern unsigned int lbl_821C1E40;
extern unsigned int uStack_30;


void fn_824F4A78(unsigned int *param_1,unsigned int param_2)

{
  unsigned int uVar1;
  unsigned int uStack_30;
  unsigned char auStack_2c [4];
  unsigned char auStack_28 [4];
  unsigned char auStack_24 [20];

  param_1[1] = param_2;
  *param_1 = &lbl_821C1E40;
  uVar1 = fn_8263C7F0(0x300,0x300,1,1,0,0x28000102,0,3);
  param_1[4] = uVar1;
  uVar1 = fn_8263C7F0(0x300,0x300,1,1,0,0x28000102,0,3);
  param_1[2] = uVar1;
  fn_8262F8D8(uVar1,0,0,0,&uStack_30,auStack_2c,auStack_24,auStack_28);
                    /* WARNING: Subroutine does not return */
  fn_8262FBD8(uStack_30,0x7f,0x300);
}
