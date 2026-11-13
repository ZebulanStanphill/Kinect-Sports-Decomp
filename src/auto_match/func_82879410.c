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
extern int fn_82FE6D80();


unsigned __int64 fn_82879410(unsigned __int64 param_1,unsigned __int64 param_2,int param_3)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned char auStack_a0 [32];
  unsigned char auStack_80 [32];
  unsigned char auStack_60 [32];
  unsigned char auStack_40 [40];
  
  uVar1 = fn_82FE6D80(param_2,param_1,*(unsigned int *)(param_3 + 0x3c),0);
  if ((int)uVar1 == 1) {
    uVar1 = 0x20200000;
  }
  else {
    fn_828648B8(auStack_a0,param_3 + 0x18);
    uVar2 = fn_8223B688(auStack_60,auStack_a0);
    uVar2 = fn_8286A3D8(uVar2,0,0xffffffff82022878,0x33);
    uVar2 = fn_8223DFF0(uVar2,0xffffffff82022870,4);
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

