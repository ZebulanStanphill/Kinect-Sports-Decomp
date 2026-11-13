extern unsigned int *auStack_13c;
extern unsigned int *auStack_140;
extern int fn_82664D80();
extern int fn_826687F8();
extern int fn_8266B1E8();
extern int fn_8266B340();
extern int fn_8266C340();
extern int fn_82F664B0();
extern int fn_82F69B70();
extern int fn_82F92218();
extern unsigned int iStack00000014;
extern unsigned int iStack00000024;
extern unsigned int iStack0000002c;
extern unsigned int iStack_30;
extern unsigned int lbl_831E7A18;
extern unsigned int stack0x00000000;
extern unsigned int uStack0000001c;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;
extern unsigned int uStack_24;
extern unsigned int uStack_28;
extern unsigned int uStack_2c;


unsigned __int64 fn_82665110(int param_1,unsigned int param_2,int param_3,int param_4)

{
  unsigned __int64 uVar1;
  int iVar3;
  unsigned __int64 uVar2;
  int iStack00000014;
  unsigned int uStack0000001c;
  int iStack00000024;
  int iStack0000002c;
  unsigned char auStack_140 [4];
  unsigned char auStack_13c [268];
  int iStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  unsigned int uStack_1c;
  unsigned char *puStack_18;
  unsigned char *puStack_14;
  
  iStack00000014 = param_1;
  uStack0000001c = param_2;
  iStack00000024 = param_3;
  iStack0000002c = param_4;
  if (lbl_831E7A18 == '\0') {
    thunk_FUN_82a2b748(0x15);
    uVar1 = 0xffffffffffffffff;
  }
  else {
    if (param_1 == 0) {
      fn_8266C340(0xffffffff820015c0,0xffffffff82001e74,0x240,0xffffffff820022e0);
    }
    if (iStack00000014 == 0) {
      thunk_FUN_82a2b748(0x57);
      uVar1 = 0xffffffffffffffff;
    }
    else {
      fn_8266B1E8(auStack_140);
      if (&stack0x00000000 == (unsigned char *)0x140) {
        puStack_18 = (unsigned char *)0x0;
      }
      else {
        puStack_18 = auStack_13c;
      }
      iVar3 = fn_82664D80(iStack00000014,uStack0000001c,puStack_18);
      if (iVar3 == 0) {
        uStack_2c = 0xffffffff;
        fn_826687F8(auStack_140);
        uVar1 = (unsigned __int64)uStack_2c;
      }
      else {
        if (&stack0x00000000 == (unsigned char *)0x140) {
          puStack_14 = (unsigned char *)0x0;
        }
        else {
          puStack_14 = auStack_13c;
        }
        iVar3 = fn_8266B340(puStack_14);
        if (iVar3 == 0) {
          fn_8266C340(0xffffffff820015c0,0xffffffff82001e74,0x250,0xffffffff820023b0);
          thunk_FUN_82a2b748(0x70c);
          uStack_28 = 0xffffffff;
          fn_826687F8(auStack_140);
          uVar1 = (unsigned __int64)uStack_28;
        }
        else {
          fn_82F92218(auStack_140);
          iVar3 = fn_82F69B70();
          if (iStack00000024 != 0) {
            if (iStack0000002c < (int)(iVar3 + 1U)) {
              thunk_FUN_82a2b748(0x7a);
              uStack_24 = 0xffffffff;
              fn_826687F8(auStack_140);
              return (unsigned __int64)uStack_24;
            }
            uVar2 = fn_82F92218(auStack_140);
            iStack_30 = fn_82F664B0(iStack00000024,iStack0000002c,uVar2);
            if (iStack_30 != 0) {
              fn_8266C340(0xffffffff820015c0,0xffffffff82001e74,0x261,0xffffffff82002398);
            }
            if (iStack_30 != 0) {
              thunk_FUN_82a2b748(0x54f);
              uStack_20 = 0xffffffff;
              fn_826687F8(auStack_140);
              return (unsigned __int64)uStack_20;
            }
          }
          uStack_1c = iVar3 + 1U;
          fn_826687F8(auStack_140);
          uVar1 = (unsigned __int64)uStack_1c;
        }
      }
    }
  }
  return uVar1;
}

