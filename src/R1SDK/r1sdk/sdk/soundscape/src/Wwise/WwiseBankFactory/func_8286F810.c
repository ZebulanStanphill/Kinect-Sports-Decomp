extern unsigned int *auStack_110;
extern unsigned int *auStack_50;
extern unsigned int *auStack_70;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_d0;
extern unsigned int *auStack_f0;
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_8223DFF0();
extern int fn_82240378();
extern int fn_828648B8();
extern int fn_82865170();
extern int fn_828663F0();
extern int fn_82866418();
extern int fn_82868378();
extern int fn_8286A3D8();
extern int fn_8286DA10();
extern int fn_8287A7A8();
extern int fn_82FE9528();
extern unsigned int uStack_11c;


unsigned __int64 fn_8286F810(unsigned __int64 param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  int *piVar4;
  unsigned int *puVar5;
  unsigned int ****appppuStack_130 [5];
  unsigned int uStack_11c;
  unsigned char auStack_110 [32];
  unsigned char auStack_f0 [32];
  unsigned char auStack_d0 [32];
  unsigned char auStack_b0 [32];
  unsigned char auStack_90 [32];
  unsigned char auStack_70 [32];
  unsigned char auStack_50 [80];
  
  uVar1 = fn_8287A7A8(param_2);
  fn_828648B8(auStack_d0,uVar1);
  fn_8223B688(appppuStack_130,auStack_d0);
  fn_82230300(auStack_d0,1,0);
  if (uStack_11c < 0x10) {
    appppuStack_130[0] = appppuStack_130;
  }
  uVar1 = fn_82FE9528(appppuStack_130[0],0xffffffff8286ecf0,param_2);
  if ((int)uVar1 == 1) {
    uVar1 = 0x20100000;
  }
  else {
    uVar2 = fn_8287A7A8(param_2);
    fn_828648B8(auStack_b0,uVar2);
    uVar2 = fn_8223B688(auStack_90,auStack_b0);
    uVar2 = fn_8286A3D8(uVar2,0,0xffffffff82021c94,0x1d);
    uVar2 = fn_8223DFF0(uVar2,0xffffffff82021c8c,4);
    fn_82240378(auStack_f0,uVar2);
    fn_82230300(auStack_90,1,0);
    fn_82230300(auStack_b0,1,0);
    uVar2 = fn_8223B688(auStack_50,auStack_f0);
    uVar3 = fn_82868378();
    fn_8286DA10(uVar3,uVar2,uVar1);
    fn_82865170();
    fn_82866418();
    uVar1 = fn_8287A7A8(param_2);
    fn_828648B8(auStack_110,uVar1);
    fn_82865170();
    piVar4 = (int *)fn_828663F0();
    puVar5 = (unsigned int *)fn_8223B688(auStack_70,auStack_110);
    if (0xf < (unsigned int)puVar5[5]) {
      puVar5 = (unsigned int *)*puVar5;
    }
    (**(int (***)())(*piVar4 + 0xc))(piVar4,0xffffffff82021ce8,0x45d,0xffffffff82021cb4,puVar5);
    fn_82230300(auStack_70,1,0);
    fn_82230300(auStack_110,1,0);
    fn_82230300(auStack_f0,1,0);
    uVar1 = 0xffffffffa0100000;
  }
  fn_82230300(appppuStack_130,1,0);
  return uVar1;
}

