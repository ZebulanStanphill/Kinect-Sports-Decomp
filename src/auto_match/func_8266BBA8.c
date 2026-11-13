extern unsigned int *auStack_120;
extern int fn_82665D08();
extern int fn_8266C020();
extern int fn_8266C0B0();
extern int fn_8266C340();
extern int fn_82F69B70();
extern unsigned int iStack0000001c;
extern unsigned int iStack_18;
extern unsigned int iStack_1c;
extern unsigned int uStack00000014;
extern unsigned int uStack_12;
extern unsigned int uStack_14;


unsigned __int64 fn_8266BBA8(unsigned int param_1,int param_2,unsigned short *param_3,unsigned short *param_4)

{
  unsigned __int64 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int uStack00000014;
  int iStack0000001c;
  unsigned short *puStack00000024;
  unsigned short *puStack0000002c;
  unsigned char auStack_120 [212];
  int iStack_1c;
  int iStack_18;
  unsigned short uStack_14;
  unsigned short uStack_12;
  
  uStack00000014 = param_1;
  iStack0000001c = param_2;
  puStack00000024 = param_3;
  puStack0000002c = param_4;
  if (param_2 == 0) {
    thunk_FUN_82a2b748(0x57);
    uVar1 = 0;
  }
  else if (param_3 == (unsigned short *)0x0) {
    thunk_FUN_82a2b748(0x57);
    uVar1 = 0;
  }
  else if (param_4 == (unsigned short *)0x0) {
    thunk_FUN_82a2b748(0x57);
    uVar1 = 0;
  }
  else {
    iVar2 = fn_82F69B70((unsigned __int64)param_1 + 0xc);
    if (iVar2 == 0) {
      fn_8266C340(0xffffffff820015c0,0xffffffff82002790,0x169,0xffffffff82002840);
      thunk_FUN_82a2b748(0x139f);
      uVar1 = 0;
    }
    else {
      iVar2 = fn_82F69B70((unsigned __int64)uStack00000014 + 0xc);
      iVar3 = fn_82F69B70(iStack0000001c);
      iVar4 = fn_82F69B70(0xffffffff82002924);
      if (iVar2 + iVar3 + iVar4 + 3U < 0x105) {
        iStack_18 = fn_8266C020(auStack_120,0xffffffff8200289c,(unsigned __int64)uStack00000014 + 0xc
                                      ,iStack0000001c,0xffffffff82002924);
        if (iStack_18 < 1) {
          fn_8266C340(0xffffffff820015c0,0xffffffff82002790,0x179,0xffffffff82001940);
        }
        if (iStack_18 < 1) {
          thunk_FUN_82a2b748(0x54f);
          uVar1 = 0;
        }
        else {
          fn_8266C0B0(&uStack_14);
          iStack_1c = fn_82665D08(auStack_120,&uStack_14);
          if ((iStack_1c < 0) && (iVar2 = thunk_FUN_82a2b798(), iVar2 != 2)) {
            uVar1 = 0;
          }
          else {
            *puStack00000024 = uStack_14;
            *puStack0000002c = uStack_12;
            uVar1 = 1;
          }
        }
      }
      else {
        thunk_FUN_82a2b748(0xa1);
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}

