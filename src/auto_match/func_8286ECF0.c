extern unsigned int *auStack_100;
extern unsigned int *auStack_110;
extern unsigned int *auStack_130;
extern unsigned int *auStack_150;
extern unsigned int *auStack_170;
extern unsigned int *auStack_ec;
extern unsigned int *auStack_f0;
extern char cRam832116e5;
extern char cRam832116e7;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8223B688();
extern int fn_8223CFC0();
extern int fn_8223DCC8();
extern int fn_8223FCD8();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_82520AC8();
extern int fn_828647D8();
extern int fn_828648B8();
extern int fn_82865170();
extern int fn_82866420();
extern int fn_8286E310();
extern int fn_82A1F2F8();
extern int fn_82F62578();
extern unsigned int uStack_17c;


void fn_8286ECF0(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  unsigned int *puVar6;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned int ****appppuStack_190 [5];
  unsigned int uStack_17c;
  unsigned char auStack_170 [32];
  unsigned char auStack_150 [32];
  unsigned char auStack_130 [32];
  unsigned char auStack_110 [16];
  unsigned char auStack_100 [16];
  unsigned char auStack_f0 [4];
  unsigned char auStack_ec [236];
  
  if (param_2 == 1) {
    if ((cRam832116e5 != '\0') || (cRam832116e7 != '\0')) {
      fn_8223CFC0(auStack_f0,2,1);
      fn_828648B8(auStack_170,param_4);
      puVar6 = (unsigned int *)fn_8223B688(auStack_130,auStack_170);
      if (0xf < (unsigned int)puVar6[5]) {
        puVar6 = (unsigned int *)*puVar6;
      }
      uVar1 = fn_828647D8(param_4);
      uVar2 = fn_82F62578(auStack_100,10);
      uVar3 = fn_82A1F2F8();
      uVar4 = fn_82F62578(auStack_110,8);
      uVar5 = fn_82240158(auStack_f0,0xffffffff820219f4);
      uVar4 = fn_8223FCD8(uVar5,uVar4);
      uVar3 = fn_82520AC8(uVar4,uVar3);
      uVar3 = fn_82240158(uVar3,0xffffffff820219f0);
      uVar3 = fn_82240158(uVar3,0xffffffff820219cc);
      uVar2 = fn_8223FCD8(uVar3,uVar2);
      uVar2 = fn_82520AC8(uVar2,param_1);
      uVar2 = fn_82240158(uVar2,0xffffffff820219c8);
      uVar2 = fn_82240158(uVar2,0xffffffff820219b4);
      uVar2 = fn_82240158(uVar2,puVar6);
      uVar2 = fn_82240158(uVar2,0xffffffff820219b0);
      uVar1 = fn_82520AC8(uVar2,uVar1);
      fn_82240158(uVar1,0xffffffff820219ac);
      fn_82230300(auStack_130,1,0);
      fn_82230300(auStack_170,1,0);
      if (cRam832116e7 != '\0') {
        fn_822403C8(appppuStack_190,auStack_ec);
        if (uStack_17c < 0x10) {
          appppuStack_190[0] = appppuStack_190;
        }
        fn_82230110(auStack_150,appppuStack_190[0]);
        uVar1 = fn_82865170();
        fn_82866420(uVar1,auStack_150,0);
        fn_82230300(auStack_150,1,0);
        fn_82230300(appppuStack_190,1,0);
      }
      fn_8223DCC8(auStack_f0);
    }
    fn_8286E310(param_4);
  }
  else {
    *(unsigned char *)(param_4 + 0x29) = 1;
  }
  return;
}

