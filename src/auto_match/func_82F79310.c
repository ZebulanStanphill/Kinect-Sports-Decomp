extern unsigned int *auStack_a0;
extern int fn_82F78938();
extern int fn_82F78D40();
extern int fn_82F78F98();
extern int fn_82F78FE0();
extern int fn_82F79028();
extern int fn_82F79400();
extern unsigned int lbl_831BC2A4;
extern unsigned int stack0x00000020;
extern unsigned int stack0x00000030;
extern unsigned int stack0x0000003c;
extern unsigned int uStack00000020;
extern unsigned int uStack00000030;
extern unsigned int uStack0000003c;
extern unsigned int uStack_60;
extern unsigned int uStack_70;


unsigned __int64
fn_82F79310(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned __int64 in_r8;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000030;
  unsigned int uStack0000003c;
  unsigned char auStack_a0 [48];
  unsigned __int64 uStack_70;
  unsigned int uStack_60;
  
  uStack0000003c = (unsigned int)in_r8;
  uStack00000020 = param_1;
  uStack00000030 = param_3;
  iVar2 = fn_82F78D40(param_4,&stack0x00000030,in_r8);
  if (iVar2 == 0) {
    uStack_60 = uStack_60 & 0x7ffffff | 0x88000000;
    uStack_70 = param_2;
    fn_82F78938(auStack_a0,&stack0x0000003c,param_4,param_5,&stack0x00000020,&stack0x00000030,0)
    ;
    in_r8 = (unsigned __int64)uStack0000003c;
  }
  uVar1 = fn_82F78FE0(param_4);
  if ((lbl_831BC2A4 == 0) && ((int)uVar1 != 0)) {
    uStack00000030 = fn_82F79028(param_1,param_2,uStack00000030,uVar1,param_5);
  }
  else {
    fn_82F78F98();
    fn_82F79400(in_r8,0xffffffffc007feff);
  }
  return uStack00000030;
}

