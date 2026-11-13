extern unsigned int *auStack_14c;
extern unsigned int *auStack_1ec;
extern unsigned int *auStack_210;
extern unsigned int *auStack_230;
extern unsigned int *auStack_250;
extern unsigned int *auStack_270;
extern unsigned int *auStack_90;
extern unsigned int *auStack_b0;
extern int fn_82230110();
extern int fn_82230180();
extern int fn_82230360();
extern int fn_82237A48();
extern int fn_8223B728();
extern int fn_8223CD08();
extern int fn_8223CF38();
extern int fn_8223DBE8();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_82520AC8();
extern int fn_8265CA20();
extern int fn_8265CA60();
extern int fn_8265CAA0();
extern int fn_828BAD68();
extern int fn_828BAE88();
extern int fn_828BB1F0();
extern int fn_828BBB68();
extern int fn_828BBC20();
extern int fn_82A2AAA8();
extern int fn_82F62F60();
extern int fn_82F6ECF8();
extern unsigned int lbl_82020F30;
extern unsigned int lbl_82020F40;
extern unsigned int lbl_82021284;
extern unsigned int lbl_821AA8E0;
extern unsigned int uStack_21c;
extern unsigned int uStack_220;
extern unsigned int uStack_23c;
extern unsigned int uStack_240;
extern unsigned int uStack_254;
extern unsigned int uStack_256;
extern unsigned int uStack_258;
extern unsigned int uStack_25a;
extern unsigned int uStack_25e;
extern unsigned int uStack_260;


unsigned __int64 fn_828BBFC0(unsigned __int64 param_1,int param_2,char param_3)

