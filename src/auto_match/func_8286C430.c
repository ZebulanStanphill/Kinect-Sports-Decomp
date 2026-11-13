extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_8223DFF0();
extern int fn_82240378();
extern int fn_828647D8();
extern int fn_828648B8();
extern int fn_82865170();
extern int fn_82866418();
extern int fn_82868378();
extern int fn_8286A3D8();
extern int fn_8286DA10();
extern int fn_82878C60();
extern int fn_82FEA1E0();


unsigned __int64
fn_8286C430(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,char param_4,
             unsigned __int64 param_5)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned char auStack_b0 [32];
  unsigned char auStack_90 [32];
  unsigned char auStack_70 [32];
  unsigned char auStack_50 [32];
  
  uVar1 = fn_828647D8(param_3);
  uVar2 = fn_82878C60(param_5);
  uVar1 = fn_82FEA1E0(uVar1,(param_4 == '\0') + '\x01',uVar2,0xfa,4);
  if ((int)uVar1 == 1) {
    uVar1 = 0x200f0000;
  }
  else {
    fn_828648B8(auStack_b0,param_3);
    uVar2 = fn_8223B688(auStack_70,auStack_b0);
    uVar2 = fn_8286A3D8(uVar2,0,0xffffffff820213f4,0x27);
    uVar2 = fn_8223DFF0(uVar2,0xffffffff820213ec,4);
    fn_82240378(auStack_90,uVar2);
    fn_82230300(auStack_70,1,0);
    fn_82230300(auStack_b0,1,0);
    uVar2 = fn_8223B688(auStack_50,auStack_90);
    uVar3 = fn_82868378();
    fn_8286DA10(uVar3,uVar2,uVar1);
    fn_82865170();
    fn_82866418();
    fn_82230300(auStack_90,1,0);
    uVar1 = 0xffffffffa00f0000;
  }
  return uVar1;
}

