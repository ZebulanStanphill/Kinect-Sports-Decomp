extern int fn_8266C340();
extern int fn_82F6A3F8();
extern unsigned int lbl_831E7A18;
extern unsigned int lbl_831E7A98;


unsigned __int64 fn_8266A4E8(int *param_1)

{
  unsigned __int64 uVar1;
  int iVar2;
  int *piStack00000014;
  
  piStack00000014 = param_1;
  if (lbl_831E7A18 == '\0') {
    thunk_FUN_82a2b748(0x15);
    uVar1 = 0;
  }
  else {
    if (param_1 == (int *)0x0) {
      fn_8266C340(0xffffffff820015c0,0xffffffff82002724,0x98,0xffffffff8200274c);
    }
    if (piStack00000014 == (int *)0x0) {
      thunk_FUN_82a2b748(0x57);
      uVar1 = 0;
    }
    else {
      if (*piStack00000014 != 0x5c) {
        fn_8266C340(0xffffffff820015c0,0xffffffff82002724,0x9f,0xffffffff820026c8);
      }
      if (*piStack00000014 == 0x5c) {
        if (lbl_831E7A98 == 0x5c) {
          iVar2 = fn_82F6A3F8(piStack00000014,*piStack00000014,0xffffffff831e7a98,0x5c);
          if (iVar2 == 0) {
            uVar1 = 1;
          }
          else {
            thunk_FUN_82a2b748(0x54f);
            uVar1 = 0;
          }
        }
        else {
          thunk_FUN_82a2b748(0xd);
          uVar1 = 0;
        }
      }
      else {
        thunk_FUN_82a2b748(0x57);
        uVar1 = 0;
      }
    }
  }
  return uVar1;
}

