extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_82230300();
extern int fn_822402F8();
extern int fn_825200F0();
extern int fn_82522D98();
extern int fn_8265BF48();
extern int fn_827D78D0();
extern unsigned int lbl_83265A24;
extern unsigned int uStack0000002c;


void fn_82559368(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned int param_4)

{
  unsigned __int64 uVar1;
  unsigned int uStack0000002c;
  unsigned int auStack_a0 [4];
  unsigned char auStack_90 [16];
  unsigned char auStack_70 [32];
  unsigned char auStack_50 [80];
  
  uStack0000002c = param_4;
  fn_82230300(auStack_70,0,0);
  auStack_a0[0] = fn_8265BF48(param_1,0);
  uVar1 = fn_825200F0(auStack_90,auStack_a0);
  fn_827D78D0(auStack_50,lbl_83265A24,uVar1,0xffffffffffffffff,0);
  fn_822402F8(auStack_70,auStack_50);
  fn_82230300(auStack_50,1,0);
                    /* WARNING: Subroutine does not return */
  fn_82522D98(0x148);
}

