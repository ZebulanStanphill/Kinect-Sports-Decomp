extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
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
extern int fn_82FE6A00();


unsigned __int64 fn_828791E8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned char auStack_a0 [32];
  unsigned char auStack_80 [32];
  unsigned char auStack_60 [32];
  unsigned char auStack_40 [32];
  
  uVar1 = *(unsigned int *)(param_1 + 0x3c);
  uVar2 = fn_828647D8(param_3);
  uVar3 = fn_828647D8(param_2);
  uVar2 = fn_82FE6A00(uVar3,uVar2,uVar1);
  if ((int)uVar2 == 1) {
    uVar2 = 0x20200000;
  }
  else {
    fn_828648B8(auStack_a0,param_2);
    uVar3 = fn_8223B688(auStack_60,auStack_a0);
    uVar3 = fn_8286A3D8(uVar3,0,0xffffffff82022824,0x1c);
    uVar3 = fn_8223DFF0(uVar3,0xffffffff8202281c,4);
    fn_82240378(auStack_80,uVar3);
    fn_82230300(auStack_60,1,0);
    fn_82230300(auStack_a0,1,0);
    uVar3 = fn_8223B688(auStack_40,auStack_80);
    uVar4 = fn_82868378();
    fn_8286DA10(uVar4,uVar3,uVar2);
    fn_82865170();
    fn_82866418();
    fn_82230300(auStack_80,1,0);
    uVar2 = 0xffffffffa0200000;
  }
  return uVar2;
}

