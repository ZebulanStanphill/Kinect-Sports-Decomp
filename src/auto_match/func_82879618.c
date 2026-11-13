extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
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
extern int fn_82FEB060();


unsigned __int64 fn_82879618(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned char auStack_b0 [16];
  unsigned char auStack_a0 [32];
  unsigned char auStack_80 [32];
  unsigned char auStack_60 [32];
  unsigned char auStack_40 [32];
  
  uVar1 = fn_828647D8(param_2);
  auStack_b0[0] = 0;
  uVar1 = fn_82FEB060(uVar1,*(unsigned int *)(param_4 + 0x3c),param_3,auStack_b0);
  if ((int)uVar1 != 1) {
    fn_828648B8(auStack_a0,param_2);
    uVar2 = fn_8223B688(auStack_60,auStack_a0);
    uVar2 = fn_8286A3D8(uVar2,0,0xffffffff820228dc,0x25);
    uVar2 = fn_8223DFF0(uVar2,0xffffffff820228d4,4);
    fn_82240378(auStack_80,uVar2);
    fn_82230300(auStack_60,1,0);
    fn_82230300(auStack_a0,1,0);
    uVar2 = fn_8223B688(auStack_40,auStack_80);
    uVar3 = fn_82868378();
    fn_8286DA10(uVar3,uVar2,uVar1);
    fn_82865170();
    fn_82866418();
    fn_82230300(auStack_80,1,0);
  }
  return 0xffffffffa0220000;
}

