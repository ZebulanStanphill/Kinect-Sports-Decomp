extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_c0;
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_8223DFF0();
extern int fn_82240378();
extern int fn_822924C0();
extern int fn_828647D8();
extern int fn_828647F0();
extern int fn_82864898();
extern int fn_828648B8();
extern int fn_82865170();
extern int fn_82866418();
extern int fn_82868378();
extern int fn_8286A3D8();
extern int fn_8286DA10();
extern int fn_82FEB1D0();


unsigned __int64 fn_828792E0(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int auStack_c0 [4];
  unsigned char auStack_b0 [32];
  unsigned char auStack_90 [32];
  unsigned char auStack_70 [32];
  unsigned char auStack_50 [80];
  
  uVar1 = *(unsigned int *)(param_1 + 0x3c);
  uVar2 = fn_828647D8(param_2);
  uVar2 = fn_82FEB1D0(uVar2,uVar1,auStack_c0);
  if ((int)uVar2 == 1) {
    uVar2 = fn_828647F0(auStack_50,auStack_c0[0]);
    fn_822924C0(param_3,uVar2);
    fn_82864898(auStack_50);
    uVar2 = 0x20200000;
  }
  else {
    fn_828648B8(auStack_b0,param_2);
    uVar3 = fn_8223B688(auStack_70,auStack_b0);
    uVar3 = fn_8286A3D8(uVar3,0,0xffffffff8202284c,0x23);
    uVar3 = fn_8223DFF0(uVar3,0xffffffff82022844,4);
    fn_82240378(auStack_90,uVar3);
    fn_82230300(auStack_70,1,0);
    fn_82230300(auStack_b0,1,0);
    uVar3 = fn_8223B688(auStack_50,auStack_90);
    uVar4 = fn_82868378();
    fn_8286DA10(uVar4,uVar3,uVar2);
    fn_82865170();
    fn_82866418();
    uVar2 = fn_828647F0(auStack_50,0);
    fn_822924C0(param_3,uVar2);
    fn_82864898(auStack_50);
    fn_82230300(auStack_90,1,0);
    uVar2 = 0xffffffffa0200000;
  }
  return uVar2;
}

