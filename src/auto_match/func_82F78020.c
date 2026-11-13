extern unsigned int *auStack_a0;
extern int fn_82F71B90();
extern int fn_82F71CD0();
extern int fn_82F71D30();
extern int fn_82F726A8();
extern int fn_82F77CB8();
extern int fn_82F780E4();
extern unsigned int lbl_832635A0;
extern unsigned int uRam832635a4;
extern unsigned int uRam832635a8;
extern unsigned int uRam832635ac;
extern unsigned int uRam832635b0;


unsigned int
fn_82F78020(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4,
             unsigned int param_5,unsigned short param_6)

{
  int iVar1;
  unsigned int uVar2;
  unsigned char auStack_a0 [160];
  
  if ((param_4 != 0) && (iVar1 = fn_82F71B90(5), iVar1 != 0)) {
    fn_82F71CD0(5);
    uRam832635b0 = 0;
    uRam832635a8 = 0;
    uRam832635ac = 0;
    lbl_832635A0 = param_4;
    uRam832635a4 = param_5;
    fn_82F726A8(auStack_a0,param_1,param_2,param_3,0,param_6);
    uVar2 = fn_82F77CB8(auStack_a0);
    fn_82F71D30(0xffffffff832635a0);
    fn_82F780E4();
    return uVar2;
  }
  return 0;
}

