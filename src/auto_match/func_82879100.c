extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_8223DFF0();
extern int fn_82240378();
extern int fn_828648B8();
extern int fn_82868378();
extern int fn_8286A3D8();
extern int fn_8286DA10();
extern int fn_82FE6770();


unsigned __int64 fn_82879100(int param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned char auStack_a0 [32];
  unsigned char auStack_80 [32];
  unsigned char auStack_60 [32];
  unsigned char auStack_40 [40];
  
  uVar1 = fn_82FE6770(*(unsigned int *)(param_1 + 0x3c));
  if ((int)uVar1 == 1) {
    uVar1 = 0x20200000;
  }
  else {
    fn_828648B8(auStack_a0,param_1 + 0x18);
    uVar2 = fn_8223B688(auStack_60,auStack_a0);
    uVar2 = fn_8286A3D8(uVar2,0,0xffffffff820227ec,0x2e);
    uVar2 = fn_8223DFF0(uVar2,0xffffffff820227e4,4);
    fn_82240378(auStack_80,uVar2);
    fn_82230300(auStack_60,1,0);
    fn_82230300(auStack_a0,1,0);
    uVar2 = fn_8223B688(auStack_40,auStack_80);
    uVar3 = fn_82868378();
    fn_8286DA10(uVar3,uVar2,uVar1);
    fn_82230300(auStack_80,1,0);
    uVar1 = 0xffffffffa0200000;
  }
  return uVar1;
}

