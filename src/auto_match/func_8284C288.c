extern unsigned int *auStack_18;
extern unsigned int *auStack_50;
extern unsigned int *auStack_5c;
extern int fn_82230218();
extern int fn_82230300();
extern int fn_822462F0();
extern int fn_8284A658();
extern int fn_8284B898();
extern int fn_8284C1A0();
extern int fn_82BA02A8();
extern unsigned int iStack00000014;
extern unsigned int lbl_821961F0;
extern unsigned int uStack0000001c;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;
extern unsigned int uStack_30;
extern unsigned int uStack_34;
extern unsigned int uStack_60;


__int64 fn_8284C288(int param_1,unsigned int param_2)

{
  unsigned int uVar2;
  unsigned __int64 uVar1;
  int iStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack_60;
  unsigned int auStack_5c;
  unsigned char auStack_50 [28];
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned char auStack_18 [4];
  unsigned char *puStack_14;
  
  iStack00000014 = param_1;
  uStack0000001c = param_2;
  uStack_60 = fn_8284A658(param_1,param_2);
  uStack_24 = uStack_60;
  fn_82BA02A8(&uStack_60,iStack00000014);
  auStack_5c = *(unsigned int *)(iStack00000014 + 4);
  uStack_20 = auStack_5c;
  fn_82BA02A8(&auStack_5c,iStack00000014);
  if (auStack_5c != uStack_60) {
    uStack_1c = uStack_60;
    uVar2 = fn_822462F0(uStack0000001c,(unsigned __int64)uStack_60 + 0xc);
    if ((int)LZCOUNT(uVar2) != 0) goto LAB_8284c3b4;
  }
  uStack_30 = 0;
  uStack_2c = uStack_60;
  puStack_14 = auStack_18;
  fn_82230300(auStack_50,0,0);
  fn_82230218(auStack_50,uStack0000001c,0,lbl_821961F0);
  uStack_34 = uStack_30;
  uVar1 = fn_8284C1A0(iStack00000014,auStack_50);
  fn_8284B898(&uStack_28,iStack00000014,uStack_2c,uVar1);
  uStack_60 = uStack_28;
  fn_82230300(auStack_50,1,0);
LAB_8284c3b4:
  return (unsigned __int64)uStack_60 + 0x28;
}

