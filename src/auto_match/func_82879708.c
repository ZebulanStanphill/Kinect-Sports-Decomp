extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_8223DFF0();
extern int fn_82240378();
extern int fn_82336760();
extern int fn_828648B8();
extern int fn_82868378();
extern int fn_8286A3D8();
extern int fn_8286DA10();
extern int fn_82FE7078();
extern unsigned int uStack_fc;


unsigned __int64 fn_82879708(int param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int ***pppuVar4;
  unsigned int **appuStack_110 [5];
  unsigned int uStack_fc;
  unsigned char auStack_f0 [32];
  unsigned char auStack_d0 [32];
  unsigned char auStack_b0 [32];
  unsigned char auStack_90 [32];
  unsigned char auStack_70 [32];
  unsigned char auStack_50 [80];
  
  fn_828648B8(auStack_b0,param_1 + 0x18);
  fn_8223B688(appuStack_110,auStack_b0);
  fn_82230300(auStack_b0,1,0);
  pppuVar4 = (unsigned int ***)appuStack_110[0];
  if (uStack_fc < 0x10) {
    pppuVar4 = appuStack_110;
  }
  uVar1 = fn_82FE7078(*(unsigned int *)(param_1 + 0x3c),pppuVar4);
  if ((int)uVar1 == 1) {
    uVar1 = 0x20200000;
  }
  else {
    fn_828648B8(auStack_d0,param_1 + 0x18);
    if (uStack_fc < 0x10) {
      appuStack_110[0] = appuStack_110;
    }
    uVar2 = fn_8223B688(auStack_90,auStack_d0);
    uVar2 = fn_8286A3D8(uVar2,0,0xffffffff8202290c,0x22);
    uVar2 = fn_8223DFF0(uVar2,0xffffffff82022908,2);
    uVar3 = fn_82230110(auStack_70,appuStack_110[0]);
    uVar2 = fn_82336760(uVar2,uVar3);
    uVar2 = fn_8223DFF0(uVar2,0xffffffff82022904,2);
    fn_82240378(auStack_f0,uVar2);
    fn_82230300(auStack_90,1,0);
    fn_82230300(auStack_70,1,0);
    fn_82230300(auStack_d0,1,0);
    uVar2 = fn_8223B688(auStack_50,auStack_f0);
    uVar3 = fn_82868378();
    fn_8286DA10(uVar3,uVar2,uVar1);
    fn_82230300(auStack_f0,1,0);
    uVar1 = 0xffffffffa0200000;
  }
  fn_82230300(appuStack_110,1,0);
  return uVar1;
}

