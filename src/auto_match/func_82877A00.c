extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_8223DFF0();
extern int fn_82240378();
extern int fn_82809CB0();
extern int fn_828647D8();
extern int fn_828648B8();
extern int fn_82868378();
extern int fn_8286A3D8();
extern int fn_8286DA10();
extern int fn_82FE8F28();
extern unsigned int lbl_8201DCB8;


unsigned __int64 fn_82877A00(double param_1,int param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  double dVar4;
  unsigned char auStack_a0 [1];
  unsigned char auStack_80 [32];
  unsigned char auStack_60 [32];
  unsigned char auStack_40 [40];
  
  dVar4 = (double)fn_82809CB0((double)(float)(param_1 - (double)*(float *)(param_2 + 0x2c)));
  if ((double)lbl_8201DCB8 < dVar4) {
    *(float *)(param_2 + 0x2c) = (float)param_1;
    fn_828647D8(param_2 + 4);
    uVar1 = fn_82FE8F28(param_1);
    if ((int)uVar1 != 1) {
      fn_828648B8(auStack_a0,param_2 + 4);
      uVar2 = fn_8223B688(auStack_60,auStack_a0);
      uVar2 = fn_8286A3D8(uVar2,0,0xffffffff8202273c,0x27);
      uVar2 = fn_8223DFF0(uVar2,0xffffffff82022738,2);
      fn_82240378(auStack_80,uVar2);
      fn_82230300(auStack_60,1,0);
      fn_82230300(auStack_a0,1,0);
      uVar2 = fn_8223B688(auStack_40,auStack_80);
      uVar3 = fn_82868378();
      fn_8286DA10(uVar3,uVar2,uVar1);
      fn_82230300(auStack_80,1,0);
      return 0xffffffffa0330000;
    }
  }
  return 0x20330000;
}

