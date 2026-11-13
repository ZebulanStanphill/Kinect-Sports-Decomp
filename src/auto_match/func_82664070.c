extern unsigned int *auStack_130;
extern int fn_826642E0();
extern int fn_82665488();
extern int fn_82668738();
extern int fn_8266B3A0();
extern int fn_8266C340();
extern int fn_82F664B0();
extern int fn_82F69B70();
extern unsigned int iStack00000014;
extern unsigned int iStack_28;
extern unsigned int lbl_831E7A18;


unsigned __int64 fn_82664070(int param_1)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  int iVar3;
  int iStack00000014;
  unsigned char auStack_130 [260];
  int *piStack_2c;
  int iStack_28;
  int *piStack_24;
  int *piStack_20;
  int *piStack_1c;
  
  iStack00000014 = param_1;
  if (lbl_831E7A18 == '\0') {
    thunk_FUN_82a2b748(0x15);
    uVar1 = 0;
  }
  else {
    if (param_1 == 0) {
      fn_8266C340(0xffffffff820015c0,0xffffffff82001e74,0x19,0xffffffff82001e9c);
    }
    if (iStack00000014 == 0) {
      thunk_FUN_82a2b748(0x57);
      uVar1 = 0;
    }
    else {
      uVar2 = fn_82F69B70(iStack00000014);
      if (uVar2 == 0) {
        fn_8266C340(0xffffffff820015c0,0xffffffff82001e74,0x24,0xffffffff82001e64);
      }
      if (0x103 < uVar2) {
        fn_8266C340(0xffffffff820015c0,0xffffffff82001e74,0x25,0xffffffff82001e44);
      }
      if ((uVar2 == 0) || (0x103 < uVar2)) {
        thunk_FUN_82a2b748(0xa1);
        uVar1 = 0;
      }
      else {
        iVar3 = fn_82F664B0(auStack_130,0x104,iStack00000014);
        if (iVar3 == 0) {
          fn_82665488(auStack_130);
          iStack_28 = fn_82668738(0x110);
          if (iStack_28 == 0) {
            piStack_1c = (int *)0x0;
          }
          else {
            piStack_1c = (int *)fn_8266B3A0(iStack_28,auStack_130);
          }
          piStack_2c = piStack_1c;
          if (piStack_1c == (int *)0x0) {
            fn_8266C340(0xffffffff820015c0,0xffffffff82001e74,0x3b,0xffffffff82001d90);
          }
          if (piStack_2c == (int *)0x0) {
            thunk_FUN_82a2b748(0xe);
            uVar1 = 0;
          }
          else {
            iVar3 = fn_826642E0(piStack_2c);
            if (iVar3 == 0) {
              piStack_20 = piStack_2c;
              piStack_24 = piStack_2c;
              if (piStack_2c != (int *)0x0) {
                (**(int (***)())(*piStack_2c + 0x1c))(piStack_2c,1);
              }
              uVar1 = 0;
            }
            else {
              uVar1 = 1;
            }
          }
        }
        else {
          if (iVar3 != 0) {
            fn_8266C340(0xffffffff820015c0,0xffffffff82001e74,0x33,0xffffffff82001db0);
          }
          thunk_FUN_82a2b748(0x54f);
          uVar1 = 0;
        }
      }
    }
  }
  return uVar1;
}

