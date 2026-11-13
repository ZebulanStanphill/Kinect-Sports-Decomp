extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_c0;
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_8223DFF0();
extern int fn_82240378();
extern int fn_8234D690();
extern int fn_828648B8();
extern int fn_82865170();
extern int fn_828663F0();
extern int fn_82866418();
extern int fn_82868378();
extern int fn_8286DA10();
extern int fn_82FE9528();
extern unsigned int uStack_cc;
extern unsigned int uStack_ec;


unsigned __int64 fn_82875EF8(__int64 param_1)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int *piVar4;
  unsigned int **appuStack_100 [1];
  unsigned int uStack_ec;
  unsigned int **appuStack_e0 [5];
  unsigned int uStack_cc;
  unsigned char auStack_c0 [32];
  unsigned char auStack_a0 [32];
  unsigned char auStack_80 [16];
  unsigned char auStack_60 [32];
  unsigned char auStack_40 [64];

  fn_828648B8(auStack_80,param_1 + 4);
  fn_8223B688(appuStack_e0,auStack_80);
  fn_82230300(auStack_80,1,0);
  if (uStack_cc < 0x10) {
    appuStack_e0[0] = appuStack_e0;
  }
  uVar1 = fn_82FE9528(appuStack_e0[0],0xffffffff82875958,param_1);
  if ((int)uVar1 == 1) {
    uVar1 = 0x20360000;
  }
  else {
    fn_828648B8(auStack_c0,param_1 + 4);
    fn_8223B688(appuStack_100,auStack_c0);
    fn_82230300(auStack_c0,1,0);
    uVar2 = fn_8234D690(auStack_60,0xffffffff820225dc,appuStack_100);
    uVar2 = fn_8223DFF0(uVar2,0xffffffff820225d4,4);
    fn_82240378(auStack_a0,uVar2);
    fn_82230300(auStack_60,1,0);
    uVar2 = fn_8223B688(auStack_40,auStack_a0);
    uVar3 = fn_82868378();
    fn_8286DA10(uVar3,uVar2,uVar1);
    fn_82865170();
    fn_82866418();
    fn_82865170();
    piVar4 = (int *)fn_828663F0();
    if (uStack_ec < 0x10) {
      appuStack_100[0] = appuStack_100;
    }
    (**(int (***)())(*piVar4 + 0xc))
              (piVar4,0xffffffff82022630,0x269,0xffffffff820225fc,appuStack_100[0]);
    fn_82230300(auStack_a0,1,0);
    fn_82230300(appuStack_100,1,0);
    uVar1 = 0xffffffffa0360000;
  }
  fn_82230300(appuStack_e0,1,0);
  return uVar1;
}
