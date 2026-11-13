extern unsigned int *auStack_190;
extern unsigned int *auStack_1a0;
extern int fn_822315A0();
extern int fn_82522ED8();
extern int fn_82816600();
extern int fn_82816F98();
extern int fn_828171A0();
extern int fn_82A1EFC0();
extern unsigned int iStack_58;
extern unsigned int uStack_5c;


unsigned int
fn_8259A070(unsigned int *param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4,
             unsigned __int64 param_5,char param_6,int param_7)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int auStack_1a0 [4];
  unsigned char auStack_190 [308];
  unsigned int uStack_5c;
  int iStack_58;
  
  auStack_1a0[0] = 0;
  uStack_5c = 0;
  iStack_58 = 0;
  if (param_7 == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82A1EFC0(auStack_190,0,0x148);
  }
  *(unsigned int *)(param_7 + 4) = *param_1;
  fn_82816600(0xffffffff821c7b80,0xffffffff82ba02a8,param_7,auStack_1a0,1);
  if (param_6 != '\0') {
    fn_82522ED8(*param_1);
    *param_1 = 0;
  }
  *(unsigned int *)(param_7 + 4) = 0;
  fn_82816F98(auStack_1a0[0],1,param_5);
  uVar1 = fn_828171A0(auStack_1a0[0],0xffffffff821c7b34);
  *param_2 = uVar1;
  uVar2 = fn_828171A0(auStack_1a0[0],0xffffffff821c7b44);
  uVar1 = auStack_1a0[0];
  *param_3 = uVar2;
  *param_4 = 0;
  if (iStack_58 != 0) {
    fn_822315A0(iStack_58);
  }
  return uVar1;
}

