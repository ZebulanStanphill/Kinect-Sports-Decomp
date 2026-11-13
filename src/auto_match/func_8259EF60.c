extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_98;
extern unsigned int *auStack_a0;
extern int fn_8259F6D8();
extern int fn_8259FF68();
extern int fn_825A06B8();
extern int fn_825A0B48();
extern int fn_825B2010();
extern int fn_826312F0();
extern int fn_82631578();
extern int fn_82631C78();
extern unsigned int lbl_831C1DE4;
extern unsigned int lbl_8320A898;
extern unsigned int uRam8327f96c;


void fn_8259EF60(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  __int64 lVar2;
  unsigned int auStack_a0 [2];
  unsigned char auStack_98 [8];
  unsigned char auStack_90 [16];
  unsigned char auStack_80 [128];
  
  uVar1 = lbl_8320A898;
  auStack_a0[0] = 0;
  fn_826312F0(lbl_8320A898,0,auStack_a0,1);
  lVar2 = fn_825B2010(*(unsigned int *)(param_1 + 0x1ac));
  if (lVar2 != 0) {
    fn_825A06B8(param_1,param_2,param_3,param_4,uVar1);
  }
  fn_82631C78(lbl_8320A898,0,0x10,0x70);
  fn_8259F6D8(auStack_80,uVar1,param_3,auStack_90,auStack_98);
  fn_8259FF68(param_2,uVar1,param_3,param_4,auStack_80,0);
  if (lbl_831C1DE4 != 0) {
    fn_825A0B48(param_1,param_2,param_3,auStack_80,uVar1);
  }
                    /* WARNING: Subroutine does not return */
  fn_82631578(uVar1,uRam8327f96c);
}

