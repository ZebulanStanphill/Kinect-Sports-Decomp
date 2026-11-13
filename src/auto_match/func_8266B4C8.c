extern int fn_8265CF50();
extern int fn_8265CF70();
extern int fn_8265ED50();
extern int fn_8265F570();
extern int fn_8266C340();
extern int fn_82F664B0();
extern int fn_82F69B70();
extern unsigned int iStack00000024;
extern unsigned int iStack0000002c;
extern unsigned int iStack_18;
extern unsigned int iStack_20;
extern unsigned int lbl_831E7A98;
extern unsigned int uStack00000014;
extern unsigned int uStack0000001c;
extern unsigned int uStack_1c;


__int64 fn_8266B4C8(unsigned int param_1,unsigned int param_2,int param_3,int param_4)

{
  int iVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  __int64 lVar1;
  unsigned int uStack00000014;
  unsigned int uStack0000001c;
  int iStack00000024;
  int iStack0000002c;
  int iStack_20;
  unsigned int uStack_1c;
  int iStack_18;
  
  uStack00000014 = param_1;
  uStack0000001c = param_2;
  iStack00000024 = param_3;
  iStack0000002c = param_4;
  if ((int)param_2 < 0) {
    thunk_FUN_82a2b748(0x57);
  }
  else if ((param_3 == 0) && (param_4 != 0)) {
    thunk_FUN_82a2b748(0x57);
  }
  else if ((param_3 == 0) || (0 < param_4)) {
    iVar2 = fn_82F69B70((unsigned __int64)param_1 + 0xc);
    if (iVar2 == 0) {
      fn_8266C340(0xffffffff820015c0,0xffffffff82002790,0x8d,0xffffffff82002840);
      thunk_FUN_82a2b748(0x139f);
    }
    else {
      iStack_20 = 0;
      if (lbl_831E7A98 == 0x5c) {
        uStack_1c = fn_8265ED50(0xffffffff831e7a9c);
        iStack_18 = 0;
        while ((iStack_18 < (int)uStack0000001c && (uStack_1c != 0))) {
          fn_8265F570((unsigned __int64)uStack_1c + 0x3c);
          uStack_1c = fn_8265ED50();
          iStack_18 = iStack_18 + 1;
        }
        if (uStack_1c != 0) {
          iStack_20 = fn_8265F570((unsigned __int64)uStack_1c + 4);
        }
      }
      if ((iStack_20 == 0) && (uVar3 = fn_8265CF70(0xffffffff831e7af8), uStack0000001c < uVar3)) {
        puVar4 = (unsigned int *)fn_8265CF50(0xffffffff831e7af8,uStack0000001c);
        iStack_20 = fn_8265F570(*puVar4);
      }
      if (iStack_20 == 0) {
        thunk_FUN_82a2b748(0x585);
      }
      else {
        iVar2 = fn_82F664B0(iStack00000024,iStack0000002c,iStack_20);
        if (iVar2 == 0) {
          lVar1 = fn_82F69B70(iStack00000024);
          return lVar1 + 1;
        }
        fn_8266C340(0xffffffff820015c0,0xffffffff82002790,0xbf,0xffffffff82002398);
        thunk_FUN_82a2b748(0x54f);
      }
    }
  }
  else {
    thunk_FUN_82a2b748(0x57);
  }
  return -1;
}