{
  char cVar1;
  unsigned char uVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  char *pcVar7;
  unsigned short uVar8;
  char *pcVar9;
  double dVar10;
  unsigned int auStack_270 [4];
  unsigned short uStack_260;
  unsigned short uStack_25e;
  unsigned short uStack_25a;
  unsigned short uStack_258;
  unsigned short uStack_256;
  unsigned short uStack_254;
  unsigned int auStack_250 [4];
  unsigned int uStack_240;
  unsigned int uStack_23c;
  unsigned int auStack_230 [4];
  unsigned int uStack_220;
  unsigned int uStack_21c;
  unsigned char auStack_210 [32];
  unsigned char *puStack_1f0;
  unsigned char auStack_1ec [76];
  unsigned char ** appuStack_1a0;
  unsigned char *puStack_150;
  unsigned char auStack_14c [76];
  unsigned char **appuStack_100 [20];
  unsigned char auStack_b0 [32];
  unsigned char auStack_90 [144];
  
  puStack_150 = &lbl_821AA8E0;
  appuStack_100[0] = &lbl_82020F40;
  fn_8223CD08(appuStack_100,auStack_14c,0);
  *(unsigned char ***)(auStack_14c + *(int *)(puStack_150 + 4) + -4) = &lbl_82021284;
  fn_8223CF38(auStack_14c,2);
  puStack_1f0 = &lbl_821AA8E0;
  appuStack_1a0 = &lbl_82020F40;
  fn_8223CD08(&appuStack_1a0,auStack_1ec,0);
  *(unsigned char ***)(auStack_1ec + *(int *)(puStack_1f0 + 4) + -4) = &lbl_82021284;
  fn_8223CF38(auStack_1ec,2);
  iVar3 = *(int *)(param_2 + 0x18);
  if (iVar3 - 1U < 7) {
    if (iVar3 == 2) {
      uVar5 = fn_828BBC20(auStack_b0,param_2 + 0x10,0);
      uVar6 = fn_82240158(&puStack_1f0,0xffffffff820254f8);
      fn_8223B728(uVar6,uVar5);
      fn_82230180(auStack_b0);
    }
    else if (iVar3 == 3) {
      uVar5 = *(unsigned __int64 *)(param_2 + 0x10);
      fn_82240158(&puStack_1f0,0xffffffff820254f0);
      fn_828BAE88(uVar5);
    }
    else if (iVar3 == 4) {
      fn_82230110(auStack_210,0xffffffff82196582);
      if (*(int *)(param_2 + 0x10) != 0) {
        pcVar7 = (char *)fn_8265CA60();
        auStack_270[0] = 0;
        fn_82F6ECF8(auStack_270,pcVar7,(unsigned __int64)*(unsigned int *)(param_2 + 0x10),
                     *(unsigned int *)(param_2 + 0x14),(unsigned __int64)*(unsigned int *)(param_2 + 0x10) - 1);
        pcVar9 = pcVar7;
        do {
          cVar1 = *pcVar9;
          pcVar9 = pcVar9 + 1;
        } while (cVar1 != '\0');
        fn_82230360(auStack_210,pcVar7,pcVar9 + (-1 - (int)pcVar7));
        fn_8265CAA0(pcVar7);
      }
      uVar5 = fn_82240158(&puStack_1f0,0xffffffff820254e4);
      uVar5 = fn_8223B728(uVar5,auStack_210);
      fn_82240158(uVar5,0xffffffff8200c4f8);
      fn_82230180(auStack_210);
    }
    else if (iVar3 == 5) {
      dVar10 = (double)*(float *)(param_2 + 0x10);
      fn_82240158(&puStack_1f0,0xffffffff820254dc);
      fn_82237A48(dVar10);
    }
    else if (iVar3 == 6) {
      uVar4 = *(unsigned int *)(param_2 + 0x10);
      uVar5 = fn_82240158(&puStack_1f0,0xffffffff820254d4);
      uVar5 = fn_82520AC8(uVar5,uVar4);
      fn_82240158(uVar5,0xffffffff820254cc);
    }
    else if (iVar3 == 1) {
      uVar5 = fn_828BBB68(auStack_90,param_2 + 0x10,0);
      uVar6 = fn_82240158(&puStack_1f0,0xffffffff82025504);
      fn_8223B728(uVar6,uVar5);
      fn_82230180(auStack_90);
    }
    else {
      fn_82A2AAA8(param_2 + 0x10,&uStack_260);
      if (uStack_258 == 0) {
        uVar8 = 0xc;
      }
      else {
        uVar8 = -(unsigned short)(0xc < uStack_258) & 0xfff4;
      }
      if (uStack_258 < 0xc) {
        uVar5 = 0xffffffff820254c8;
      }
      else {
        uVar5 = 0xffffffff820254c4;
      }
      uVar6 = fn_82240158(&puStack_1f0,0xffffffff820254b8);
      uVar6 = fn_82240158(uVar6,0xffffffff820254ac);
      uVar6 = fn_828BAD68(uVar6,uStack_260);
      uVar6 = fn_82240158(uVar6,0xffffffff820254a0);
      uVar6 = fn_828BAD68(uVar6,uStack_25e);
      uVar6 = fn_82240158(uVar6,0xffffffff82025494);
      uVar6 = fn_828BAD68(uVar6,uStack_25a);
      uVar6 = fn_82240158(uVar6,0xffffffff82025484);
      uVar6 = fn_828BAD68(uVar6,uStack_258);
      uVar6 = fn_82240158(uVar6,0xffffffff82025474);
      uVar6 = fn_828BAD68(uVar6,uStack_258 + uVar8);
      uVar5 = fn_82240158(uVar6,uVar5);
      uVar5 = fn_82240158(uVar5,0xffffffff82025464);
      uVar5 = fn_828BAD68(uVar5,uStack_256);
      uVar5 = fn_82240158(uVar5,0xffffffff82025458);
      fn_828BAD68(uVar5,uStack_254);
    }
  }
  else {
    uVar2 = *(unsigned char *)(param_2 + 8);
    uVar5 = fn_82240158(&puStack_1f0,0xffffffff82025444);
    fn_828BB1F0(uVar5,uVar2);
  }
  if (param_3 == '\0') {
    fn_822403C8(auStack_230,auStack_1ec);
    uVar5 = fn_82240158(&puStack_150,0xffffffff8202541c);
    uVar5 = fn_8223B728(uVar5,auStack_230);
    fn_82240158(uVar5,0xffffffff821c27b4);
    if (0xf < uStack_21c) {
      fn_8265CA20(auStack_230[0]);
    }
    uStack_220 = 0;
    auStack_230[0] = auStack_230[0] & 0xffffff;
    uStack_21c = 0xf;
  }
  else {
    fn_822403C8(auStack_250,auStack_1ec);
    uVar5 = fn_82240158(&puStack_150,0xffffffff82025424);
    uVar5 = fn_8223B728(uVar5,auStack_250);
    fn_82240158(uVar5,0xffffffff82196fb0);
    if (0xf < uStack_23c) {
      fn_8265CA20(auStack_250[0]);
    }
    uStack_240 = 0;
    auStack_250[0] = auStack_250[0] & 0xffffff;
    uStack_23c = 0xf;
  }
  fn_822403C8(param_1,auStack_14c);
  fn_8223DBE8(&appuStack_1a0);
  appuStack_1a0 = &lbl_82020F30;
  fn_82F62F60(&appuStack_1a0);
  fn_8223DBE8(appuStack_100);
  appuStack_100[0] = &lbl_82020F30;
  fn_82F62F60(appuStack_100);
  return param_1;
}

