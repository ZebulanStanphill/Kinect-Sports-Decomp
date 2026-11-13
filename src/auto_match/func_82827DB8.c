extern unsigned int *auStack_50;
extern unsigned int *auStack_90;
extern int fn_82230110();
extern int fn_82230218();
extern int fn_82230300();
extern int fn_8260D428();
extern int fn_82827C38();
extern unsigned int uStack_40;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_80;
extern unsigned int uStack_9c;
extern unsigned int uStack_a0;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


unsigned __int64 fn_82827DB8(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  char cVar4;
  unsigned __int64 uVar1;
  unsigned char *puVar2;
  int iVar3;
  unsigned int ****ppppuVar5;
  unsigned int uStack_c0;
  unsigned int uStack_bc;
  unsigned int uStack_b8;
  unsigned int uStack_b4;
  unsigned int ***apppuStack_b0 [4];
  unsigned int uStack_a0;
  unsigned int uStack_9c;
  unsigned char auStack_90 [16];
  unsigned int uStack_80;
  unsigned int ***apppuStack_70 [4];
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned char auStack_50 [16];
  unsigned int uStack_40;
  
  uStack_b8 = 0;
  uStack_b4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  cVar4 = fn_82827C38(param_2,&uStack_c0,&uStack_b8);
  uVar1 = fn_82827C38(param_3,&uStack_bc,&uStack_b4);
  fn_82230110(auStack_50,param_2);
  fn_82230110(apppuStack_70,param_3);
  fn_82230300(auStack_90,0,0);
  fn_82230218(auStack_90,auStack_50,0,uStack_c0);
  fn_82230300(apppuStack_b0,0,0);
  fn_82230218(apppuStack_b0,apppuStack_70,0,uStack_bc);
  if ((cVar4 == '\0') && ((uVar1 & 0xff) == 0)) {
    if (uStack_5c < 0x10) {
      apppuStack_70[0] = apppuStack_70;
    }
    puVar2 = auStack_50;
  }
  else {
    if ((cVar4 == '\0') || ((uVar1 & 0xff) == 0)) {
      ppppuVar5 = (unsigned int ****)apppuStack_b0[0];
      if (uStack_9c < 0x10) {
        ppppuVar5 = apppuStack_b0;
      }
      iVar3 = fn_8260D428(auStack_90,0,uStack_80,ppppuVar5,uStack_a0);
      apppuStack_70[0] = apppuStack_b0[0];
      uStack_60 = uStack_a0;
      uStack_40 = uStack_80;
      if (iVar3 == 0) goto LAB_82827ea4;
    }
    else {
      ppppuVar5 = (unsigned int ****)apppuStack_b0[0];
      if (uStack_9c < 0x10) {
        ppppuVar5 = apppuStack_b0;
      }
      iVar3 = fn_8260D428(auStack_90,0,uStack_80,ppppuVar5,uStack_a0);
      apppuStack_70[0] = apppuStack_b0[0];
      uStack_60 = uStack_a0;
      uStack_40 = uStack_80;
      if (iVar3 == 0) {
        uVar1 = -(unsigned __int64)(uStack_b8 < uStack_b4) & 1;
        goto LAB_82827ea4;
      }
    }
    if (uStack_9c < 0x10) {
      apppuStack_70[0] = apppuStack_b0;
    }
    puVar2 = auStack_90;
  }
  uVar1 = fn_8260D428(puVar2,0,uStack_40,apppuStack_70[0],uStack_60);
  uVar1 = (uVar1 & 0xffffffff) >> 0x1f;
LAB_82827ea4:
  fn_82230300(apppuStack_b0,1,0);
  fn_82230300(auStack_90,1,0);
  fn_82230300(apppuStack_70,1,0);
  fn_82230300(auStack_50,1,0);
  return uVar1;
}

