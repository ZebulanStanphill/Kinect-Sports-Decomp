extern unsigned int *auStack_a0;
extern int fn_82F78938();
extern int fn_82F78D40();
extern int fn_82F78F98();
extern int fn_82F78FE0();
extern int fn_82F79028();
extern int fn_82F79400();
extern unsigned int lbl_82005710;
extern unsigned int lbl_831BC2A4;
extern unsigned int stack0x00000020;
extern unsigned int stack0x00000028;
extern unsigned int stack0x00000034;
extern unsigned int uStack00000020;
extern unsigned int uStack00000028;
extern unsigned int uStack00000034;
extern unsigned int uStack_60;


unsigned __int64
fn_82F79238(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
             unsigned __int64 param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  int iVar2;
  unsigned __int64 uVar1;
  unsigned __int64 uStack00000020;
  unsigned __int64 uStack00000028;
  unsigned int uStack00000034;
  unsigned char auStack_a0 [64];
  unsigned int uStack_60;
  
  uStack00000034 = (unsigned int)param_7;
  uStack00000020 = param_1;
  uStack00000028 = param_2;
  iVar2 = fn_82F78D40(param_3,&stack0x00000028,param_7);
  if (iVar2 == 0) {
    uStack_60 = uStack_60 & 0x7fffffff;
    fn_82F78938(auStack_a0,&stack0x00000034,param_3,param_4,&stack0x00000020,&stack0x00000028,0)
    ;
    param_7 = (unsigned __int64)uStack00000034;
  }
  uVar1 = fn_82F78FE0(param_3);
  if ((lbl_831BC2A4 == 0) && ((int)uVar1 != 0)) {
    uStack00000028 = fn_82F79028(param_1,lbl_82005710,uStack00000028,uVar1,param_4);
  }
  else {
    fn_82F78F98();
    fn_82F79400(param_7,0xffffffffc007feff);
  }
  return uStack00000028;
}

