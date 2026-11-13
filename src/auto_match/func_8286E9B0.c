extern unsigned int *auStack_17c;
extern unsigned int *auStack_180;
extern unsigned int *auStack_190;
extern unsigned int *auStack_1a0;
extern unsigned int *auStack_1b0;
extern unsigned int *auStack_1c0;
extern unsigned int *auStack_1e0;
extern unsigned int *auStack_200;
extern unsigned int *auStack_220;
extern unsigned int *auStack_240;
extern unsigned int *auStack_260;
extern unsigned int *auStack_280;
extern unsigned int *auStack_dc;
extern unsigned int *auStack_e0;
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
extern int fn_8286E2B8();
extern int fn_82A1F2F8();
extern int fn_82F62578();
extern unsigned int uStack_28c;
extern unsigned int uStack_2ac;


void fn_8286E9B0(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int *puVar6;
  unsigned __int64 uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned char *puVar7;
  unsigned int ****appppuStack_2c0 [5];
  unsigned int uStack_2ac;
  unsigned int ****appppuStack_2a0 [5];
  unsigned int uStack_28c;
  unsigned char auStack_280 [32];
  unsigned char auStack_260 [32];
  unsigned char auStack_240 [32];
  unsigned char auStack_220 [32];
  unsigned char auStack_200 [32];
  unsigned char auStack_1e0 [32];
  unsigned char auStack_1c0 [16];
  unsigned char auStack_1b0 [16];
  unsigned char auStack_1a0 [16];
  unsigned char auStack_190 [16];
  unsigned char auStack_180 [4];
  unsigned char auStack_17c [156];
  unsigned char auStack_e0 [4];
  unsigned char auStack_dc [220];
  
  if (((param_2 == 1) || (param_2 == 0x45)) &&
     ((fn_8286E2B8(param_4), cRam832116e5 != '\0' || (cRam832116e7 != '\0')))) {
    if (param_2 == 0x45) {
      fn_8223CFC0(auStack_180,2,1);
      fn_828648B8(auStack_280,param_4);
      puVar6 = (unsigned int *)fn_8223B688(auStack_1e0,auStack_280);
      if (0xf < (unsigned int)puVar6[5]) {
        puVar6 = (unsigned int *)*puVar6;
      }
      uVar1 = fn_828647D8(param_4);
      uVar2 = fn_82F62578(auStack_1a0,10);
      uVar3 = fn_82A1F2F8();
      uVar4 = fn_82F62578(auStack_1b0,8);
      uVar5 = fn_82240158(auStack_180,0xffffffff82021960);
      uVar4 = fn_8223FCD8(uVar5,uVar4);
      uVar3 = fn_82520AC8(uVar4,uVar3);
      uVar3 = fn_82240158(uVar3,0xffffffff8202195c);
      uVar3 = fn_82240158(uVar3,0xffffffff8202193c);
      uVar2 = fn_8223FCD8(uVar3,uVar2);
      uVar2 = fn_82520AC8(uVar2,param_1);
      uVar2 = fn_82240158(uVar2,0xffffffff82021938);
      uVar2 = fn_82240158(uVar2,0xffffffff82021920);
      uVar2 = fn_82240158(uVar2,puVar6);
      uVar2 = fn_82240158(uVar2,0xffffffff8202191c);
      uVar1 = fn_82520AC8(uVar2,uVar1);
      fn_82240158(uVar1,0xffffffff82021918);
      fn_82230300(auStack_1e0,1,0);
      fn_82230300(auStack_280,1,0);
      if (cRam832116e7 != '\0') {
        fn_822403C8(appppuStack_2a0,auStack_17c);
        if (uStack_28c < 0x10) {
          appppuStack_2a0[0] = appppuStack_2a0;
        }
        fn_82230110(auStack_240,appppuStack_2a0[0]);
        uVar1 = fn_82865170();
        fn_82866420(uVar1,auStack_240,0);
        fn_82230300(auStack_240,1,0);
        fn_82230300(appppuStack_2a0,1,0);
      }
      puVar7 = auStack_180;
    }
    else {
      fn_8223CFC0(auStack_e0,2,1);
      fn_828648B8(auStack_260,param_4);
      puVar6 = (unsigned int *)fn_8223B688(auStack_200,auStack_260);
      if (0xf < (unsigned int)puVar6[5]) {
        puVar6 = (unsigned int *)*puVar6;
      }
      uVar1 = fn_828647D8(param_4);
      uVar2 = fn_82F62578(auStack_190,10);
      uVar3 = fn_82A1F2F8();
      uVar4 = fn_82F62578(auStack_1c0,8);
      uVar5 = fn_82240158(auStack_e0,0xffffffff820219a8);
      uVar4 = fn_8223FCD8(uVar5,uVar4);
      uVar3 = fn_82520AC8(uVar4,uVar3);
      uVar3 = fn_82240158(uVar3,0xffffffff820219a4);
      uVar3 = fn_82240158(uVar3,0xffffffff82021984);
      uVar2 = fn_8223FCD8(uVar3,uVar2);
      uVar2 = fn_82520AC8(uVar2,param_1);
      uVar2 = fn_82240158(uVar2,0xffffffff82021980);
      uVar2 = fn_82240158(uVar2,0xffffffff8202196c);
      uVar2 = fn_82240158(uVar2,puVar6);
      uVar2 = fn_82240158(uVar2,0xffffffff82021968);
      uVar1 = fn_82520AC8(uVar2,uVar1);
      fn_82240158(uVar1,0xffffffff82021964);
      fn_82230300(auStack_200,1,0);
      fn_82230300(auStack_260,1,0);
      if (cRam832116e7 != '\0') {
        fn_822403C8(appppuStack_2c0,auStack_dc);
        if (uStack_2ac < 0x10) {
          appppuStack_2c0[0] = appppuStack_2c0;
        }
        fn_82230110(auStack_220,appppuStack_2c0[0]);
        uVar1 = fn_82865170();
        fn_82866420(uVar1,auStack_220,0);
        fn_82230300(auStack_220,1,0);
        fn_82230300(appppuStack_2c0,1,0);
      }
      puVar7 = auStack_e0;
    }
    fn_8223DCC8(puVar7);
  }
  return;
}

