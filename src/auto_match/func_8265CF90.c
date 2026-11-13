extern unsigned int *auStack_18;
extern int fn_8265CF70();
extern int fn_8265D3F0();
extern int fn_8265D410();
extern int fn_8265D468();
extern int fn_8265D478();
extern int fn_8265D4D8();
extern int fn_8265D5A8();
extern int fn_8265FE68();
extern int fn_8265FE98();
extern int fn_82660870();
extern int fn_82666F40();
extern int fn_82668DC0();
extern int fn_82668E40();
extern int fn_8266AE20();
extern int fn_82BA02A8();
extern unsigned int uStack0000001c;
extern unsigned int uStack00000024;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


void fn_8265CF90(unsigned int *param_1,unsigned int param_2,unsigned int param_3,unsigned int *param_4)

{
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  __int64 lVar1;
  unsigned int uVar6;
  unsigned __int64 uVar2;
  unsigned int *puStack00000014;
  unsigned int uStack0000001c;
  unsigned int uStack00000024;
  unsigned int *puStack0000002c;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned int auStack_18 [2];
  
  if (param_3 != 0) {
    puStack00000014 = param_1;
    uStack0000001c = param_2;
    uStack00000024 = param_3;
    puStack0000002c = param_4;
    iVar3 = fn_8265FE68(param_1);
    iVar4 = fn_8265CF70(puStack00000014);
    if ((unsigned int)(iVar3 - iVar4) < uStack00000024) {
      fn_82660870(puStack00000014);
    }
    else {
      uVar5 = fn_8265D3F0(puStack00000014);
      iVar3 = fn_8265CF70(puStack00000014);
      if (uVar5 < iVar3 + uStack00000024) {
        lVar1 = fn_8265CF70(puStack00000014);
        iVar3 = fn_82666F40(puStack00000014,lVar1 + (unsigned __int64)uStack00000024);
        uVar6 = fn_8265FE98(puStack00000014 + 3,iVar3,0);
        uVar5 = (int)(uStack0000001c - *puStack00000014) >> 2;
        uVar2 = fn_8265D5A8(puStack0000002c);
        fn_8265D410(puStack00000014,(unsigned __int64)uVar6 + ((unsigned __int64)uVar5 & 0x3fffffff) * 4,
                          uStack00000024,uVar2);
        fn_8266AE20(puStack00000014,*puStack00000014,uStack0000001c,uVar6);
        fn_8266AE20(puStack00000014,uStack0000001c,puStack00000014[1],
                          (unsigned __int64)uVar6 +
                          ((unsigned __int64)uVar5 + (unsigned __int64)uStack00000024 & 0x3fffffff) * 4);
        iVar4 = fn_8265CF70(puStack00000014);
        uStack00000024 = uStack00000024 + iVar4;
        if (*puStack00000014 != 0) {
          fn_82668DC0(puStack00000014,*puStack00000014,puStack00000014[1]);
          fn_82668E40(puStack00000014 + 3,*puStack00000014,
                            (int)(puStack00000014[2] - *puStack00000014) >> 2);
        }
        fn_82BA02A8(puStack00000014);
        puStack00000014[2] = uVar6 + iVar3 * 4;
        puStack00000014[1] = uVar6 + uStack00000024 * 4;
        *puStack00000014 = uVar6;
      }
      else if ((unsigned int)((int)(puStack00000014[1] - uStack0000001c) >> 2) < uStack00000024) {
        uStack_20 = *puStack0000002c;
        fn_8266AE20(puStack00000014,uStack0000001c,puStack00000014[1],
                          (unsigned __int64)uStack0000001c + ((unsigned __int64)uStack00000024 & 0x3fffffff) * 4);
        uVar2 = fn_8265D5A8(&uStack_20);
        fn_8265D410(puStack00000014,puStack00000014[1],
                          (unsigned __int64)uStack00000024 -
                          (__int64)((int)(puStack00000014[1] - uStack0000001c) >> 2),uVar2);
        puStack00000014[1] = puStack00000014[1] + uStack00000024 * 4;
        fn_8265D468(puStack00000014,uStack0000001c,puStack00000014[1]);
        fn_8265D478(uStack0000001c,
                          (unsigned __int64)puStack00000014[1] +
                          ((unsigned __int64)uStack00000024 & 0x3fffffff) * -4,&uStack_20);
      }
      else {
        auStack_18[0] = *puStack0000002c;
        uStack_1c = puStack00000014[1];
        uVar5 = fn_8266AE20(puStack00000014,
                                  (unsigned __int64)uStack_1c +
                                  ((unsigned __int64)uStack00000024 & 0x3fffffff) * -4,uStack_1c,
                                  puStack00000014[1]);
        puStack00000014[1] = uVar5;
        fn_8265D468(puStack00000014,uStack0000001c,puStack00000014[1]);
        fn_8265D4D8(uStack0000001c,
                          (unsigned __int64)uStack_1c + ((unsigned __int64)uStack00000024 & 0x3fffffff) * -4,
                          uStack_1c);
        fn_8265D478(uStack0000001c,
                          (unsigned __int64)uStack0000001c + ((unsigned __int64)uStack00000024 & 0x3fffffff) * 4,
                          auStack_18);
      }
    }
  }
  return;
}

