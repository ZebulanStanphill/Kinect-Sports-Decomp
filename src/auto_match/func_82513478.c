extern unsigned int *auStack_100;
extern unsigned int *auStack_40;
extern unsigned int *auStack_60;
extern unsigned int *auStack_fc;
extern int fn_82230300();
extern int fn_8223B728();
extern int fn_8223CFC0();
extern int fn_8223DCC8();
extern int fn_82240158();
extern int fn_822403C8();
extern int fn_8289EEE0();
extern int fn_8289FDC8();
extern int fn_828A1B60();
extern int fn_828ACCE8();
extern int fn_828ACD28();
extern int fn_828B1340();
extern int fn_828C1DD8();
extern int fn_828EFE38();


unsigned __int64 fn_82513478(unsigned __int64 param_1,int param_2)

{
  unsigned __int64 uVar1;
  unsigned int uVar3;
  char cVar4;
  unsigned __int64 uVar2;
  unsigned char auStack_100 [4];
  unsigned char auStack_fc [156];
  unsigned char auStack_60 [32];
  unsigned char auStack_40 [16];
  
  fn_8223CFC0(auStack_100,2,1);
  uVar1 = fn_82240158(auStack_100,0xffffffff821c2444);
  fn_8223B728(uVar1,param_2 + 0x1c);
  fn_82240158(auStack_100,0xffffffff821c2454);
  uVar3 = fn_828C1DD8(*(unsigned int *)(param_2 + 8));
  if (uVar3 == 0) {
    uVar1 = 0xffffffff821c2460;
LAB_82513510:
    fn_82240158(auStack_100,uVar1);
  }
  else {
    if (uVar3 == 1) {
      uVar1 = 0xffffffff821c2470;
      goto LAB_82513510;
    }
    if (uVar3 < 3) {
      uVar1 = 0xffffffff821a74b4;
      goto LAB_82513510;
    }
    if (uVar3 == 3) {
      uVar1 = 0xffffffff821c2468;
      goto LAB_82513510;
    }
  }
  fn_82240158(auStack_100,0xffffffff821c2478);
  uVar3 = fn_828ACD28(*(unsigned int *)(param_2 + 8));
  if (uVar3 == 0) {
    uVar1 = 0xffffffff821c2488;
  }
  else if (uVar3 == 1) {
    uVar1 = 0xffffffff821c2498;
  }
  else if (uVar3 < 3) {
    uVar1 = 0xffffffff821c24a4;
  }
  else {
    if (uVar3 != 3) goto LAB_8251357c;
    uVar1 = 0xffffffff821c24b0;
  }
  fn_82240158(auStack_100,uVar1);
LAB_8251357c:
  cVar4 = fn_828ACCE8(*(unsigned int *)(param_2 + 8));
  if (cVar4 != '\0') {
    cVar4 = fn_828B1340(*(unsigned int *)(param_2 + 8));
    if (cVar4 == '\0') {
      uVar1 = fn_828A1B60(*(unsigned int *)(param_2 + 8));
      uVar1 = fn_828EFE38(auStack_40,uVar1);
      uVar2 = fn_82240158(auStack_100,0xffffffff821c24d8);
      fn_8223B728(uVar2,uVar1);
      fn_82230300(auStack_40,1,0);
      uVar1 = fn_8289EEE0(*(unsigned int *)(param_2 + 8));
      uVar1 = fn_8289FDC8(auStack_60,uVar1,0);
      uVar2 = fn_82240158(auStack_100,0xffffffff821c24e4);
      fn_8223B728(uVar2,uVar1);
      fn_82230300(auStack_60,1,0);
    }
    else {
      fn_82240158(auStack_100,0xffffffff821c24b8);
    }
  }
  fn_82240158(auStack_100,0xffffffff821c24f0);
  fn_822403C8(param_1,auStack_fc);
  fn_8223DCC8(auStack_100);
  return param_1;
}

